#ifndef _DTRANSFERENCIA_H
#define _DTRANSFERENCIA_H

#include <QDialog>
#include <QLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>

class DTransferencia : public QDialog{
	Q_OBJECT

public:
	/* layouts */
	QVBoxLayout *lyDer, *lyIzq;
	QHBoxLayout *lyPrincipal, *lyDestino, *lyCantidad;
	/* Componentes */
	QPushButton *bAceptar, *bCancelar;
	QLabel *lDestino, *lCantidad, *lComision;
	QLineEdit *leCantidad;
	QComboBox *cbDestino;

	DTransferencia(QStringList lista, QWidget *parent = nullptr);

public slots:
	void slotActualizarBoton(const QString &);
	void slotActualizarComision(const QString &);
};

#endif