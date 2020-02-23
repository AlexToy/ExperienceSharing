#include "workingzone.h"

WorkingZone::WorkingZone()
{
    trunck = new Trunck;
    view = new QGraphicsView;
    view->setScene(this);
    view->show();

    buton = new QPushButton("YO");
    buton->setFixedSize(1000,1000);
    addWidget(trunck->view);
}
