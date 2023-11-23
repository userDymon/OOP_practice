#include "mainwindow.h"
#include <QMessageBox>

#include <QString>
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


void MainWindow::hasCritical(QString text)
{
    if (text == "")
        QMessageBox::critical(this, "Object create error", "Fields must be filled");
}

void MainWindow::on_createObject_clicked()
{
    hasCritical(ui->idLineEdit->text());
    hasCritical(ui->modelLineEdit->text());
    hasCritical(ui->yearLineEdit->text());
    hasCritical(ui->priceLineEdit->text());
    hasCritical(ui->regNumLineEdit->text());
    hasCritical(ui->vinNumLineEdit->text());
    hasCritical(ui->passengerCoutnLineEdit->text());
    hasCritical(ui->doorCountLineEdit->text());

    car = new Car(ui->idLineEdit->text().toInt(),
                  ui->modelLineEdit->text().toStdString(),
                  ui->yearLineEdit->text().toInt(),
                  ui->priceLineEdit->text().toDouble(),
                  ui->regNumLineEdit->text().toInt(),
                  ui->vinNumLineEdit->text().toInt(),
                  ui->passengerCoutnLineEdit->text().toInt(),
                  ui->doorCountLineEdit->text().toInt());

    ui->idLabel->setText(QString::number(MainWindow::car->getID()));
    ui->modelLabel->setText(QString::fromStdString(MainWindow::car->getModel()));
    ui->yearLabel->setText(QString::number(MainWindow::car->getYear()));
    ui->priceLabel->setText(QString::number(MainWindow::car->getPrice()));
    ui->regNumLabel->setText(QString::number(MainWindow::car->getRegistrationNumber()));
    ui->vinNumLabel->setText(QString::number(MainWindow::car->getVinNumber()));
    ui->passengerCountLabel->setText(QString::number(MainWindow::car->getSeatsCount()));
    ui->doorCountLabel->setText(QString::number(MainWindow::car->getDoors()));

    ui->idLabel->setText(QString::number(car->getID()));
    ui->modelLabel->setText(QString::fromStdString(car->getModel()));
    ui->yearLabel->setText(QString::number(car->getYear()));
    ui->priceLabel->setText(QString::number(car->getPrice()));
    ui->regNumLabel->setText(QString::number(car->getRegistrationNumber()));
    ui->vinNumLabel->setText(QString::number(car->getVinNumber()));
    ui->passengerCountLabel->setText(QString::number(car->getSeatsCount()));
    ui->doorCountLabel->setText(QString::number(car->getDoors()));
}

void MainWindow::on_actionCreate_object_triggered()
{
    hasCritical(ui->idLineEdit->text());
    hasCritical(ui->modelLineEdit->text());
    hasCritical(ui->yearLineEdit->text());
    hasCritical(ui->priceLineEdit->text());
    hasCritical(ui->regNumLineEdit->text());
    hasCritical(ui->vinNumLineEdit->text());
    hasCritical(ui->passengerCoutnLineEdit->text());
    hasCritical(ui->doorCountLineEdit->text());

    car = new Car(ui->idLineEdit->text().toInt(),
                  ui->modelLineEdit->text().toStdString(),
                  ui->yearLineEdit->text().toInt(),
                  ui->priceLineEdit->text().toDouble(),
                  ui->regNumLineEdit->text().toInt(),
                  ui->vinNumLineEdit->text().toInt(),
                  ui->passengerCoutnLineEdit->text().toInt(),
                  ui->doorCountLineEdit->text().toInt());
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
