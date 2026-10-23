#ifndef _DPRINCIPAL_H
#define _DPRINCIPAL_H

#include <QDialog>
#include <QPushButton>
#include <QLayout>
#include "dtransferencia.h"

class DPrincipal : public QDialog{
	Q_OBJECT

public:
	QPushButton *bPrincipal;
	QLayout *layout;

	DPrincipal(QWidget *parent = nullptr);

public slots:
	void slotLanzaTransferencia();
};

#endif