/********************************************************************************
** Form generated from reading UI file 'deliminarplato.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIMINARPLATO_H
#define UI_DELIMINARPLATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DEliminarPlato
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *lwEliminarPlato;

    void setupUi(QDialog *DEliminarPlato)
    {
        if (DEliminarPlato->objectName().isEmpty())
            DEliminarPlato->setObjectName("DEliminarPlato");
        DEliminarPlato->resize(400, 300);
        horizontalLayout = new QHBoxLayout(DEliminarPlato);
        horizontalLayout->setObjectName("horizontalLayout");
        lwEliminarPlato = new QListWidget(DEliminarPlato);
        lwEliminarPlato->setObjectName("lwEliminarPlato");

        horizontalLayout->addWidget(lwEliminarPlato);


        retranslateUi(DEliminarPlato);

        QMetaObject::connectSlotsByName(DEliminarPlato);
    } // setupUi

    void retranslateUi(QDialog *DEliminarPlato)
    {
        DEliminarPlato->setWindowTitle(QCoreApplication::translate("DEliminarPlato", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DEliminarPlato: public Ui_DEliminarPlato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIMINARPLATO_H
