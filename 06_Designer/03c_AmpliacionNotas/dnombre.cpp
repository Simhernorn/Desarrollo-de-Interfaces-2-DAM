#include "dnombre.h"
#include <QDebug>

DNombre::DNombre(QString nombre, QWidget *parent): QDialog(parent){
		setupUi(this);

	QString texto = "El nombre actual es: ";
	texto += nombre;
	lblNombreActual->setText(texto);
}
