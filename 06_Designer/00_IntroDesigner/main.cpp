#include <QApplication>
#include "dbar.h"

int main(int argc, char *argv[]) {
	QApplication app(argc,argv);
	DBar * bar = new DBar();
	bar->show();
	return app.exec();
}
