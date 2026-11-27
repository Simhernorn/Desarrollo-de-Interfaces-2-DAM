#ifndef _EDITOR_H_
#define _EDITOR_H_

#include <QMainWindow>
#include <QTextEdit>
#include <QAction>
#include <QMenuBar>
#include <QMenu>
#include <QIcon>
#include <QLabel>
#include <QStatusBar>
#include <QPushButton>
#include <QMessageBox>
#include <QCloseEvent>
#include <QFileDialog>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QTextBlock>
#include <QVector>
#include <QFileInfo>

#include "finddialog.h"

class Editor : public QMainWindow {
	Q_OBJECT

public:
	bool guardarEstat = true;

	FindDialog *dialogoBuscar;

	QAction
		*accionSalir,
		*accionGuardar,
		*accionGuardarComo,
		*accionAbrir,
		*accionNuevo,
		*accionBuscar;

	QTextEdit *editorCentral;

	QLabel *textoEstado;

	QPushButton
		*btnBorrarSB;

	QString rutaFicheroActual;

	static const int MAXRECIENTES = 5;
	QStringList rutasRecientes;
	QVector<QAction*> accionesFicherosRecientes;
	void establecerFicheroActual(QString);
	void abrirArchivo(QString);

	Editor(QWidget * parent = NULL,
		Qt::WindowFlags flags = Qt::WindowFlags());

	void crearActions();
	void crearMenus();
	void crearStatusBar();
	void closeEvent(QCloseEvent *event);

public slots:
	void slotNuevo();
	void slotAbrir();
	void slotGuardar();
	void slotGuardarComo();
	void slotTextoCambiado();
	void slotLimpiar();
	void slotAbrirFicheroReciente();
	void slotAbrirDialogoBuscar();
};

#endif
