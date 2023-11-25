#include "buslistwidget.h"
#include "ui_buslistwidget.h"

#include <QListWidgetItem>
#include <QString>

#include "dbmanager.h"
#include "sqlitedbmanager.h"

#include <QSqlTableModel>

BusListWidget::BusListWidget(DBManager* dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusListWidget),
    dbManager(dbManager)
{
    ui->setupUi(this);
    this->setupModel("buses",
                     QStringList() << tr("id")
                                   << tr("model")
                                   << tr("year")
                                   << tr("price")
                                   << tr("registration number")
                                   << tr("seats count")
                                   << tr("has disabled seats")
                     );

    this->createUI();
}

BusListWidget::~BusListWidget()
{
    delete ui;
    if (model)
        delete model;
}

void BusListWidget::setupModel(const QString& tableName, const QStringList& headers) {
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);
    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    model->setSort(0, Qt::AscendingOrder);
}

void BusListWidget::createUI() {
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    model->select();
}
