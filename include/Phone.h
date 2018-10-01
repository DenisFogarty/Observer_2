#ifndef PHONE_H
#define PHONE_H

#include <iostream>

#include "IObserver.h"
#include "WeatherStation.h"


class Phone : public IObserver
{
    public:
        Phone(WeatherStation* station) : station(station) {
            station->addObserver(this);
        }

        virtual ~Phone();

        void update();

    protected:

    private:
        WeatherStation* station;
};

#endif // PHONE_H
