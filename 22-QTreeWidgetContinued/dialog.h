#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    QTreeWidgetItem* AddRoot(QString name,QString Description);
    QTreeWidgetItem* AddChild(QTreeWidgetItem *parent, QString name,QString Description);

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
