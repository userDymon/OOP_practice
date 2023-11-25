#ifndef CREATEOBJECTBUSDIALOG_H
#define CREATEOBJECTBUSDIALOG_H

#include <QDialog>
#include "Bus.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

namespace Ui {
class CreateObjectBusDialog;
}

class CreateObjectBusDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateObjectBusDialog(DBManager* dbManager, QWidget *parent = nullptr);
    ~CreateObjectBusDialog();

private slots:
    void on_createObjectBusButton_clicked();

private:
    Ui::CreateObjectBusDialog *ui;
    DBManager* dbManager;
};

#endif // CREATEOBJECTBUSDIALOG_H
