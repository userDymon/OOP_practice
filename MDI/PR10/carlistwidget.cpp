#include "carlistwidget.h"
#include "ui_carlistwidget.h"

#include <QListWidgetItem>
#include <QString>

CarListWidget::CarListWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarListWidget)
{
    ui->setupUi(this);
}

CarListWidget::~CarListWidget()
{
    delete ui;
}

void CarListWidget::addNewCarItem(Car* car){
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("id: %1, model: %2, year: %3, price: %4, registration number: %5, vin number: %6, seats count: %7, door count: %8")
                      .arg(car->getID())
                      .arg(QString::fromStdString(car->getModel()))
                      .arg(car->getYear())
                      .arg(car->getPrice())
                      .arg(car->getRegistrationNumber())
                      .arg(car->getVinNumber())
                      .arg(car->getSeatsCount())
                      .arg(car->getDoors())
                  );
    ui->listWidget->addItem(item);
}
