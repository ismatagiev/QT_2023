#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subject.h"
#include "observer.h"
#include <QList>
#include <QObject>
#include <QTimer>


class WeatherData : public Subject
{
    Q_OBJECT
private:
    QList<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
    QTimer *timer;
public:
    WeatherData();
     void registerObserver(Observer*);
     void removeObserver(Observer*);
     void notifyObservers();
     void measurementsChanged();
     void setMeasurements(float, float, float);
public slots:
     void onTimer();
};

#endif // WEATHERDATA_H
