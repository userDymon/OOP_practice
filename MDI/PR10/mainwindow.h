#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QDialog>

#include "createobjectcardialog.h"
#include "createobjectbusdialog.h"
#include "carlistwidget.h"
#include "buslistwidget.h"
#include "Car.h"
#include "dbmanager.h"
#include "sqlitedbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(DBManager* dbManager, QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void on_createObjectCarButton_clicked();  
    void on_toCreateObjectBusButton_clicked();

    void on_carListWidget_clicked();

    void on_busListWidget_clicked();

private:
    Ui::MainWindow *ui;

    CreateObjectCarDialog* carDialog;
    CreateObjectBusDialog* busDialog;
    CarListWidget* carList;
    BusListWidget* busList;

    DBManager* dbManager;
};
#endif // MAINWINDOW_H
