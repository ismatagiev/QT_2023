#ifndef CLOCK_H
#define CLOCK_H

#include <QObject>
#include <QLCDNumber>
#include <QTimer>

class Clock : public QLCDNumber
{
    Q_OBJECT
public:
    Clock(QWidget *parent = nullptr);
    Clock(int start, int step, bool reverse,
          QWidget *parent = nullptr);

    void startTimer();
private:
    int start;
    int step;
    bool reverse;
    int second;
    QTimer *timer;

private slots:
    void onTimer();
};

#endif // CLOCK_H
