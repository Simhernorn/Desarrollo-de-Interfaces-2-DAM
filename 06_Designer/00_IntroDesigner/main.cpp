#include <QApplication>
#include "dpedido.h"

int main(int argc, char *argv[]) {
	QApplication app(argc,argv);
	DPedido * pedido = new DPedido();
	pedido->show();
	return app.exec();
}
