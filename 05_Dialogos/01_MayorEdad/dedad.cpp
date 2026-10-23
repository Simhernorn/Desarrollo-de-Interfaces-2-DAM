#include "dedad.h"

DEdad::DEdad(QWidget *parent, Qt::WindowFlags f): QWidget(parent, f) {
		layoutVertical = new QVBoxLayout();
		layoutHorizontal = new QHBoxLayout();
		
		titulo = new QLabel("Edad: ");
		spinEdad = new QSpinBox();
		respuesta = new QLabel("Eres menor de edad!");
		
		layoutHorizontal->addWidget(titulo);
		layoutHorizontal->addWidget(spinEdad);
		layoutVertical->addLayout(layoutHorizontal);
		layoutVertical->addWidget(respuesta);
		QObject::connect(spinEdad,SIGNAL(valueChanged(int)),this,SLOT(slotComprobarEdad(int)));
		
		this->setWindowTitle("Ejercicio Mayor Edad");
		this->setLayout(layoutVertical);
}

void DEdad::slotComprobarEdad(int edad) {
	if (edad >= 18)
		respuesta->setText("Eres mayor de edad!");
	else
		respuesta->setText("Eres menor de edad!");
}
