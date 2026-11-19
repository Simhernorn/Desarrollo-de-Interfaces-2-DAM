#ifndef WIDGETNOTA_H
#define WIDGETNOTA_H
#include "ui_widgetnota.h"

#include "dnombre.h"

#include <QVector>
#include <QWidget>

class WidgetNota : public QWidget, public Ui::WidgetNota {
	Q_OBJECT

public:
	int value();
	bool valido();

	DNombre *dNombre;

	WidgetNota(QWidget *parent = NULL);

public slots:
	void slotCambio();
	void slotNombre();
	void slotNombreCambiado();

signals:
	void senyalCambio();
};

#endif 
