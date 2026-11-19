#ifndef _EDITOR_H_
#define _EDITOR_H_

#include <QMainWindow>
#include <QTextEdit>
#include <QAction>
#include <QMenuBar>
#include <QMenu>

class Editor : public QMainWindow {
	Q_OBJECT

public:
	Editor(QWidget * parent = NULL,
		Qt::WindowFlags flags = Qt::WindowFlags());

	void crearActions();
	void crearMenus();
};

#endif