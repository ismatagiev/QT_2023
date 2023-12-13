#include "weatherdata.h"

WeatherData::WeatherData()
{
    timer = new QTimer();
    timer->setInterval(3000);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(on_timer()));
}
void WeatherData::onTimer()
{

}
void WeatherData::registerObserver(Observer* o)
{
    observers.append(o);
}
void WeatherData::removeObserver(Observer* o)
{
    observers.removeOne(o);
}
void WeatherData::notifyObservers()
{
    for (Observer* o : observers) {
        o->update(temperature, humidity, pressure);
    }
}
void WeatherData::measurementsChanged()
{
    notifyObservers()
;}
void WeatherData::setMeasurements(float t, float h, float p)
{
    temperature = t;
    humidity = h;
    pressure = p;
    measurementsChanged();
}
