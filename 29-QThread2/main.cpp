#include <QCoreApplication>
#include <mythread.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread1;
    mThread1.name = "MyThread1";

    MyThread mThread2;
    mThread2.name = "MyThread2";

    MyThread mThread3;
    mThread3.name = "MyThread3";

    mThread1.start(QThread::HighestPriority);
    mThread2.start();
    mThread3.start(QThread::LowestPriority);

    return a.exec();
}
