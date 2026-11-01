#include "deliminarplato.h"

DEliminarPlato::DEliminarPlato(QWidget * parent) : QDialog(parent){
	setupUi(this);
	connect(lwEliminarPlato,
			SIGNAL(itemDoubleClicked(QListWidgetItem*)),
			this,
			SLOT(slotDobleClick(QListWidgetItem*)));
}

void DEliminarPlato::slotDobleClick(QListWidgetItem * item) {
	int fila = lwEliminarPlato->row(item);
	delete lwEliminarPlato->takeItem(fila);
	emit senyalEliminarPlato(fila);
}

void DEliminarPlato::slotAnyadirPlato2(const QString & texto) {
	lwEliminarPlato->addItem(texto);
}