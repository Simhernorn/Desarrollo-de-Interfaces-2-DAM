#include "widgetnota.h"
#include <QDebug>

WidgetNota::WidgetNota(QWidget *parent): QWidget(parent){
	setupUi(this);

	checkActivo->setCheckState(Qt::Checked);

	connect(spinValor,
			SIGNAL(valueChanged(int)),
			this,
			SLOT(slotCambio()));

	connect(checkActivo,
			SIGNAL(stateChanged(int)),
			this,
			SLOT(slotCambio()));
}

void WidgetNota::slotCambio() {
	emit senyalCambio();
}

int WidgetNota::value(){
	return spinValor->value();
}

bool WidgetNota::valido(){
	// return checkActivo->checkState() == Qt::Checked;
	return checkActivo->isChecked();
}