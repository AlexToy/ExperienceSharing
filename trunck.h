#ifndef TRUNCK_H
#define TRUNCK_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>

class Trunck : public QGraphicsScene
{
private:
    QVBoxLayout *layout;
    QPushButton *addBranchButton;
    QTextEdit *branchName;

public:
    Trunck();
    QGraphicsView *view;
};

#endif // TRUNCK_H
