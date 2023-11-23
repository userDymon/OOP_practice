#ifndef CARLISTWIDGET_H
#define CARLISTWIDGET_H

#include <QDialog>

#include "Car.h"

namespace Ui {
class CarListWidget;
}

class CarListWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CarListWidget(QWidget *parent = nullptr);
    ~CarListWidget();

public slots:
    void addNewCarItem(Car*);

private:
    Ui::CarListWidget *ui;
};

#endif // CARLISTWIDGET_H
