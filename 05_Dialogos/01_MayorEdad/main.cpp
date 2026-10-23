#include <QApplication>
#include "dedad.h"

int main(int argc, char* argv[]) {
	QApplication app(argc,argv);
	DEdad * dEdad = new DEdad();
	dEdad->show();
	
	return app.exec();
}
