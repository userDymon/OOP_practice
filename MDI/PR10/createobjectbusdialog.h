#ifndef CREATEOBJECTBUSDIALOG_H
#define CREATEOBJECTBUSDIALOG_H

#include <QDialog>
#include "Bus.h"

namespace Ui {
class CreateObjectBusDialog;
}

class CreateObjectBusDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateObjectBusDialog(QWidget *parent = nullptr);
    ~CreateObjectBusDialog();

private slots:
    void on_createObjectBusButton_clicked();

signals:
    void createdBus(Bus*);

private:
    Ui::CreateObjectBusDialog *ui;
};

#endif // CREATEOBJECTBUSDIALOG_H
