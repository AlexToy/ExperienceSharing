#ifndef WORKINGZONE_H
#define WORKINGZONE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPushButton>

#include "trunck.h"

class WorkingZone : public QGraphicsScene
{
private:
    QPushButton *buton;
    Trunck *trunck;

public:
    QGraphicsView *view;
    WorkingZone();
};

#endif // WORKINGZONE_H
