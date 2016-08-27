#include <QApplication>
//#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>


int main(int argc, char *argv[]){
    QApplication app(argc,argv);
    //QLabel *label = new QLabel("<h2>Hello</h2> <font color=red><i>world</i></font>");
    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

    //QHBoxLayout *hlayout = new QHBoxLayout;
    QVBoxLayout *vlayout = new QVBoxLayout;

    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);

    window->setLayout(vlayout);

    window->show();
    //label->show();
    return app.exec();
}
