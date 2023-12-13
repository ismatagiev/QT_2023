#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <QWidget>
#include <QLCDNumber>
#include "subject.h"

class CurrentConditionsDisplay : public QWidget, public Observer
{
    Q_OBJECT
private:
    QLCDNumber *tempLCD;
    QLCDNumber *humLCD;
    QLCDNumber *pressLCD;
    float temperature;
    float humidity;
    float pressure;

    Subject *weatherData;
public:
    explicit CurrentConditionsDisplay(Subject *weatherData, QWidget *parent = nullptr);
    void update(float, float, float);
    void display();
signals:

};

#endif // CURRENTCONDITIONSDISPLAY_H
