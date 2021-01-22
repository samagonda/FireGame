#include "Gamewindow.h"

Gamewindow::Gamewindow(QWidget *parent)
    : QWidget(parent)
{
    time1=new QTimer;
    image=new enemies(this);
    connect(time1,SIGNAL(timeout()),this,SLOT(CreateAgain()));
    time1->start(3000);

}

void Gamewindow::check(int x,int y)
{
    bool result;
result=image->getcontains(x,y);

if(result)
{
    image->hide();
    bullet->hide();
}
}

Gamewindow::~Gamewindow()
{

}

void Gamewindow::mousePressEvent(QMouseEvent *event)
{
    int x=event->x();
    int y=event->y();
    if(event->y()>500)
    {
        bullet=new Mybullet(this);
        bullet->setGeometry(x,y,10,50);
        bullet->show();
    }
    else {
        return;
    }
    connect(bullet,SIGNAL(posb(int,int)),this,SLOT(check( int, int)));


}

void Gamewindow::CreateAgain()
{
    image=new enemies(this);
    image->setGeometry(0,0,80,80);
    image->show();

}
