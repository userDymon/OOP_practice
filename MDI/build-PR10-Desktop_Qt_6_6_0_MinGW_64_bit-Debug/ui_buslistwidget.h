/********************************************************************************
** Form generated from reading UI file 'buslistwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSLISTWIDGET_H
#define UI_BUSLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_BusListWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *BusListWidget)
    {
        if (BusListWidget->objectName().isEmpty())
            BusListWidget->setObjectName("BusListWidget");
        BusListWidget->resize(534, 300);
        horizontalLayout = new QHBoxLayout(BusListWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(BusListWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        retranslateUi(BusListWidget);

        QMetaObject::connectSlotsByName(BusListWidget);
    } // setupUi

    void retranslateUi(QDialog *BusListWidget)
    {
        BusListWidget->setWindowTitle(QCoreApplication::translate("BusListWidget", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusListWidget: public Ui_BusListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSLISTWIDGET_H
