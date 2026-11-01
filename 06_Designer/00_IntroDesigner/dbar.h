#ifndef _DBAR_H
#define _DBAR_H

#include "ui_dbar.h"
#include "deliminarplato.h"

class DBar : public QDialog, public Ui::DBar {
Q_OBJECT

public:
	int total;
	bool segundoAbierto;
	DEliminarPlato *dEliminarPlato;
	QList<int> precios;
	QStringList qslPlatos = {"Calimotxo",
							"Pataques braves",
							"Tapa de xamo serra",
							"Truita de pataques en sebolla",
							"Truita de pataques a la sicopata (sense sebolla)",
							"Tercio",
							"Litrona",
							"Calamars a la rumana"};

	DBar (QWidget *parent = NULL);

public slots:
	void slotAnyadirPlato();
	void slotAbrirSegundoDialogo();
	void slotEliminarPlato(int fila);

signals:
	void senyalAnyadirPlato(const QString &);
};

#endif
