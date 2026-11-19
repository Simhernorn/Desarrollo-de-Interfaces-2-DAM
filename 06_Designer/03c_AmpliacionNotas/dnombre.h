#ifndef DNOMBRE_H
#define DNOMBRE_H
#include "ui_dnombre.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>

class DNombre : public QDialog, public Ui::DNombre {
Q_OBJECT

public:
	DNombre(QString nombre = QString(), QWidget *parent = nullptr);

};

#endif 
