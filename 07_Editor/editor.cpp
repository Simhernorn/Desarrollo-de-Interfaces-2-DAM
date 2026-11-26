#include "editor.h"

Editor::Editor(QWidget * parent, Qt::WindowFlags flags) :
	QMainWindow(parent,flags) {

	editorCentral = new QTextEdit();
	setCentralWidget(editorCentral);

	crearActions();
	crearMenus();
	crearStatusBar();

	rutaFicheroActual = QString("");
}

void Editor::crearActions() {

	accionSalir = new QAction("Salir",this);

	accionGuardar = new QAction("Guardar",this);

	accionGuardarComo = new QAction("Guardar Como",this);

	accionAbrir = new QAction("Abrir",this);

	accionNuevo = new QAction("Nuevo",this);

	connect(accionSalir,
			SIGNAL(triggered()),
			this,
			SLOT(close()));

	connect(accionGuardar,
			SIGNAL(triggered()),
			this,
			SLOT(slotGuardar()));

	connect(accionGuardarComo,
			SIGNAL(triggered()),
			this,
			SLOT(slotGuardarComo()));

	connect(accionAbrir,
			SIGNAL(triggered()),
			this,
			SLOT(slotAbrir()));

	connect(accionNuevo,
			SIGNAL(triggered()),
			this,
			SLOT(slotNuevo()));

	for (int i = 0; i < MAXRECIENTES; ++i) {
		QAction *accion = new QAction("pepe");
		connect(accion,
				&QAction::triggered,
				this,
				&Editor::slotAbrirFicheroReciente);
		accionesFicherosRecientes.append(accion);
	}
}

void Editor::crearMenus() {
	QMenuBar *barraActual = this->menuBar();
	QMenu *menuFitxer = barraActual->addMenu("Fitxer");

	menuFitxer->addAction(accionSalir);
	menuFitxer->addAction(accionGuardar);
	menuFitxer->addAction(accionGuardarComo);
	menuFitxer->addAction(accionAbrir);
	menuFitxer->addAction(accionNuevo);

	editorCentral->addAction(accionSalir);
	editorCentral->addAction(accionGuardar);
	editorCentral->addAction(accionGuardarComo);
	editorCentral->addAction(accionAbrir);
	editorCentral->addAction(accionNuevo);
	editorCentral->setContextMenuPolicy(Qt::ActionsContextMenu);

	for (int i = 0; i < accionesFicherosRecientes.length(); ++i) {
		menuFitxer->addAction(accionesFicherosRecientes[i]);
	}

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
	textoEstado->setText("Cambiado");
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

	int respuesta;
	if(!guardarEstat) {
		respuesta = QMessageBox::question(this,
											  QString("Cuidao"),
											  QString("Te vas a cargar el texto, ¡Imbecil!"),
											  QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

		if (respuesta == QMessageBox::Cancel)
			return;

		if (respuesta == QMessageBox::Save)
			slotGuardar();
	}

	editorCentral->document()->clear();

	QString nombreArchivo = rutaFicheroActual;

	nombreArchivo = QFileDialog::getOpenFileName(this,
							QString("Abrir Archivo"),
							QString("./"),
							QString("Todos (*);; \
								Ficheros de texto (*.txt)")
							);

	QFile fichero(nombreArchivo);

	if (! fichero.open(QIODevice::ReadOnly) )
		return;

	QTextStream stream(&fichero);

	while (! stream.atEnd()) {
		QString linea = stream.readLine();
		editorCentral->append(linea);
	}

	rutaFicheroActual = nombreArchivo;
	fichero.close();
	guardarEstat = true;
	qDebug() << "Nombre fichero seleccionado: " << nombreArchivo;
}

void Editor::slotGuardar() {
	if (rutaFicheroActual.isEmpty())
		slotGuardarComo();

	guardarEstat = true;

	QString nombreArchivo = rutaFicheroActual;

	QFile fichero(nombreArchivo);

	if(! fichero.open(QIODevice::WriteOnly))
		return;

	QTextStream stream(&fichero);

	for (int i = 0; i < editorCentral->document()->blockCount(); i++) {
		stream << editorCentral->document()->findBlockByNumber(i).text() << Qt::endl;
	}

	fichero.close();
}

void Editor::slotGuardarComo() {
	guardarEstat = true;

	QString nombreArchivo;
	nombreArchivo = QFileDialog::getSaveFileName(this,
								QString("Guardar Como"),
								QString("./"),
								QString("Todos (*);; \
									Ficheros de texto (*.txt)")
								);

	QFile fichero(nombreArchivo);

	if(! fichero.open(QIODevice::WriteOnly))
		return;

	QTextStream stream(&fichero);

	for (int i = 0; i < editorCentral->document()->blockCount(); i++) {
		stream << editorCentral->document()->findBlockByNumber(i).text() << Qt::endl;
	}

	rutaFicheroActual = nombreArchivo;
	fichero.close();
}

void Editor::slotNuevo() {
	rutaFicheroActual = QString("");
	editorCentral->document()->clear();
}

void Editor::slotAbrirFicheroReciente() {

}