#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData, QWidget *parent) : QWidget(parent)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
    tempLCD = new QLCDNumber(this);
    tempLCD->setGeometry(150, 100, 200, 50);
    tempLCD->show();
    humLCD = new QLCDNumber(this);
    humLCD->setGeometry(150, 160, 200, 50);
    humLCD->show();
    pressLCD = new QLCDNumber(this);
    pressLCD->setGeometry(150, 220, 200, 50);
    pressLCD->show();
}

void CurrentConditionsDisplay::update(float t, float h, float p)
{
    temperature = t;
    humidity = h;
    pressure = p;
    display();
}
void CurrentConditionsDisplay::display()
{
    tempLCD->display(temperature);
    humLCD->display(humidity);
    pressLCD->display(pressure);
}
