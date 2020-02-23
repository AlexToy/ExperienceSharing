#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>

#include "workingzone.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    WorkingZone *workingZone;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
