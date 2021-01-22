#ifndef ENEMIES_H
#define ENEMIES_H

#include <QWidget>
#include<QTimer>
#include<QPainter>
#include<QPaintEvent>
#include<QPen>
#include<QDebug>

class enemies : public QWidget
{
    Q_OBJECT
    QTimer *time1;
public:
    explicit enemies(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    ~enemies();
signals:
    void pose(int,int);
public slots:
    void move();
    bool getcontains(int, int );
};

#endif // ENEMIES_H
