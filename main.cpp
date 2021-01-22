#include "Gamewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gamewindow w;
    w.setFixedSize(500,600);
    w.showMaximized();
    return a.exec();
}
