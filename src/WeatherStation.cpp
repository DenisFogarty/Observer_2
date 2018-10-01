#include "WeatherStation.h"

WeatherStation::WeatherStation()
{
    temperature = 0;
    forecast = "Nothing yet";
}

void WeatherStation::addObserver(IObserver* observer) {
    observerList.push_back(observer);
}

void WeatherStation::removeObserver(IObserver* observer) {

}

void WeatherStation::notify() {
    for(int i = 0; i < observerList.size(); i++) {
        observerList.at(i)->update();
    }
}

int WeatherStation::getTemperature() {
    return temperature;
}

std::string WeatherStation::getForecast() {
    return forecast;
}

WeatherStation::~WeatherStation()
{

}
