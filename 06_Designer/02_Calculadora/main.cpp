#include <QApplication>
#include "calculaora.h"


int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	Calculaora * calculaora = new Calculaora();
	calculaora -> show();
	
	return app.exec();
}
