#include "buslistwidget.h"
#include "ui_buslistwidget.h"

BusListWidget::BusListWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusListWidget)
{
    ui->setupUi(this);
}

BusListWidget::~BusListWidget()
{
    delete ui;
}

void BusListWidget::addNewBusItem(Bus* bus){
    QListWidgetItem* item = new QListWidgetItem();
    item->setText(QString("id: %1, model: %2, year: %3, price: %4, registration number: %5, seats count: %6, has disabled seats: %7")
                      .arg(bus->getID())
                      .arg(QString::fromStdString(bus->getModel()))
                      .arg(bus->getYear())
                      .arg(bus->getPrice())
                      .arg(bus->getRegistrationNumber())
                      .arg(bus->getSeatsCount())
                      .arg(bus->getHasDisabledSeats() == 1 ? "true" : "false" )
                  );
    ui->listWidget->addItem(item);
}
