#ifndef NOTAS_H
#define NOTAS_H
#include "ui_notas.h"
#include "widgetnota.h"

#include <QVector>
#include <QDialog>
#include <QSpinBox>
#include <QList>

class Notas : public QDialog, public Ui::Notas {
	Q_OBJECT

public:
	QHBoxLayout * frameHLayout;
	QList<WidgetNota*> listaSB;
	Notas(QWidget *parent = NULL);

public slots:
	void slotCalcularMedia();
	void slotAnyadirNota();
	void slotQuitarNota();
	void slotCambiarNombres();

signals:
	void senyalBotonesNombre();
};

#endif 
