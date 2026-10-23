#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QWidget * parent ) : QDialog(parent) {

	lyPrincipal = new QHBoxLayout();
	bLanzar = new QPushButton("Lanzar Transferencia");
	lEstadoTransferencia = new QLabel("Listo para lanzar una transferencia");

	lyLanzar = new QVBoxLayout();
	lyLanzar->addWidget(bLanzar);
	lyLanzar->addWidget(lEstadoTransferencia);

	lyPrincipal->addLayout(lyLanzar);

	connect(bLanzar,SIGNAL(clicked()),this,SLOT(slotLanzarDialogoTransferencia()));

	dTransferencia = NULL;
	setLayout(lyPrincipal);
}

void DPrincipal::slotLanzarDialogoTransferencia() {
	if(dTransferencia == NULL){
		dTransferencia = new DTransferencia(listaCuentas);

		connect(dTransferencia,
				SIGNAL(accepted()),
				this,
				SLOT(slotAceptadaTransferencia()));

		connect(dTransferencia->leCantidad,
				SIGNAL(textChanged(const QString &)),
				this,
				SLOT(slotAceptadaTransferencia()));

		connect(dTransferencia->cbDestino,
				SIGNAL(currentIndexChanged(int)),
				this,
				SLOT(slotAceptadaTransferencia()));
	}
	dTransferencia->show();
}

void DPrincipal::slotAceptadaTransferencia() {
	QString cadCant = dTransferencia->leCantidad->text();
	float cant = cadCant.toFloat();

	QString resTrans = "";

	resTrans += "Transferencia a compte ";
	resTrans += dTransferencia->cbDestino->currentText();
	resTrans += " per valor de ";
	resTrans += QString::number(cant);
	resTrans += " acceptada";

	lEstadoTransferencia->setText(resTrans);
}