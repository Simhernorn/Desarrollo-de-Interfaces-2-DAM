#include "editor.h"

Editor::Editor(QWidget * parent, Qt::WindowFlags flags) :
	QMainWindow(parent,flags) {

	QTextEdit * editor = new QTextEdit();
	setCentralWidget(editor);

	crearActions();
	crearMenus();
}

void Editor::crearActions() {
	QMenuBar *barraActual = this->menuBar();
	QMenu *menuFitxer = barraActual->addMenu("Fitxer");

	QAction *accionSalir = new QAction("Salir",this);

	menuFitxer->addAction(accionSalir);

	connect(accionSalir,
			SIGNAL(triggered()),
			this,
			SLOT(close()));
}

void Editor::crearMenus() {

}