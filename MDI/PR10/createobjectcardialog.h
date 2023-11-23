#ifndef CREATEOBJECTCARDIALOG_H
#define CREATEOBJECTCARDIALOG_H

#include <QDialog>
#include "Car.h"

namespace Ui {
class CreateObjectCarDialog;
}

class CreateObjectCarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateObjectCarDialog(QWidget *parent = nullptr);
    ~CreateObjectCarDialog();

private slots:
    void on_createObjectCarButton_clicked();

signals:
    void createdCar(Car*);

private:
    Ui::CreateObjectCarDialog *ui;
};

#endif // CREATEOBJECTCARDIALOG_H
