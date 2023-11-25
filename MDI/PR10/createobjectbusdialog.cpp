#include "createobjectbusdialog.h"
#include "ui_createobjectbusdialog.h"

#include "Car.h"
#include "mainwindow.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QMessageBox>
#include <QString>
#include <QSqlTableModel>


CreateObjectBusDialog::CreateObjectBusDialog(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateObjectBusDialog),
    dbManager(dbManager)
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
        Bus bus(ui->idLineEdit->text().toInt(),
                           ui->modelLineEdit->text().toStdString(),
                           ui->yearLineEdit->text().toInt(),
                           ui->priceLineEdit->text().toDouble(),
                           ui->regNumLineEdit->text().toInt(),
                           ui->seatsCountLineEdit->text().toInt(),
                           ui->hasDisabledSeatsCheckBox->isChecked()
                           );
        dbManager->insertIntoTable(bus);
        this->accept();
    }
}

