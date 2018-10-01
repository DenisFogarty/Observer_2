#ifndef IOBSERVEE_H
#define IOBSERVEE_H

#include <iostream>
#include <vector>

#include "IObserver.h"


class IObservee
{
    public:
        IObservee();
        virtual ~IObservee();

        virtual void addObserver(IObserver* observer) = 0;
        virtual void removeObserver(IObserver* observer) = 0;
        virtual void notify() = 0;

    protected:

    private:
};

#endif // IOBSERVEE_H
