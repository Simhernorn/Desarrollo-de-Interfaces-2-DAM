/********************************************************************************
** Form generated from reading UI file 'calculaora.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULAORA_H
#define UI_CALCULAORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Calculaora
{
public:
    QVBoxLayout *verticalLayout_2;
    QLineEdit *display;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_0;
    QPushButton *btn_dot;
    QPushButton *pushButton_10;
    QVBoxLayout *verticalLayout;
    QPushButton *btnMas;
    QPushButton *btnIgual;

    void setupUi(QDialog *Calculaora)
    {
        if (Calculaora->objectName().isEmpty())
            Calculaora->setObjectName("Calculaora");
        Calculaora->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Calculaora);
        verticalLayout_2->setObjectName("verticalLayout_2");
        display = new QLineEdit(Calculaora);
        display->setObjectName("display");

        verticalLayout_2->addWidget(display);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btn_7 = new QPushButton(Calculaora);
        btn_7->setObjectName("btn_7");

        gridLayout->addWidget(btn_7, 0, 0, 1, 1);

        btn_8 = new QPushButton(Calculaora);
        btn_8->setObjectName("btn_8");

        gridLayout->addWidget(btn_8, 0, 1, 1, 1);

        btn_9 = new QPushButton(Calculaora);
        btn_9->setObjectName("btn_9");

        gridLayout->addWidget(btn_9, 0, 2, 1, 1);

        btn_4 = new QPushButton(Calculaora);
        btn_4->setObjectName("btn_4");

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);

        btn_5 = new QPushButton(Calculaora);
        btn_5->setObjectName("btn_5");

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_6 = new QPushButton(Calculaora);
        btn_6->setObjectName("btn_6");

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_1 = new QPushButton(Calculaora);
        btn_1->setObjectName("btn_1");

        gridLayout->addWidget(btn_1, 2, 0, 1, 1);

        btn_2 = new QPushButton(Calculaora);
        btn_2->setObjectName("btn_2");

        gridLayout->addWidget(btn_2, 2, 1, 1, 1);

        btn_3 = new QPushButton(Calculaora);
        btn_3->setObjectName("btn_3");

        gridLayout->addWidget(btn_3, 2, 2, 1, 1);

        btn_0 = new QPushButton(Calculaora);
        btn_0->setObjectName("btn_0");

        gridLayout->addWidget(btn_0, 3, 0, 1, 1);

        btn_dot = new QPushButton(Calculaora);
        btn_dot->setObjectName("btn_dot");

        gridLayout->addWidget(btn_dot, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(Calculaora);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout->addWidget(pushButton_10, 3, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnMas = new QPushButton(Calculaora);
        btnMas->setObjectName("btnMas");

        verticalLayout->addWidget(btnMas);

        btnIgual = new QPushButton(Calculaora);
        btnIgual->setObjectName("btnIgual");

        verticalLayout->addWidget(btnIgual);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Calculaora);

        QMetaObject::connectSlotsByName(Calculaora);
    } // setupUi

    void retranslateUi(QDialog *Calculaora)
    {
        Calculaora->setWindowTitle(QCoreApplication::translate("Calculaora", "Dialog", nullptr));
        btn_7->setText(QCoreApplication::translate("Calculaora", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("Calculaora", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("Calculaora", "9", nullptr));
        btn_4->setText(QCoreApplication::translate("Calculaora", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("Calculaora", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("Calculaora", "6", nullptr));
        btn_1->setText(QCoreApplication::translate("Calculaora", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("Calculaora", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("Calculaora", "3", nullptr));
        btn_0->setText(QCoreApplication::translate("Calculaora", "0", nullptr));
        btn_dot->setText(QCoreApplication::translate("Calculaora", ".", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Calculaora", "PushButton", nullptr));
        btnMas->setText(QCoreApplication::translate("Calculaora", "+", nullptr));
        btnIgual->setText(QCoreApplication::translate("Calculaora", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculaora: public Ui_Calculaora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULAORA_H
