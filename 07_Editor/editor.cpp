#include "editor.h"

Editor::Editor(QWidget * parent, Qt::WindowFlags flags) :
	QMainWindow(parent,flags) {

	editorCentral = new QTextEdit();
	setCentralWidget(editorCentral);

	crearActions();
	crearMenus();
	crearStatusBar();
}

void Editor::crearActions() {

	accionSalir = new QAction("Salir",this);

	accionGuardar = new QAction("Guardar",this);

	accionAbrir = new QAction("Abrir",this);

	connect(accionSalir,
			SIGNAL(triggered()),
			this,
			SLOT(close()));

	connect(accionGuardar,
			SIGNAL(triggered()),
			this,
			SLOT(slotGuardar()));

	connect(accionAbrir,
			SIGNAL(triggered()),
			this,
			SLOT(slotAbrir()));
}

void Editor::crearMenus() {
	QMenuBar *barraActual = this->menuBar();
	QMenu *menuFitxer = barraActual->addMenu("Fitxer");

	menuFitxer->addAction(accionSalir);
	menuFitxer->addAction(accionGuardar);
	menuFitxer->addAction(accionAbrir);

	editorCentral->addAction(accionSalir);
	editorCentral->addAction(accionGuardar);
	editorCentral->addAction(accionAbrir);
	editorCentral->setContextMenuPolicy(Qt::ActionsContextMenu);

	connect(editorCentral->document(),
			SIGNAL(contentsChanged()),
			this,
			SLOT(slotTextoCambiado()));
}

void Editor::closeEvent(QCloseEvent *event) {
	if(!guardarEstat) {
		int resultado = QMessageBox::information(this,QString("Atencion"),
												 QString("Vas a cerrar la aplicacion sin guardar, subnormal"),
												 QMessageBox::Ok|QMessageBox::Cancel);

		if(resultado == QMessageBox::Cancel)
			event->ignore();
		else
			event->accept();
	}
}

void Editor::slotTextoCambiado() {
	guardarEstat = false;
	textoEstado->setText("MCELPMQTPFDLGP");
}

void Editor::crearStatusBar() {
	textoEstado = new QLabel("Hola");
	statusBar()->addWidget(textoEstado);

	btnBorrarSB = new QPushButton("Limpiar");
	statusBar()->addWidget(btnBorrarSB);

	connect(btnBorrarSB,
			SIGNAL(clicked()),
			this,
			SLOT(slotLimpiar()));
}

void Editor::slotLimpiar() {
	int resultado = QMessageBox::question(this,
										  QString("Cuidao"),
										  QString("Te vas a cargar el texto, ¡Imbecil!"),
										  QMessageBox::Yes | QMessageBox::No);

	if(resultado == QMessageBox::Yes) {
		editorCentral->document()->clear();
		textoEstado->setText("Hola");
	} else {
		textoEstado->setText("Has canselao");
	}
}

void Editor::slotAbrir() {
	if(!guardarEstat) {
		int resultado = QMessageBox::question(this,
											  QString("Cuidao"),
											  QString("Vas a abrir un documento sin guardar!"),
											  QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

		if(resultado == QMessageBox::Save) {
			slotGuardar();
			textoEstado->setText("Guardado");
		} else if(resultado == QMessageBox::Discard) {
			editorCentral->document()->clear();
			textoEstado->setText("Descartado");
		} else {
			textoEstado->setText("Has canselao");
		}
	}
}

void Editor::slotGuardar() {
	guardarEstat = true;
}