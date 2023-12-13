#ifndef QUILIB_H
#define QUILIB_H

#include "quilib_global.h"

#include <QDialog>

class QUILIBSHARED_EXPORT QuiLib : public QDialog
{

public:
    explicit QuiLib(QWidget* parent = nullptr);
};

#endif // QUILIB_H
