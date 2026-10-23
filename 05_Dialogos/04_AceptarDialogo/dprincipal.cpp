#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QWidget * parent ) : QDialog(parent) {

	QHBoxLayout *lyPrincipal = new QHBoxLayout();
	bLanzar = new QPushButton("Lanzar Transferencia");
	lEstadoTransferencia = new QLabel("Listo para lanzar una transferencia");

	QVBoxLayout *lyLanzar = new QVBoxLayout();
	lyLanzar->addWidget(bLanzar);
	lyLanzar->addWidget(lEstadoTransferencia);

	lyPrincipal->addLayout(lyLanzar);

	connect(bLanzar,SIGNAL(clicked()),this,SLOT(slotLanzarDialogoTransferencia()));

	dTransferencia = NULL;
	setLayout(lyPrincipal);
}

void DPrincipal::slotLanzarDialogoTransferencia() {
	if(dTransferencia == NULL)
		dTransferencia = new DTransferencia();
	dTransferencia->show();
	connect(dTransferencia,SIGNAL(accepted()),this,SLOT(slotAceptadaTransferencia()));
}

void DPrincipal::slotAceptadaTransferencia() {
	QString cadCant = dTransferencia->leCantidad->text();
	float cant = cadCant.toFloat();
	QString resTrans = "";

	if (cant < 100)
	{
		resTrans = "Se ha rechazado la transferencia, debe ser mayor de 100";
		dTransferencia->show();
	}
	else
	{
		resTrans = "Transferencia de ";
		resTrans += QString::number(cant);
		resTrans += " euros aceptada";
	}

	lEstadoTransferencia->setText(resTrans);
}