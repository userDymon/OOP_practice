#include "createobjectbusdialog.h"
#include "ui_createobjectbusdialog.h"
#include "Car.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QString>


CreateObjectBusDialog::CreateObjectBusDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateObjectBusDialog)
{
    ui->setupUi(this);
}

CreateObjectBusDialog::~CreateObjectBusDialog()
{
    delete ui;
}

void CreateObjectBusDialog::on_createObjectBusButton_clicked()
{
    if(ui->idLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->modelLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->yearLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->priceLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->regNumLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->seatsCountLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else{
        Bus * bus = new Bus(ui->idLineEdit->text().toInt(),
                           ui->modelLineEdit->text().toStdString(),
                           ui->yearLineEdit->text().toInt(),
                           ui->priceLineEdit->text().toDouble(),
                           ui->regNumLineEdit->text().toInt(),
                           ui->seatsCountLineEdit->text().toInt(),
                           ui->hasDisabledSeatsCheckBox->isChecked()
                           );
        emit createdBus(bus);
        this->accept();
    }
}

