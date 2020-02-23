#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    workingZone = new WorkingZone;

    setFixedSize(500,500);
    setCentralWidget(workingZone->view);

}

MainWindow::~MainWindow()
{
}

