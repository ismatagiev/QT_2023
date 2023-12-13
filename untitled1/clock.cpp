#include "clock.h"

Clock::Clock(QWidget *parent) : QLCDNumber(parent)
{

    this->start = 0;
    this->step = 1;
    this->reverse = false;
    this->second = 0;
    this->timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer()));
}

Clock::Clock(int start, int step, bool reverse, QWidget *parent) : QLCDNumber(parent)
{
    this->start = start;
    this->step = step;
    this->reverse = reverse;
    this->second = this->start;
    this->timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer()));
}

void Clock::startTimer()
{
    timer->start();
}

void Clock::onTimer()
{
    display(second);
    second -= step;
}
