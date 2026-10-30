#include "dbar.h"
#include "deliminarplato.h"

DBar::DBar(QWidget * parent) : QDialog(parent){
    setupUi(this);

	total = 0;
	lPrecioCambia->setText("Total: 0");
	connect(btnAnyadir,
			SIGNAL(clicked()),
			this,
			SLOT(slotAnyadirPlato()));

}

void DBar::slotAnyadirPlato() {
	lwPlatosPedidos->addItem(cmbPlatos->currentText());

	int precioPlato = sbPrecio->value();
	total += precioPlato;
	QString texto("Total: ");
	texto += QString::number(total);
	lPrecioCambia->setText(texto);
}
