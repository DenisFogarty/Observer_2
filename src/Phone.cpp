#include "Phone.h"

void Phone::update() {
    std::cout << station->getTemperature() << "\n" << station->getForecast() << std::endl;
}

Phone::~Phone()
{
    //dtor
}
