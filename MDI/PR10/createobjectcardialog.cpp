#include "createobjectcardialog.h"
#include "ui_createobjectcardialog.h"

#include "Bus.h"
#include "mainwindow.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QMessageBox>
#include <QString>
#include <QSqlTableModel>


CreateObjectCarDialog::CreateObjectCarDialog(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateObjectCarDialog),
    dbManager(dbManager)
{
    ui->setupUi(this);
}

CreateObjectCarDialog::~CreateObjectCarDialog()
{
    delete ui;
}

void CreateObjectCarDialog::on_createObjectCarButton_clicked()
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
    else if(ui->vinNumLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->seatsCountLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else if(ui->doorCountLineEdit->text().isEmpty())
        QMessageBox::critical(this, "Eror", "The field must be filled");
    else{
        Car car(ui->idLineEdit->text().toInt(),
                           ui->modelLineEdit->text().toStdString(),
                           ui->yearLineEdit->text().toInt(),
                           ui->priceLineEdit->text().toDouble(),
                           ui->regNumLineEdit->text().toInt(),
                           ui->vinNumLineEdit->text().toInt(),
                           ui->seatsCountLineEdit->text().toInt(),
                           ui->doorCountLineEdit->text().toInt());
        dbManager->insertIntoTable(car);
        this->accept();
    }
}
