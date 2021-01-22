#ifndef MYBULLET_H
#define MYBULLET_H

#include <QWidget>
#include<QTimer>
#include<QPainter>
#include<QPaintEvent>
#include<QPen>
#include<QDebug>
#include<QObject>
class Mybullet : public QWidget
{
    Q_OBJECT
    QTimer *time1;
public:
    explicit Mybullet(QWidget *parent = nullptr);
void paintEvent(QPaintEvent *event);
~Mybullet();
signals:
void posb(int,int);
public slots:
void move();
};

#endif // MYBULLET_H
