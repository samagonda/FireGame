#include "shootingwin.h"

ShootingWin::ShootingWin(QWidget *parent) : QWidget(parent)
{
     qDebug()<<"shooot area";

}

void ShootingWin::mousePressEvent(QMouseEvent *event)
{
    int x=event->x();
    int y=event->y();
    if(event->y()>400)
    {
    qDebug()<<"onmouse area"<<x<<y;
    bullet=new Mybullet(this);
    bullet->setGeometry(x,y,10,50);
    bullet->show();
    }
    else {
        return;
    }
}
