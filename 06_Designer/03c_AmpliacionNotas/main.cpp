#include <QApplication>
#include "notas.h"


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Notas * dialogo = new Notas();
	dialogo->show();

	return app.exec();
}

