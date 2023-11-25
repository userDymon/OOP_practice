#include "carlistwidget.h"
#include "ui_carlistwidget.h"

#include <QListWidgetItem>
#include <QString>

#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QSqlTableModel>

CarListWidget::CarListWidget(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarListWidget),
    dbManager(dbManager)
{
    ui->setupUi(this);
    this->setupModel("cars",
                     QStringList() << tr("id")
                                   << tr("model")
                                   << tr("year")
                                   << tr("price")
                                   << tr("registration number")
                                   << tr("vin number")
                                   << tr("seats count")
                                   << tr("door count")
                     );

    this->createUI();
}

CarListWidget::~CarListWidget()
{
    delete ui;
    if (model)
        delete model;
}

void CarListWidget::setupModel(const QString& tableName, const QStringList& headers) {
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);

    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0, Qt::AscendingOrder);
}

void CarListWidget::createUI() {
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}
