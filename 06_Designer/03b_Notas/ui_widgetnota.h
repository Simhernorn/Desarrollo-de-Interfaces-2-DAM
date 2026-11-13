/********************************************************************************
** Form generated from reading UI file 'widgetnota.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETNOTA_H
#define UI_WIDGETNOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetNota
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl;
    QSpinBox *spinValor;
    QCheckBox *checkActivo;

    void setupUi(QWidget *WidgetNota)
    {
        if (WidgetNota->objectName().isEmpty())
            WidgetNota->setObjectName("WidgetNota");
        WidgetNota->resize(168, 109);
        verticalLayout = new QVBoxLayout(WidgetNota);
        verticalLayout->setObjectName("verticalLayout");
        lbl = new QLabel(WidgetNota);
        lbl->setObjectName("lbl");

        verticalLayout->addWidget(lbl);

        spinValor = new QSpinBox(WidgetNota);
        spinValor->setObjectName("spinValor");

        verticalLayout->addWidget(spinValor);

        checkActivo = new QCheckBox(WidgetNota);
        checkActivo->setObjectName("checkActivo");

        verticalLayout->addWidget(checkActivo);


        retranslateUi(WidgetNota);

        QMetaObject::connectSlotsByName(WidgetNota);
    } // setupUi

    void retranslateUi(QWidget *WidgetNota)
    {
        WidgetNota->setWindowTitle(QCoreApplication::translate("WidgetNota", "Form", nullptr));
        lbl->setText(QCoreApplication::translate("WidgetNota", "TextLabel", nullptr));
        checkActivo->setText(QCoreApplication::translate("WidgetNota", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetNota: public Ui_WidgetNota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETNOTA_H
