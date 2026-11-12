#ifndef _CALCULAORA_H
#define _CALCULAORA_H

#include "ui_calculaora.h"
class Calculaora : public QDialog, public Ui::Calculaora  {
	Q_OBJECT


public:
	Calculaora (QWidget *parent = NULL);

	typedef enum {PRIMERSUMANDO, MASAPRETADO, SEGONSUMANDO} EstadoPosible;

	EstadoPosible estadoActual;
	float primerSumando;
	QString total;

public slots:
	void slotBotonMas();
	void slotMostrar();
	void slotBotonN();
};

#endif
