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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createObjectCarButton_clicked();  
    void on_toCreateObjectBusButton_clicked();
    void on_createObjectCar(Car*);
    void on_createObjectBus(Bus*);

    void on_carListWidget_clicked();

    void on_busListWidget_clicked();

signals:
    void createdCar(Car*);
    void createdBus(Bus*);

private:
    Ui::MainWindow *ui;
    QVector<Bus*> buses;
    QVector<Car*> cars;
    CreateObjectCarDialog* carDialog;
    CreateObjectBusDialog* busDialog;
    CarListWidget* carList;
    BusListWidget* busList;
};
#endif // MAINWINDOW_H
