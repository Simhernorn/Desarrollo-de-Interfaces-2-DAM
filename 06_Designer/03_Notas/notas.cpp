#include "notas.h"
#include <QDebug>
#include <QLayout>

Notas::Notas(QWidget *parent): QDialog(parent){
	setupUi(this);

	connect(btnCalcularMedia,
			SIGNAL(clicked()),
			this,
			SLOT(slotCalcularMedia()));

	QHBoxLayout * layout = new QHBoxLayout;

	for (int i = 0; i < 5; ++i) {
		QSpinBox * sb = new QSpinBox;
		layout->addWidget(sb);
		listaSB.append(sb);
	}

	frameNotas->setLayout(layout);
}

void Notas::slotCalcularMedia(){
	float total = 0;
	int elementos = 0;

	QLayout * layout = frameNotas->layout();

	for (int i = 0; i < layout->count(); ++i) {
		QLayoutItem * item = layout->itemAt(i);
		QWidget * widget = item->widget();
		QSpinBox * spinbox = qobject_cast<QSpinBox*>(widget);

		total += spinbox->value();
		elementos += 1;
	}

	QString texto = "Media: ";
	float media = total / elementos;
	texto += QString::number(media);
	lblMedia->setText(texto);
}

