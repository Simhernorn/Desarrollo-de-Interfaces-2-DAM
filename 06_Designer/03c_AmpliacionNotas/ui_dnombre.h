/********************************************************************************
** Form generated from reading UI file 'dnombre.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNOMBRE_H
#define UI_DNOMBRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DNombre
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblNombreActual;
    QLineEdit *leNombre;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DNombre)
    {
        if (DNombre->objectName().isEmpty())
            DNombre->setObjectName("DNombre");
        DNombre->resize(199, 109);
        verticalLayout = new QVBoxLayout(DNombre);
        verticalLayout->setObjectName("verticalLayout");
        lblNombreActual = new QLabel(DNombre);
        lblNombreActual->setObjectName("lblNombreActual");

        verticalLayout->addWidget(lblNombreActual);

        leNombre = new QLineEdit(DNombre);
        leNombre->setObjectName("leNombre");

        verticalLayout->addWidget(leNombre);

        buttonBox = new QDialogButtonBox(DNombre);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DNombre);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DNombre, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DNombre, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DNombre);
    } // setupUi

    void retranslateUi(QDialog *DNombre)
    {
        DNombre->setWindowTitle(QCoreApplication::translate("DNombre", "Dialog", nullptr));
        lblNombreActual->setText(QCoreApplication::translate("DNombre", "Nombre Actual: N/A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DNombre: public Ui_DNombre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNOMBRE_H
