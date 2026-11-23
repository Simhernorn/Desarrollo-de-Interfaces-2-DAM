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

class Editor : public QMainWindow {
	Q_OBJECT

public:
	bool guardarEstat = true;

	QAction
		*accionSalir,
		*accionGuardar,
		*accionAbrir;

	QTextEdit
		*editorCentral;

	QLabel
		*textoEstado;

	QPushButton
		*btnBorrarSB;

	Editor(QWidget * parent = NULL,
		Qt::WindowFlags flags = Qt::WindowFlags());

	void crearActions();
	void crearMenus();
	void crearStatusBar();
	void closeEvent(QCloseEvent *event);

public slots:
	void slotAbrir();
	void slotGuardar();
	void slotTextoCambiado();
	void slotLimpiar();
};

#endif