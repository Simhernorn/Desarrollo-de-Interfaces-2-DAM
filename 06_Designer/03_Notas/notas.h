#ifndef NOTAS_H
#define NOTAS_H
#include "ui_notas.h"

#include <QVector>
#include <QDialog>
#include <QSpinBox>
#include <QList>

class Notas : public QDialog, public Ui::Notas {
Q_OBJECT

public:
	QList<QSpinBox*> listaSB;
	Notas(QWidget *parent = NULL);

public slots:
	void slotCalcularMedia();
};

#endif 
