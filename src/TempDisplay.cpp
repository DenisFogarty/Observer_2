#include "TempDisplay.h"

void TempDisplay::update() {
    std::cout << station->getTemperature() << std::endl;
}

TempDisplay::~TempDisplay()
{
    //dtor
}
