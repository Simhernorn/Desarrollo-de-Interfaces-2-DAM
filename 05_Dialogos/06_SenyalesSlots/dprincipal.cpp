#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QWidget * parent ) : QDialog(parent) {

	lyPrincipal = new QHBoxLayout();
	bLanzar = new QPushButton("Lanzar Transferencia");
	lEstadoTransferencia = new QLabel("Listo para lanzar una transferencia");
	bAceptarPrincipal = new QPushButton("Aceptar");
	bAceptarPrincipal->setEnabled(false);

	lyLanzar = new QVBoxLayout();
	lyLanzar->addWidget(bLanzar);
	lyLanzar->addWidget(lEstadoTransferencia);
	lyLanzar->addWidget(bAceptarPrincipal);

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

		connect(dTransferencia,
				SIGNAL(senyalDatosCambiados(float,QString)),
				this,
				SLOT(slotDatosTransferenciaCambiados(float,QString)));

		connect(bAceptarPrincipal,
				SIGNAL(clicked()),
				dTransferencia,
				SLOT(accept()));

		connect(dTransferencia,
				SIGNAL(senyalActivarBoton(bool)),
				this,
				SLOT(slotActivarBoton(bool)));
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

void DPrincipal::slotDatosTransferenciaCambiados(float cantidad, QString cuenta) {
	QString cadena("Transferencia de ");

	QString textoCantidad = QString::number(cantidad);
	cadena = cadena + textoCantidad + " a la cuenta de " + cuenta;

	lEstadoTransferencia->setText(cadena);
}

void DPrincipal::slotActivarBoton(bool ok) {
	bAceptarPrincipal->setEnabled(ok);
}