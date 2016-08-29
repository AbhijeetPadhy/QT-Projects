#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
    QDir mDir("/home/abhijeet/Desktop");
    qDebug() << mDir.exists();
    */



    /*
    QDir mDir;

    foreach(QFileInfo mItm, mDir.drives()){
        qDebug() << mItm.absoluteFilePath();
    }
    */



    /*
    QDir mDir;
    QString mPath = "/home/abhijeet/Desktop/HelloDir";

    if(!mDir.exists(mPath)){
        mDir.mkpath(mPath);
        qDebug() << "Created";
    }
    else{
        qDebug() << "Already exists";
    }
    */

    QDir mDir("/home/abhijeet/Desktop");

    foreach(QFileInfo mitm, mDir.entryInfoList()){
        //qDebug() << mitm.absoluteFilePath();
        if(mitm.isDir())
            qDebug() << "Dir: " << mitm.absoluteFilePath();
        if(mitm.isFile())
            qDebug() << "File: " << mitm.absoluteFilePath();
    }

    return a.exec();
}
