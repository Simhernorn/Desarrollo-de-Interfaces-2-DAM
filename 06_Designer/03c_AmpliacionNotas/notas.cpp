#include "notas.h"
#include <QDebug>
#include <QLayout>

Notas::Notas(QWidget *parent): QDialog(parent){
	setupUi(this);

	connect(btnCalcularMedia,
			SIGNAL(clicked()),
			this,
			SLOT(slotCalcularMedia()));

	connect(btnCambiarNombres,
			SIGNAL(clicked()),
			this,
			SLOT(slotCambiarNombres()));

	frameHLayout = new QHBoxLayout;

	for (int i = 0; i < 5; ++i) {
		slotAnyadirNota();
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

void Notas::slotCambiarNombres() {

	emit senyalBotonesNombre();

	/* Forma en bucle
	QLayout * layout = frameNotas->layout();

	for (int i = 0; i < layout->count(); ++i) {
		QLayoutItem * item = layout->itemAt(i);
		QWidget * widget = item->widget();
		WidgetNota * widnot = qobject_cast<WidgetNota*>(widget);

		widnot->btnNombre->animateClick();
	}
	*/
}

void Notas::slotQuitarNota() {
	if (frameHLayout->count() == 0)
		return;

	frameHLayout->takeAt(frameHLayout->count() - 1);
	listaSB.removeLast();
}

void Notas::slotAnyadirNota() {
	WidgetNota * wn = new WidgetNota;
	wn->spinValor->setRange(0, 10);
	frameHLayout->addWidget(wn);
	listaSB.append(wn);

	connect(wn,
			SIGNAL(senyalCambio()),
			this,
			SLOT(slotCalcularMedia()));

	connect(this,
			SIGNAL(senyalBotonesNombre()),
			wn,
			SLOT(slotNombre()));
}

void Notas::slotCalcularMedia(){
	float total = 0;
	int elementos = 0;
	int maximo = 0;
	int minimo = 10;

	QLayout * layout = frameNotas->layout();

	for (int i = 0; i < layout->count(); ++i) {
		QLayoutItem * item = layout->itemAt(i);
		QWidget * widget = item->widget();
		WidgetNota * widnot = qobject_cast<WidgetNota*>(widget);

		if(widnot->valido()){
			total += widnot->value();
			elementos += 1;
		}

		if(widnot->spinValor->value() > maximo) {
			maximo = widnot->spinValor->value();
		}

		if(widnot->spinValor->value() < minimo) {
			minimo = widnot->spinValor->value();
		}
	}

	QString texto = "Media: ";
	float media = total / elementos;
	texto += QString::number(media);
	lblMedia->setText(texto);

	QString textoMax = "Maximo: ";
	textoMax += QString::number(maximo);
	lblMaximo->setText(textoMax);

	QString textoMin = "Minimo: ";
	textoMin += QString::number(minimo);
	lblMinimo->setText(textoMin);
}

