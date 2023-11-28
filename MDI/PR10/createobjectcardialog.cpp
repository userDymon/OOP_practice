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
    try {
        if (ui->idLineEdit->text().isEmpty() || ui->modelLineEdit->text().isEmpty()
            || ui->priceLineEdit->text().isEmpty() || ui->regNumLineEdit->text().isEmpty()
            || ui->seatsCountLineEdit->text().isEmpty() || ui->vinNumLineEdit->text().isEmpty()
            || ui->doorCountLineEdit->text().isEmpty())
            throw "notFilledExeption";

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

    } catch (const char *ex) {
        QMessageBox::critical(this, "Eror", "The field must be filled");
        qInfo() << "The field must be filled";
        this->reject();
    }
}
