#include <QApplication>
#include "dbar.h"
#include "deliminarplato.h"

int main(int argc, char *argv[]) {
	QApplication app(argc,argv);
	DBar * bar = new DBar();
	bar->show();
	DEliminarPlato *dEliminarPlato = new DEliminarPlato();
	dEliminarPlato->show();
	return app.exec();
}
