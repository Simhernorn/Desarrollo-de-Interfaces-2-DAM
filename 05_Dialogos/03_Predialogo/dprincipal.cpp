#include "dprincipal.h"
#include <QDebug>

DPrincipal::DPrincipal(QWidget *parent): QDialog(parent){
	bPrincipal = new QPushButton("Lanza Transferencia");
	layout = new QVBoxLayout();
	layout->addWidget(bPrincipal);
	this->setLayout(layout);

	/* CONEXIONES */
	connect(bPrincipal,SIGNAL(clicked()),this,SLOT(slotLanzaTransferencia()));
}

void DPrincipal::slotLanzaTransferencia() {
	DTransferencia * dTransferencia = new DTransferencia();
	dTransferencia->show();
}