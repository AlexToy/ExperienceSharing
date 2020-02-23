#ifndef WORKINGZONE_H
#define WORKINGZONE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPushButton>

class WorkingZone : public QGraphicsScene
{
private:
    QPushButton *buton;

public:
    QGraphicsView *view;
    WorkingZone();
};

#endif // WORKINGZONE_H
