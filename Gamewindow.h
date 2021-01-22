#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTimer>
#include<enemies.h>
#include<QDebug>
#include<mybullet.h>
#include<QMouseEvent>
#include<QList>
class Gamewindow : public QWidget
{
    Q_OBJECT
    enemies *image;
    Mybullet *bullet;
    QTimer *time1;
    QList<Mybullet*> *list1;
    QList<enemies*> *list2;

public:
    Gamewindow(QWidget *parent = 0);
    ~Gamewindow();
    void mousePressEvent(QMouseEvent *event);
signals:


public slots:

    void check(int x,int y);
    void CreateAgain();
};

#endif // WIDGET_H
