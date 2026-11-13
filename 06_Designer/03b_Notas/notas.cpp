#include "notas.h"
#include <QDebug>
#include <QLayout>

Notas::Notas(QWidget *parent): QDialog(parent){
	setupUi(this);

	connect(btnCalcularMedia,
			SIGNAL(clicked()),
			this,
			SLOT(slotCalcularMedia()));

	frameHLayout = new QHBoxLayout;

	for (int i = 0; i < 5; ++i) {
		WidgetNota * wn = new WidgetNota;
		frameHLayout->addWidget(wn);
		listaSB.append(wn);

		connect(wn,
				SIGNAL(senyalCambio()),
				this,
				SLOT(slotCalcularMedia()));
	}

	frameNotas->setLayout(frameHLayout);

	connect(btnAnyadir,
			SIGNAL(clicked()),
			this,
			SLOT(slotAnyadirNota()));

	connect(btnQuitar,
			SIGNAL(clicked()),
			this,
			SLOT(slotQuitarNota()));

}

void Notas::slotQuitarNota() {
	if (frameHLayout->count() == 0)
		return;

	frameHLayout->takeAt(frameHLayout->count() - 1);
	listaSB.removeLast();
}

void Notas::slotAnyadirNota() {
	WidgetNota * wn = new WidgetNota;
	wn->checkActivo->setChecked(true);
	frameHLayout->addWidget(wn);
	listaSB.append(wn);
}

void Notas::slotCalcularMedia(){
	float total = 0;
	int elementos = 0;

	QLayout * layout = frameNotas->layout();

	for (int i = 0; i < layout->count(); ++i) {
		QLayoutItem * item = layout->itemAt(i);
		QWidget * widget = item->widget();
		WidgetNota * widnot = qobject_cast<WidgetNota*>(widget);

		if(widnot->valido()){
			total += widnot->value();
			elementos += 1;
		}
	}

	QString texto = "Media: ";
	float media = total / elementos;
	texto += QString::number(media);
	lblMedia->setText(texto);
}

