#ifndef _DPRINCIPAL_H
#define _DPRINCIPAL_H

#include <QDialog>
#include <QPushButton>
#include <QLayout>
#include <QLabel>
#include "dtransferencia.h"

class DPrincipal : public QDialog{
	Q_OBJECT

public:
	QStringList listaCuentas = {"111111","222222","333333"};
	QPushButton *bLanzar;
	QLabel *lEstadoTransferencia;
	DTransferencia *dTransferencia;
	QHBoxLayout *lyPrincipal;
	QVBoxLayout *lyLanzar;

	DPrincipal(QWidget *parent = nullptr);

public slots:
	void slotLanzarDialogoTransferencia();
	void slotAceptadaTransferencia();
};

#endif