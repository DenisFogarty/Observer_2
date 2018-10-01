#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include <iostream>
#include <vector>
#include <string>

#include "IObservee.h"


class WeatherStation : public IObservee
{
    public:
        WeatherStation();
        virtual ~WeatherStation();

        void addObserver(IObserver* observer);
        void removeObserver(IObserver* observer);
        void notify();

        int getTemperature();
        std::string getForecast();

    protected:

    private:
        std::vector<IObserver*> observerList;
        int temperature;
        std::string forecast;
};

#endif // WEATHERSTATION_H
