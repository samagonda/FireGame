#ifndef SHOOTINGWIN_H
#define SHOOTINGWIN_H

#include <QWidget>
#include<QMouseEvent>
#include<mybullet.h>
#include<QDebug>
class ShootingWin : public QWidget
{
    Q_OBJECT
    Mybullet *bullet;
public:
    explicit ShootingWin(QWidget *parent = nullptr);
void mousePressEvent(QMouseEvent *event);
signals:

public slots:
};

#endif // SHOOTINGWIN_H
