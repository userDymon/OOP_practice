#ifndef BUSLISTWIDGET_H
#define BUSLISTWIDGET_H

#include <QDialog>

#include "Bus.h"

namespace Ui {
class BusListWidget;
}

class BusListWidget : public QDialog
{
    Q_OBJECT

public:
    explicit BusListWidget(QWidget *parent = nullptr);
    ~BusListWidget();

public slots:
    void addNewBusItem(Bus*);

private:
    Ui::BusListWidget *ui;
};

#endif // BUSLISTWIDGET_H
