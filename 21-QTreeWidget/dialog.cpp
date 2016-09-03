#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    AddRoot("hello","world");
    AddRoot("hello","world");
    AddRoot("hello","world");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::AddRoot(QString name,QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,name);
    itm->setText(1,Description);
    ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm,"one","hello");
    AddChild(itm,"two","world");
}
void Dialog::AddChild(QTreeWidgetItem *parent, QString name,QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem(parent);
    itm->setText(0,name);
    itm->setText(1,Description);
    parent->addChild(itm);
}
