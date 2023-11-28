#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCoreApplication>
#include <QDialog>
#include <QFile>
#include <QLabel>
#include <QLineEdit>
#include <QTextStream>
#include <QtDebug>

#include "createobjectcardialog.h"
#include "createobjectbusdialog.h"
#include "carlistwidget.h"
#include "buslistwidget.h"
#include "Car.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

MainWindow::MainWindow(DBManager* dbManager, QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    dbManager(dbManager)
{
    ui->setupUi(this);

    carDialog = new CreateObjectCarDialog(dbManager, this);
    carDialog->setModal(true);

    busDialog = new CreateObjectBusDialog(dbManager, this);
    busDialog->setModal(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createObjectCarButton_clicked()
{
    carDialog->show();
}

void MainWindow::on_toCreateObjectBusButton_clicked()
{
    busDialog->show();
}

void MainWindow::on_carListWidget_clicked()
{
    carList = new CarListWidget(dbManager, this);
    carList->setModal(false);
    carList->show();
}


void MainWindow::on_busListWidget_clicked()
{
    busList = new BusListWidget(dbManager, this);
    busList->setModal(false);
    busList->show();
}

