/********************************************************************************
** Form generated from reading UI file 'createobjectbusdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEOBJECTBUSDIALOG_H
#define UI_CREATEOBJECTBUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateObjectBusDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idLineEdit;
    QLineEdit *modelLineEdit;
    QLineEdit *yearLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *regNumLineEdit;
    QLineEdit *seatsCountLineEdit;
    QCheckBox *hasDisabledSeatsCheckBox;
    QPushButton *createObjectBusButton;

    void setupUi(QDialog *CreateObjectBusDialog)
    {
        if (CreateObjectBusDialog->objectName().isEmpty())
            CreateObjectBusDialog->setObjectName("CreateObjectBusDialog");
        CreateObjectBusDialog->resize(286, 265);
        verticalLayout_4 = new QVBoxLayout(CreateObjectBusDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(CreateObjectBusDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(CreateObjectBusDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(CreateObjectBusDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(CreateObjectBusDialog);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(CreateObjectBusDialog);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(CreateObjectBusDialog);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(CreateObjectBusDialog);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        idLineEdit = new QLineEdit(CreateObjectBusDialog);
        idLineEdit->setObjectName("idLineEdit");

        verticalLayout_2->addWidget(idLineEdit);

        modelLineEdit = new QLineEdit(CreateObjectBusDialog);
        modelLineEdit->setObjectName("modelLineEdit");

        verticalLayout_2->addWidget(modelLineEdit);

        yearLineEdit = new QLineEdit(CreateObjectBusDialog);
        yearLineEdit->setObjectName("yearLineEdit");

        verticalLayout_2->addWidget(yearLineEdit);

        priceLineEdit = new QLineEdit(CreateObjectBusDialog);
        priceLineEdit->setObjectName("priceLineEdit");

        verticalLayout_2->addWidget(priceLineEdit);

        regNumLineEdit = new QLineEdit(CreateObjectBusDialog);
        regNumLineEdit->setObjectName("regNumLineEdit");

        verticalLayout_2->addWidget(regNumLineEdit);

        seatsCountLineEdit = new QLineEdit(CreateObjectBusDialog);
        seatsCountLineEdit->setObjectName("seatsCountLineEdit");

        verticalLayout_2->addWidget(seatsCountLineEdit);

        hasDisabledSeatsCheckBox = new QCheckBox(CreateObjectBusDialog);
        hasDisabledSeatsCheckBox->setObjectName("hasDisabledSeatsCheckBox");

        verticalLayout_2->addWidget(hasDisabledSeatsCheckBox);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        createObjectBusButton = new QPushButton(CreateObjectBusDialog);
        createObjectBusButton->setObjectName("createObjectBusButton");

        verticalLayout_3->addWidget(createObjectBusButton);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(CreateObjectBusDialog);

        QMetaObject::connectSlotsByName(CreateObjectBusDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateObjectBusDialog)
    {
        CreateObjectBusDialog->setWindowTitle(QCoreApplication::translate("CreateObjectBusDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateObjectBusDialog", "id:", nullptr));
        label_2->setText(QCoreApplication::translate("CreateObjectBusDialog", "model:", nullptr));
        label_3->setText(QCoreApplication::translate("CreateObjectBusDialog", "year:", nullptr));
        label_5->setText(QCoreApplication::translate("CreateObjectBusDialog", "price:", nullptr));
        label_6->setText(QCoreApplication::translate("CreateObjectBusDialog", "registration number:", nullptr));
        label_7->setText(QCoreApplication::translate("CreateObjectBusDialog", "seats count:", nullptr));
        label_8->setText(QCoreApplication::translate("CreateObjectBusDialog", "has disabled seats:", nullptr));
        hasDisabledSeatsCheckBox->setText(QString());
        createObjectBusButton->setText(QCoreApplication::translate("CreateObjectBusDialog", "Create Object", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateObjectBusDialog: public Ui_CreateObjectBusDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEOBJECTBUSDIALOG_H
