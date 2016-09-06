#include "mytimer.h"
#include <QDebug>

MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
            timer->start(1000);
}

void MyTimer::MySlot(){
    qDebug() << "Timer Executed";
}
