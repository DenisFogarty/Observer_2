#include "WeatherStation.h"
#include "Phone.h"
#include "TempDisplay.h"

#include <iostream>

using namespace std;

int main()
{
    WeatherStation station;
    Phone phone(&station);

    station.notify();

    TempDisplay display(&station);

    station.notify();
}
