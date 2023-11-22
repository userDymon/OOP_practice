#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    void on_createObject_clicked();

    void on_actionCreate_object_triggered();

    void on_actionShow_object_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    Car *car;
};
#endif // MAINWINDOW_H
