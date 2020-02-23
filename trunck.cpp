#include "trunck.h"

Trunck::Trunck()
{
    layout = new QVBoxLayout;
    addBranchButton = new QPushButton;
    branchName = new QTextEdit("Yo");
    view = new QGraphicsView;

    layout->addWidget(addBranchButton);
    layout->addWidget(branchName);

    view->setScene(this);
    view->show();
}
