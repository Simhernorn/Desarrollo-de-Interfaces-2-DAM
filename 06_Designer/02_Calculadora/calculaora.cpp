#include "calculaora.h"

Calculaora::Calculaora(QWidget * parent) : QDialog(parent){
	setupUi(this);

	connect(btnMas, SIGNAL(clicked()), this, SLOT(slotBotonMas()));
	connect(btnIgual, SIGNAL(clicked()), this, SLOT(slotMostrar()));


	estadoActual = PRIMERSUMANDO;

	for(int i = 0; i < gridLayout->count(); i++) {
		QLayoutItem * item = gridLayout->itemAt(i);
		QWidget * widget = item->widget();
		QPushButton * boton = qobject_cast<QPushButton*>(widget);

		connect(boton,
				SIGNAL(clicked()),
				this,
				SLOT(slotBotonN()));
	}
}

void Calculaora::slotBotonN(){

	// QObject * objeto = new QPushButton();

	QPushButton * botonCulpable;
	QObject * objetoCulpable;

	objetoCulpable = sender();
	botonCulpable = qobject_cast<QPushButton *>(objetoCulpable);

	if (estadoActual == MASAPRETADO) {
		display -> setText("");
		estadoActual = SEGONSUMANDO;
	}

	QString textoDigito = botonCulpable -> text();
	QString	textoActual = display->text();
	display->setText(textoActual + textoDigito);
}

/*
void Calculaora::slotBoton1(){
	if (estadoActual == MASAPRETADO) {
		display -> setText("");
		estadoActual = SEGONSUMANDO;
		//estadoActual++;
	}

	QString texto = display -> text();
	texto = texto + QString("1");
	display -> setText(texto);
}
void Calculaora::slotBoton2(){
	if (estadoActual == MASAPRETADO) {
		display -> setText("");
		estadoActual = SEGONSUMANDO;
		//estadoActual++;
	}

	QString texto = display -> text();
	texto = texto + QString("2");
	display -> setText(texto);
}
*/

void Calculaora::slotBotonMas(){
	if (estadoActual == PRIMERSUMANDO){
		primerSumando = display -> text().toFloat();
		estadoActual = MASAPRETADO;
	}
}

void Calculaora::slotMostrar(){
	if (estadoActual == SEGONSUMANDO){
		float segonSumando = display->text().toFloat();
		float resultat = primerSumando + segonSumando;

		display->setText(QString::number(resultat));
		estadoActual = PRIMERSUMANDO;   // listo para otra operación
	}
}
