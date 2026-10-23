#include "dtransferencia.h"
#include <QRegularExpression>
#include <QDebug>

DTransferencia::DTransferencia(QStringList listaCuentas, QWidget *parent): QDialog(parent){
	/* LAYOUTS */
	lyDer = new QVBoxLayout();
	lyIzq = new QVBoxLayout();
	lyPrincipal = new QHBoxLayout();
	lyDestino = new QHBoxLayout();
	lyCantidad = new QHBoxLayout();

	/* BOTONES */
	bAceptar = new QPushButton("Aceptar");
	bAceptar->setEnabled(false);
	bCancelar = new QPushButton("Cancelar");

	/* LABELS */
	lDestino = new QLabel("Cuenta destino: ");
	lCantidad = new QLabel("Cantidad ");
	lComision = new QLabel("Comisión 0 euros");

	/* LINE EDITS */
	cbDestino = new QComboBox();
	cbDestino->addItems(listaCuentas);
	leCantidad = new QLineEdit();

	/* ADICIONES */
	lyDestino->addWidget(lDestino);
	lyDestino->addWidget(cbDestino);

	lyCantidad->addWidget(lCantidad);
	lyCantidad->addWidget(leCantidad);

	lyIzq->addLayout(lyDestino);
	lyIzq->addLayout(lyCantidad);
	lyIzq->addWidget(lComision);

	lyDer->addWidget(bAceptar);
	lyDer->addWidget(bCancelar);
	lyDer->addStretch();

	lyPrincipal->addLayout(lyIzq);
	lyPrincipal->addLayout(lyDer);

	this->setLayout(lyPrincipal);

	/* CONEXIONES */
	connect(cbDestino,SIGNAL(textChanged(const QString &)),this,SLOT(slotActualizarBoton(const QString &)));
	connect(leCantidad,SIGNAL(textChanged(const QString &)),this,SLOT(slotActualizarBoton(const QString &)));
	connect(leCantidad,SIGNAL(textChanged(const QString &)),this,SLOT(slotActualizarComision(const QString &)));

	connect(bAceptar,SIGNAL(clicked()),this,SLOT(accept()));
	connect(bCancelar,SIGNAL(clicked()),this,SLOT(reject()));
	resize(400,100);
}

void DTransferencia::slotActualizarBoton(const QString & cad) {
	QString cadDestino = cbDestino->currentText();
	QRegularExpression reDestino("^\\d{6}$");

	QRegularExpressionMatch mDestino = reDestino.match(cadDestino);

	QString cadCantidad = leCantidad->text();
	QRegularExpression reCantidad("^\\d*\\.{0,1}\\d+$");

	QRegularExpressionMatch mCantidad = reCantidad.match(cadCantidad);

	bool destinoOK = mDestino.hasMatch();
	bool cantidadOK = mCantidad.hasMatch();

	if (destinoOK && cantidadOK)
		bAceptar->setEnabled(true);
	else
		bAceptar->setEnabled(false);
	qDebug() << "slotActualizarBoton ejecutandose" << cad;
}

void DTransferencia::slotActualizarComision(const QString & cad) {
	QString cadena = leCantidad->text();
	float cantidad = cadena.toFloat();

	QString resultado("La comision es de ");
	resultado += QString::number(cantidad*0.01);
	resultado += " euros";

	lComision->setText(resultado);
	qDebug() << "slotActualizarComision ejecutandose" << cad;
}
