#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Statlabel = new QLabel(this);
    Statprogress = new QProgressBar(this);
    ui->statusBar->addPermanentWidget(Statlabel);
    ui->statusBar->addPermanentWidget(Statprogress);
     //ui->statusBar->addPermanentWidget(Statprogress,1);
    Statlabel->setText("Hello");
    Statprogress->setTextVisible(false);
    Statprogress->setValue(45);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_Something_triggered()
{
    ui->statusBar->showMessage("Hello",2000);

}
