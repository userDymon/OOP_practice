/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate_object;
    QAction *actionShow_object;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *idLineEdit;
    QLineEdit *modelLineEdit;
    QLineEdit *yearLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *regNumLineEdit;
    QLineEdit *vinNumLineEdit;
    QLineEdit *passengerCoutnLineEdit;
    QLineEdit *doorCountLineEdit;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *id;
    QLabel *model;
    QLabel *year;
    QLabel *price;
    QLabel *regNum;
    QLabel *vinNum;
    QLabel *passengerCount;
    QLabel *doorCount;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *idLabel;
    QLabel *modelLabel;
    QLabel *yearLabel;
    QLabel *priceLabel;
    QLabel *regNumLabel;
    QLabel *vinNumLabel;
    QLabel *passengerCountLabel;
    QLabel *doorCountLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *createObject;
    QMenuBar *menubar;
    QMenu *menuCreate_object;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(328, 314);
        actionCreate_object = new QAction(MainWindow);
        actionCreate_object->setObjectName(QString::fromUtf8("actionCreate_object"));
        actionShow_object = new QAction(MainWindow);
        actionShow_object->setObjectName(QString::fromUtf8("actionShow_object"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        idLineEdit = new QLineEdit(centralwidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));

        verticalLayout_3->addWidget(idLineEdit);

        modelLineEdit = new QLineEdit(centralwidget);
        modelLineEdit->setObjectName(QString::fromUtf8("modelLineEdit"));

        verticalLayout_3->addWidget(modelLineEdit);

        yearLineEdit = new QLineEdit(centralwidget);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));

        verticalLayout_3->addWidget(yearLineEdit);

        priceLineEdit = new QLineEdit(centralwidget);
        priceLineEdit->setObjectName(QString::fromUtf8("priceLineEdit"));

        verticalLayout_3->addWidget(priceLineEdit);

        regNumLineEdit = new QLineEdit(centralwidget);
        regNumLineEdit->setObjectName(QString::fromUtf8("regNumLineEdit"));

        verticalLayout_3->addWidget(regNumLineEdit);

        vinNumLineEdit = new QLineEdit(centralwidget);
        vinNumLineEdit->setObjectName(QString::fromUtf8("vinNumLineEdit"));

        verticalLayout_3->addWidget(vinNumLineEdit);

        passengerCoutnLineEdit = new QLineEdit(centralwidget);
        passengerCoutnLineEdit->setObjectName(QString::fromUtf8("passengerCoutnLineEdit"));

        verticalLayout_3->addWidget(passengerCoutnLineEdit);

        doorCountLineEdit = new QLineEdit(centralwidget);
        doorCountLineEdit->setObjectName(QString::fromUtf8("doorCountLineEdit"));

        verticalLayout_3->addWidget(doorCountLineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        id = new QLabel(centralwidget);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout_2->addWidget(id);

        model = new QLabel(centralwidget);
        model->setObjectName(QString::fromUtf8("model"));

        verticalLayout_2->addWidget(model);

        year = new QLabel(centralwidget);
        year->setObjectName(QString::fromUtf8("year"));

        verticalLayout_2->addWidget(year);

        price = new QLabel(centralwidget);
        price->setObjectName(QString::fromUtf8("price"));

        verticalLayout_2->addWidget(price);

        regNum = new QLabel(centralwidget);
        regNum->setObjectName(QString::fromUtf8("regNum"));

        verticalLayout_2->addWidget(regNum);

        vinNum = new QLabel(centralwidget);
        vinNum->setObjectName(QString::fromUtf8("vinNum"));

        verticalLayout_2->addWidget(vinNum);

        passengerCount = new QLabel(centralwidget);
        passengerCount->setObjectName(QString::fromUtf8("passengerCount"));

        verticalLayout_2->addWidget(passengerCount);

        doorCount = new QLabel(centralwidget);
        doorCount->setObjectName(QString::fromUtf8("doorCount"));

        verticalLayout_2->addWidget(doorCount);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        idLabel = new QLabel(centralwidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        verticalLayout->addWidget(idLabel);

        modelLabel = new QLabel(centralwidget);
        modelLabel->setObjectName(QString::fromUtf8("modelLabel"));

        verticalLayout->addWidget(modelLabel);

        yearLabel = new QLabel(centralwidget);
        yearLabel->setObjectName(QString::fromUtf8("yearLabel"));

        verticalLayout->addWidget(yearLabel);

        priceLabel = new QLabel(centralwidget);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));

        verticalLayout->addWidget(priceLabel);

        regNumLabel = new QLabel(centralwidget);
        regNumLabel->setObjectName(QString::fromUtf8("regNumLabel"));

        verticalLayout->addWidget(regNumLabel);

        vinNumLabel = new QLabel(centralwidget);
        vinNumLabel->setObjectName(QString::fromUtf8("vinNumLabel"));

        verticalLayout->addWidget(vinNumLabel);

        passengerCountLabel = new QLabel(centralwidget);
        passengerCountLabel->setObjectName(QString::fromUtf8("passengerCountLabel"));

        verticalLayout->addWidget(passengerCountLabel);

        doorCountLabel = new QLabel(centralwidget);
        doorCountLabel->setObjectName(QString::fromUtf8("doorCountLabel"));

        verticalLayout->addWidget(doorCountLabel);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout);

        createObject = new QPushButton(centralwidget);
        createObject->setObjectName(QString::fromUtf8("createObject"));

        verticalLayout_4->addWidget(createObject);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 328, 20));
        menuCreate_object = new QMenu(menubar);
        menuCreate_object->setObjectName(QString::fromUtf8("menuCreate_object"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate_object->menuAction());
        menuCreate_object->addAction(actionCreate_object);
        menuCreate_object->addAction(actionShow_object);
        menuCreate_object->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate_object->setText(QCoreApplication::translate("MainWindow", "Create object", nullptr));
        actionShow_object->setText(QCoreApplication::translate("MainWindow", "Show object", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        id->setText(QCoreApplication::translate("MainWindow", "id:", nullptr));
        model->setText(QCoreApplication::translate("MainWindow", "model:", nullptr));
        year->setText(QCoreApplication::translate("MainWindow", "year:", nullptr));
        price->setText(QCoreApplication::translate("MainWindow", "price:", nullptr));
        regNum->setText(QCoreApplication::translate("MainWindow", "regestration number:", nullptr));
        vinNum->setText(QCoreApplication::translate("MainWindow", "vin number:", nullptr));
        passengerCount->setText(QCoreApplication::translate("MainWindow", "passenger seats:", nullptr));
        doorCount->setText(QCoreApplication::translate("MainWindow", "door count:", nullptr));
        idLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        modelLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        yearLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        priceLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        regNumLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        vinNumLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        passengerCountLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        doorCountLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        createObject->setText(QCoreApplication::translate("MainWindow", "create", nullptr));
        menuCreate_object->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
