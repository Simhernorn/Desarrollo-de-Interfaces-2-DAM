/********************************************************************************
** Form generated from reading UI file 'notas.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTAS_H
#define UI_NOTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Notas
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frameNotas;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lblMedia;
    QLabel *lblMedia_2;
    QLabel *lblMedia_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnCalcularMedia;
    QPushButton *btnAnyadir;
    QPushButton *btnQuitar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Notas)
    {
        if (Notas->objectName().isEmpty())
            Notas->setObjectName("Notas");
        Notas->resize(400, 340);
        verticalLayout_3 = new QVBoxLayout(Notas);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frameNotas = new QFrame(Notas);
        frameNotas->setObjectName("frameNotas");
        frameNotas->setFrameShape(QFrame::Shape::StyledPanel);
        frameNotas->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_3->addWidget(frameNotas);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblMedia = new QLabel(Notas);
        lblMedia->setObjectName("lblMedia");

        verticalLayout->addWidget(lblMedia);

        lblMedia_2 = new QLabel(Notas);
        lblMedia_2->setObjectName("lblMedia_2");

        verticalLayout->addWidget(lblMedia_2);

        lblMedia_3 = new QLabel(Notas);
        lblMedia_3->setObjectName("lblMedia_3");

        verticalLayout->addWidget(lblMedia_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnCalcularMedia = new QPushButton(Notas);
        btnCalcularMedia->setObjectName("btnCalcularMedia");

        verticalLayout_2->addWidget(btnCalcularMedia);

        btnAnyadir = new QPushButton(Notas);
        btnAnyadir->setObjectName("btnAnyadir");

        verticalLayout_2->addWidget(btnAnyadir);

        btnQuitar = new QPushButton(Notas);
        btnQuitar->setObjectName("btnQuitar");

        verticalLayout_2->addWidget(btnQuitar);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Notas);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(Notas);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Notas, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Notas, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Notas);
    } // setupUi

    void retranslateUi(QDialog *Notas)
    {
        Notas->setWindowTitle(QCoreApplication::translate("Notas", "Dialog", nullptr));
        lblMedia->setText(QCoreApplication::translate("Notas", "Media: 0", nullptr));
        lblMedia_2->setText(QCoreApplication::translate("Notas", "TextLabel", nullptr));
        lblMedia_3->setText(QCoreApplication::translate("Notas", "TextLabel", nullptr));
        btnCalcularMedia->setText(QCoreApplication::translate("Notas", "Calcular Media", nullptr));
        btnAnyadir->setText(QCoreApplication::translate("Notas", "A\303\261adir Nota", nullptr));
        btnQuitar->setText(QCoreApplication::translate("Notas", "Quitar Nota", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notas: public Ui_Notas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTAS_H
