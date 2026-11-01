/********************************************************************************
** Form generated from reading UI file 'dbar.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBAR_H
#define UI_DBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DBar
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lPlatos;
    QComboBox *cmbPlatos;
    QLabel *lPrecioFijo;
    QSpinBox *sbPrecio;
    QCheckBox *cbMediaRacion;
    QPushButton *btnAnyadir;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *lPedido;
    QListWidget *lwPlatosPedidos;
    QLabel *lPrecioCambia;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DBar)
    {
        if (DBar->objectName().isEmpty())
            DBar->setObjectName("DBar");
        DBar->resize(703, 465);
        verticalLayout_3 = new QVBoxLayout(DBar);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lPlatos = new QLabel(DBar);
        lPlatos->setObjectName("lPlatos");

        verticalLayout->addWidget(lPlatos);

        cmbPlatos = new QComboBox(DBar);
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->addItem(QString());
        cmbPlatos->setObjectName("cmbPlatos");

        verticalLayout->addWidget(cmbPlatos);

        lPrecioFijo = new QLabel(DBar);
        lPrecioFijo->setObjectName("lPrecioFijo");

        verticalLayout->addWidget(lPrecioFijo);

        sbPrecio = new QSpinBox(DBar);
        sbPrecio->setObjectName("sbPrecio");

        verticalLayout->addWidget(sbPrecio);

        cbMediaRacion = new QCheckBox(DBar);
        cbMediaRacion->setObjectName("cbMediaRacion");

        verticalLayout->addWidget(cbMediaRacion);

        btnAnyadir = new QPushButton(DBar);
        btnAnyadir->setObjectName("btnAnyadir");

        verticalLayout->addWidget(btnAnyadir);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lPedido = new QLabel(DBar);
        lPedido->setObjectName("lPedido");

        verticalLayout_2->addWidget(lPedido);

        lwPlatosPedidos = new QListWidget(DBar);
        lwPlatosPedidos->setObjectName("lwPlatosPedidos");

        verticalLayout_2->addWidget(lwPlatosPedidos);

        lPrecioCambia = new QLabel(DBar);
        lPrecioCambia->setObjectName("lPrecioCambia");

        verticalLayout_2->addWidget(lPrecioCambia);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DBar);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DBar);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DBar, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DBar, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DBar);
    } // setupUi

    void retranslateUi(QDialog *DBar)
    {
        DBar->setWindowTitle(QCoreApplication::translate("DBar", "Dialog", nullptr));
        lPlatos->setText(QCoreApplication::translate("DBar", "Platos", nullptr));
        cmbPlatos->setItemText(0, QCoreApplication::translate("DBar", "Calimotxo", nullptr));
        cmbPlatos->setItemText(1, QCoreApplication::translate("DBar", "Pataques braves", nullptr));
        cmbPlatos->setItemText(2, QCoreApplication::translate("DBar", "Tapa de xamo serra", nullptr));
        cmbPlatos->setItemText(3, QCoreApplication::translate("DBar", "Truita de pataques en sebolla", nullptr));
        cmbPlatos->setItemText(4, QCoreApplication::translate("DBar", "Truita de pataques a la sicopata (sense sebolla)", nullptr));
        cmbPlatos->setItemText(5, QCoreApplication::translate("DBar", "Tercio", nullptr));
        cmbPlatos->setItemText(6, QCoreApplication::translate("DBar", "Litrona", nullptr));
        cmbPlatos->setItemText(7, QCoreApplication::translate("DBar", "Calamars a la rumana", nullptr));

        lPrecioFijo->setText(QCoreApplication::translate("DBar", "Precio", nullptr));
        cbMediaRacion->setText(QCoreApplication::translate("DBar", "Media Racion", nullptr));
        btnAnyadir->setText(QCoreApplication::translate("DBar", "Anyadir", nullptr));
        lPedido->setText(QCoreApplication::translate("DBar", "Pedido", nullptr));
        lPrecioCambia->setText(QCoreApplication::translate("DBar", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBar: public Ui_DBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBAR_H
