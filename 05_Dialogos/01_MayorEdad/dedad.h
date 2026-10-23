#include <QLabel>
#include <QSpinBox>
#include <QLayout>
#include <QLabel>
#include <QWidget>

class DEdad : public QWidget{
Q_OBJECT

public:
	QVBoxLayout * layoutVertical;
	QHBoxLayout * layoutHorizontal;
	QLabel * titulo;
	QLabel * respuesta;
	QSpinBox * spinEdad;
	
	DEdad(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());

public slots:
	void slotComprobarEdad(int);
};
