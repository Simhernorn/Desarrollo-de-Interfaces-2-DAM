#include "dbar.h"

DBar::DBar(QWidget * parent) : QDialog(parent){
    setupUi(this);

	total = 0;
	lPrecioCambia->setText("Total: 0");
	connect(btnAnyadir,
			SIGNAL(clicked()),
			this,
			SLOT(slotAnyadirPlato()));

	dEliminarPlato = NULL;
}

void DBar::slotAbrirSegundoDialogo() {
	if (dEliminarPlato == NULL) {
		dEliminarPlato = new DEliminarPlato();
		connect(this,
				SIGNAL(senyalAnyadirPlato(const QString &)),
				dEliminarPlato,
				SLOT(slotAnyadirPlato2(const QString &)));

		connect(dEliminarPlato,
				SIGNAL(senyalEliminarPlato(int)),
				this,
				SLOT(slotEliminarPlato(int)));

		dEliminarPlato->show();
	}
}

void DBar::slotAnyadirPlato() {
	slotAbrirSegundoDialogo();   // asegura que existe y está conectado

	lwPlatosPedidos->addItem(cmbPlatos->currentText());

	int precioPlato = sbPrecio->value();
	precios.append(precioPlato);
	total += precioPlato;
	lPrecioCambia->setText("Total: " + QString::number(total));

	emit senyalAnyadirPlato(cmbPlatos->currentText());
}

void DBar::slotEliminarPlato(int fila) {
	delete lwPlatosPedidos->takeItem(fila);
	total -= precios.takeAt(fila);
	lPrecioCambia->setText("Total: " + QString::number(total));
}