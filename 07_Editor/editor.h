#ifndef _EDITOR_H_
#define _EDITOR_H_

#include <QMainWindow>

class Editor : public QMainWindow {
	Q_OBJECT

public:
	Editor(QWidget * parent = NULL, Qt::WindowFlags flags = Qt::WindowFlags());
};

#endif