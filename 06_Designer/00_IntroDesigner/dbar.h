#ifndef _DBAR_H
#define _DBAR_H

#include "ui_dbar.h"

class DBar : public QDialog, public Ui::DBar {
Q_OBJECT

public:
	int total;
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
};

#endif
