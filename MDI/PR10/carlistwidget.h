#ifndef CARLISTWIDGET_H
#define CARLISTWIDGET_H

#include <QDialog>

#include "Car.h"

#include "dbmanager.h"
#include "sqlitedbmanager.h"

class QSqlTableModel;

class DBManager;

namespace Ui {
class CarListWidget;
}

class CarListWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CarListWidget(DBManager* dbManager, QWidget* parent = nullptr);
    ~CarListWidget();

private:
    Ui::CarListWidget *ui;

    DBManager* dbManager;
    QSqlTableModel* model;

    void setupModel(const QString& tableName, const QStringList& headers);

    void createUI();
};

#endif // CARLISTWIDGET_H
