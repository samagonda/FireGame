#include "mybullet.h"

Mybullet::Mybullet(QWidget *parent) : QWidget(parent)
{
time1=new QTimer;
connect(time1,SIGNAL(timeout()),this,SLOT(move()));
time1->start(50);


}

void Mybullet::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
   p.setBrush(Qt::gray);
    p.setPen(Qt::SolidLine);
   QRect r(0,0,10,50);
   p.drawRect(r);
    this->update();
}

Mybullet::~Mybullet()
{


}

void Mybullet::move()
{
    int x=this->x();
    int y=this->y();
    y-=10;
if(y<=-50)
{
time1->stop();
}
    this->setGeometry(x,y,10,50);
    emit posb(this->x(),this->y());


}
