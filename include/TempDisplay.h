#ifndef TEMPDISPLAY_H
#define TEMPDISPLAY_H

#include <iostream>

#include "IObserver.h"
#include "WeatherStation.h"

class TempDisplay : IObserver
{
    public:
        TempDisplay(WeatherStation* station) : station(station) {
            station->addObserver(this);
        }

        virtual ~TempDisplay();

        void update();

    protected:

    private:
        WeatherStation* station;
};

#endif // TEMPDISPLAY_H
