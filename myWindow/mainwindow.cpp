#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    MyDialog mdialog;
    mdialog.setModal(true);
    mdialog.exec();
}

void MainWindow::on_actionSec_Window_triggered()
{
    mDialog = new MyDialog(this);
    mDialog->show();
}
