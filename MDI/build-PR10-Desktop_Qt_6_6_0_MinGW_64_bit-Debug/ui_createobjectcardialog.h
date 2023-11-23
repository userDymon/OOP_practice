/********************************************************************************
** Form generated from reading UI file 'createobjectcardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEOBJECTCARDIALOG_H
#define UI_CREATEOBJECTCARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateObjectCarDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *id;
    QLabel *model;
    QLabel *year;
    QLabel *price;
    QLabel *regNum;
    QLabel *vinNum;
    QLabel *seatsCount;
    QLabel *doorCount;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idLineEdit;
    QLineEdit *modelLineEdit;
    QLineEdit *yearLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *regNumLineEdit;
    QLineEdit *vinNumLineEdit;
    QLineEdit *seatsCountLineEdit;
    QLineEdit *doorCountLineEdit;
    QPushButton *createObjectCarButton;

    void setupUi(QDialog *CreateObjectCarDialog)
    {
        if (CreateObjectCarDialog->objectName().isEmpty())
            CreateObjectCarDialog->setObjectName("CreateObjectCarDialog");
        CreateObjectCarDialog->resize(400, 300);
        verticalLayout_4 = new QVBoxLayout(CreateObjectCarDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        id = new QLabel(CreateObjectCarDialog);
        id->setObjectName("id");

        verticalLayout->addWidget(id);

        model = new QLabel(CreateObjectCarDialog);
        model->setObjectName("model");

        verticalLayout->addWidget(model);

        year = new QLabel(CreateObjectCarDialog);
        year->setObjectName("year");

        verticalLayout->addWidget(year);

        price = new QLabel(CreateObjectCarDialog);
        price->setObjectName("price");

        verticalLayout->addWidget(price);

        regNum = new QLabel(CreateObjectCarDialog);
        regNum->setObjectName("regNum");

        verticalLayout->addWidget(regNum);

        vinNum = new QLabel(CreateObjectCarDialog);
        vinNum->setObjectName("vinNum");

        verticalLayout->addWidget(vinNum);

        seatsCount = new QLabel(CreateObjectCarDialog);
        seatsCount->setObjectName("seatsCount");

        verticalLayout->addWidget(seatsCount);

        doorCount = new QLabel(CreateObjectCarDialog);
        doorCount->setObjectName("doorCount");

        verticalLayout->addWidget(doorCount);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        idLineEdit = new QLineEdit(CreateObjectCarDialog);
        idLineEdit->setObjectName("idLineEdit");

        verticalLayout_2->addWidget(idLineEdit);

        modelLineEdit = new QLineEdit(CreateObjectCarDialog);
        modelLineEdit->setObjectName("modelLineEdit");

        verticalLayout_2->addWidget(modelLineEdit);

        yearLineEdit = new QLineEdit(CreateObjectCarDialog);
        yearLineEdit->setObjectName("yearLineEdit");

        verticalLayout_2->addWidget(yearLineEdit);

        priceLineEdit = new QLineEdit(CreateObjectCarDialog);
        priceLineEdit->setObjectName("priceLineEdit");

        verticalLayout_2->addWidget(priceLineEdit);

        regNumLineEdit = new QLineEdit(CreateObjectCarDialog);
        regNumLineEdit->setObjectName("regNumLineEdit");

        verticalLayout_2->addWidget(regNumLineEdit);

        vinNumLineEdit = new QLineEdit(CreateObjectCarDialog);
        vinNumLineEdit->setObjectName("vinNumLineEdit");

        verticalLayout_2->addWidget(vinNumLineEdit);

        seatsCountLineEdit = new QLineEdit(CreateObjectCarDialog);
        seatsCountLineEdit->setObjectName("seatsCountLineEdit");

        verticalLayout_2->addWidget(seatsCountLineEdit);

        doorCountLineEdit = new QLineEdit(CreateObjectCarDialog);
        doorCountLineEdit->setObjectName("doorCountLineEdit");

        verticalLayout_2->addWidget(doorCountLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        createObjectCarButton = new QPushButton(CreateObjectCarDialog);
        createObjectCarButton->setObjectName("createObjectCarButton");

        verticalLayout_3->addWidget(createObjectCarButton);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(CreateObjectCarDialog);

        QMetaObject::connectSlotsByName(CreateObjectCarDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateObjectCarDialog)
    {
        CreateObjectCarDialog->setWindowTitle(QCoreApplication::translate("CreateObjectCarDialog", "Dialog", nullptr));
        id->setText(QCoreApplication::translate("CreateObjectCarDialog", "id:", nullptr));
        model->setText(QCoreApplication::translate("CreateObjectCarDialog", "model:", nullptr));
        year->setText(QCoreApplication::translate("CreateObjectCarDialog", "year:", nullptr));
        price->setText(QCoreApplication::translate("CreateObjectCarDialog", "price:", nullptr));
        regNum->setText(QCoreApplication::translate("CreateObjectCarDialog", "registration number:", nullptr));
        vinNum->setText(QCoreApplication::translate("CreateObjectCarDialog", "vin number:", nullptr));
        seatsCount->setText(QCoreApplication::translate("CreateObjectCarDialog", "seats count:", nullptr));
        doorCount->setText(QCoreApplication::translate("CreateObjectCarDialog", "door count:", nullptr));
        createObjectCarButton->setText(QCoreApplication::translate("CreateObjectCarDialog", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateObjectCarDialog: public Ui_CreateObjectCarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEOBJECTCARDIALOG_H
