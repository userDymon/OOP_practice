#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QLabel>
#include <QLineEdit>

#include "createobjectcardialog.h"
#include "createobjectbusdialog.h"
#include "carlistwidget.h"
#include "buslistwidget.h"
#include "Car.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    carDialog = new CreateObjectCarDialog(this);
    carDialog->setModal(true);

    busDialog = new CreateObjectBusDialog(this);
    busDialog->setModal(true);

    carList = new CarListWidget(this);
    carList->setModal(false);

    busList = new BusListWidget(this);
    busList->setModal(false);

    connect(carDialog, &CreateObjectCarDialog::createdCar, this, MainWindow::on_createObjectCar);
    connect(busDialog, &CreateObjectBusDialog::createdBus, this, MainWindow::on_createObjectBus);

    connect(this, MainWindow::createdCar, carList, &CarListWidget::addNewCarItem);
    connect(this, MainWindow::createdBus, busList, &BusListWidget::addNewBusItem);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createObjectCarButton_clicked()
{
    carDialog->show();
}

void MainWindow::on_createObjectCar(Car* car)
{
    cars.push_back(car);
    emit createdCar(cars.back());
}

void MainWindow::on_toCreateObjectBusButton_clicked()
{
    busDialog->show();
}

void MainWindow::on_createObjectBus(Bus* bus)
{
    buses.push_back(bus);
    emit createdBus(buses.back());
}

void MainWindow::on_carListWidget_clicked()
{
    carList->show();
}


void MainWindow::on_busListWidget_clicked()
{
    busList->show();
}

