/********************************************************************************
** Form generated from reading UI file 'dpedido.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPEDIDO_H
#define UI_DPEDIDO_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DPedido
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cbPlatos;
    QLabel *label_2;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidget;
    QLabel *lPrecio;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DPedido)
    {
        if (DPedido->objectName().isEmpty())
            DPedido->setObjectName("DPedido");
        DPedido->resize(703, 465);
        verticalLayout_3 = new QVBoxLayout(DPedido);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(DPedido);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        cbPlatos = new QComboBox(DPedido);
        cbPlatos->setObjectName("cbPlatos");

        verticalLayout->addWidget(cbPlatos);

        label_2 = new QLabel(DPedido);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(DPedido);
        spinBox->setObjectName("spinBox");

        verticalLayout->addWidget(spinBox);

        checkBox = new QCheckBox(DPedido);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        pushButton = new QPushButton(DPedido);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(DPedido);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        listWidget = new QListWidget(DPedido);
        listWidget->setObjectName("listWidget");

        verticalLayout_2->addWidget(listWidget);

        lPrecio = new QLabel(DPedido);
        lPrecio->setObjectName("lPrecio");

        verticalLayout_2->addWidget(lPrecio);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DPedido);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DPedido);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DPedido, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DPedido, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DPedido);
    } // setupUi

    void retranslateUi(QDialog *DPedido)
    {
        DPedido->setWindowTitle(QCoreApplication::translate("DPedido", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DPedido", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("DPedido", "TextLabel", nullptr));
        checkBox->setText(QCoreApplication::translate("DPedido", "CheckBox", nullptr));
        pushButton->setText(QCoreApplication::translate("DPedido", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("DPedido", "Pedido", nullptr));
        lPrecio->setText(QCoreApplication::translate("DPedido", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DPedido: public Ui_DPedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPEDIDO_H
