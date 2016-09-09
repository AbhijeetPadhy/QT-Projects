#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>

class MyThread: public QThread
{
public:
    MyThread();
    QString name;
    void run();
    bool Stop;
};

#endif // MYTHREAD_H
