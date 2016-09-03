#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    QTreeWidgetItem *animals = AddRoot("Animals","Eyes, legs and move!!");
        QTreeWidgetItem *mammals = AddChild(animals,"Mammals","Give birth to young ones!!");
            AddChild(mammals,"Humans","It's we!!");
            AddChild(mammals,"Elephants","Black and Huge!!");
        QTreeWidgetItem *reptiles = AddChild(animals,"Reptiles","Lay Eggs!!");
            AddChild(reptiles,"Snake","Caution!!");
            AddChild(reptiles,"Turtle","Slow and steady wins the race!!");
        AddChild(animals,"Birds","Fly and Lay Eggs!!");
    QTreeWidgetItem *plants = AddRoot("Plants","Leaves, Stem and Root!!");
        AddChild(plants,"Green Plants","Make their own food!!");
        AddChild(plants,"Non Green Plants","Steal others' food!!");

}

Dialog::~Dialog()
{
    delete ui;
}

QTreeWidgetItem* Dialog::AddRoot(QString name,QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0,name);
    itm->setText(1,Description);
    ui->treeWidget->addTopLevelItem(itm);
    return itm;
}
QTreeWidgetItem* Dialog::AddChild(QTreeWidgetItem *parent, QString name,QString Description){
    QTreeWidgetItem *itm = new QTreeWidgetItem(parent);
    itm->setText(0,name);
    itm->setText(1,Description);
    parent->addChild(itm);
    return itm;
}
