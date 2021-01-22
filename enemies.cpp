#include "enemies.h"

enemies::enemies(QWidget *parent) : QWidget(parent)
{
    time1=new QTimer;

    connect(time1,SIGNAL(timeout()),this,SLOT(move()));
    time1->start(5000);

}

void enemies::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
   p.setBrush(Qt::gray);
    p.setPen(Qt::SolidLine);
   QRect r(0,0,80,80);
   p.drawRect(r);

}

enemies::~enemies()
{
     qDebug()<<"enemies delete";

}
bool enemies::getcontains( int x, int y)
{

    QRect r=this->geometry();
    QPoint p(x,y);
    if(r.contains(p))
    {
        return true;
    }
    else {
        return false;
    }
}

void enemies::move()
{

    int x=this->x();
    int y=this->y();
    x+=10;

    this->setGeometry(x,y,80,80);

}
