#include "mainwindow.h"
#include <QMessageBox>
#include "Car.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createObject_clicked()
{
    if (ui->idLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->modelLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->yearLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->priceLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->regNumLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->vinNumLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->passengerCoutnLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->doorCountLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    }

    Car newCar(ui->idLineEdit->text().toInt(),
               ui->modelLineEdit->text().toStdString(),
               ui->yearLineEdit->text().toInt(),
               ui->priceLineEdit->text().toDouble(),
               ui->regNumLineEdit->text().toInt(),
               ui->vinNumLineEdit->text().toInt(),
               ui->passengerCoutnLineEdit->text().toInt(),
               ui->doorCountLineEdit->text().toInt());

    car = &newCar;

    ui->idLabel->setText(QString::number(newCar.getID()));
    ui->modelLabel->setText(QString::fromStdString(newCar.getModel()));
    ui->yearLabel->setText(QString::number(newCar.getYear()));
    ui->priceLabel->setText(QString::number(newCar.getPrice()));
    ui->regNumLabel->setText(QString::number(newCar.getRegistrationNumber()));
    ui->vinNumLabel->setText(QString::number(newCar.getVinNumber()));
    ui->passengerCountLabel->setText(QString::number(newCar.getSeatsCount()));
    ui->doorCountLabel->setText(QString::number(newCar.getDoors()));
}

void MainWindow::on_actionCreate_object_triggered()
{
    if (ui->idLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->modelLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->yearLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->priceLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->regNumLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->vinNumLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->passengerCoutnLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    } else if (ui->doorCountLineEdit->text() == "") {
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
    }

    Car newCar(ui->idLineEdit->text().toInt(),
               ui->modelLineEdit->text().toStdString(),
               ui->yearLineEdit->text().toInt(),
               ui->priceLineEdit->text().toDouble(),
               ui->regNumLineEdit->text().toInt(),
               ui->vinNumLineEdit->text().toInt(),
               ui->passengerCoutnLineEdit->text().toInt(),
               ui->doorCountLineEdit->text().toInt());

    car = &newCar;
}

void MainWindow::on_actionShow_object_triggered()
{
    ui->idLabel->setText(QString::number(MainWindow::car->getID()));
    ui->modelLabel->setText(QString::fromStdString(MainWindow::car->getModel()));
    ui->yearLabel->setText(QString::number(MainWindow::car->getYear()));
    ui->priceLabel->setText(QString::number(MainWindow::car->getPrice()));
    ui->regNumLabel->setText(QString::number(MainWindow::car->getRegistrationNumber()));
    ui->vinNumLabel->setText(QString::number(MainWindow::car->getVinNumber()));
    ui->passengerCountLabel->setText(QString::number(MainWindow::car->getSeatsCount()));
    ui->doorCountLabel->setText(QString::number(MainWindow::car->getDoors()));
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}
