#ifndef CREATEOBJECTCARDIALOG_H
#define CREATEOBJECTCARDIALOG_H

#include <QDialog>
#include "Car.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

namespace Ui {
class CreateObjectCarDialog;
}

class CreateObjectCarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateObjectCarDialog(DBManager* dbManager, QWidget *parent = nullptr);
    ~CreateObjectCarDialog();

private slots:
    void on_createObjectCarButton_clicked();

private:
    Ui::CreateObjectCarDialog *ui;
    DBManager* dbManager;
};

#endif // CREATEOBJECTCARDIALOG_H
