/********************************************************************************
** Form generated from reading UI file 'carlistwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARLISTWIDGET_H
#define UI_CARLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_CarListWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *CarListWidget)
    {
        if (CarListWidget->objectName().isEmpty())
            CarListWidget->setObjectName("CarListWidget");
        CarListWidget->resize(710, 300);
        horizontalLayout = new QHBoxLayout(CarListWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(CarListWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        retranslateUi(CarListWidget);

        QMetaObject::connectSlotsByName(CarListWidget);
    } // setupUi

    void retranslateUi(QDialog *CarListWidget)
    {
        CarListWidget->setWindowTitle(QCoreApplication::translate("CarListWidget", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarListWidget: public Ui_CarListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARLISTWIDGET_H
