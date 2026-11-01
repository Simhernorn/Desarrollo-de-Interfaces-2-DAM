#ifndef DELIMINARPLATO_H
#define DELIMINARPLATO_H

#include "ui_deliminarplato.h"

class DEliminarPlato : public QDialog, public Ui::DEliminarPlato {
Q_OBJECT

public:

	DEliminarPlato (QWidget *parent = NULL);

public slots:
	void slotAnyadirPlato2(const QString &);
	void slotDobleClick(QListWidgetItem *);

signals:
	void senyalEliminarPlato(int fila);
};

#endif
