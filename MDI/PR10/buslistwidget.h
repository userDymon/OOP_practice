#ifndef BUSLISTWIDGET_H
#define BUSLISTWIDGET_H

#include <QDialog>

#include "Bus.h"

#include "dbmanager.h"
#include "sqlitedbmanager.h"

class QSqlTableModel;

class DBManager;

namespace Ui {
class BusListWidget;
}

class BusListWidget : public QDialog
{
    Q_OBJECT

public:
    explicit BusListWidget(DBManager* dbManager, QWidget* parent = nullptr);
    ~BusListWidget();

private:
    Ui::BusListWidget *ui;

    DBManager* dbManager;
    QSqlTableModel* model;

    void setupModel(const QString& tableName, const QStringList& headers);

    void createUI();
};

#endif // BUSLISTWIDGET_H
