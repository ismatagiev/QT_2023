#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <QObject>

class Subject : public QObject
{
public:
    virtual void registerObserver(Observer*) = 0;
    virtual void removeObserver(Observer*) = 0;
    virtual void notifyObservers() = 0;
};

#endif // SUBJECT_H
