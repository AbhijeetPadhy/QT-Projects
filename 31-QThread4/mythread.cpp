#include "mythread.h"

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

void MyThread::run(){
    for(int i=0;i<10000;i++){
        if(this->Stop)
            break;
        emit NumberChanged(i);
        this->msleep(100);
    }
}
