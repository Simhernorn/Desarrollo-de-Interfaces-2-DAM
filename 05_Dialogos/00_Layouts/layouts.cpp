#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QWidget>

int main(int argc, char* argv[]) {
    QApplication app(argc,argv);

	QWidget * window = new QWidget;
	window -> setWindowTitle("Ventanita bonita 😘️");
	
	QSlider * slider = new QSlider(Qt::Horizontal);
	slider->setRange(0, 30);
	QSpinBox * spinBox = new QSpinBox();
	
	QHBoxLayout * layout = new QHBoxLayout();
	
	layout->addWidget(spinBox);
	layout->addWidget(slider);
	
	QPushButton * btnSubir = new QPushButton("Subir");
	QPushButton * btnBajar = new QPushButton("Bajar");
	
	QHBoxLayout * layout2 = new QHBoxLayout();
	
	layout2->addWidget(btnSubir);
	layout2->addWidget(btnBajar);
	
	QVBoxLayout * layoutVertical = new QVBoxLayout();
	
	QLabel * nombreDisplay = new QLabel();
	nombreDisplay->setAlignment(Qt::AlignHCenter);
	nombreDisplay->setNum(0);
	
	layoutVertical->addLayout(layout);
	layoutVertical->addLayout(layout2);
	layoutVertical->addWidget(nombreDisplay);
	
	QObject::connect(slider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
	QObject::connect(spinBox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
	QObject::connect(spinBox,SIGNAL(valueChanged(int)),nombreDisplay,SLOT(setNum(int)));
	QObject::connect(btnSubir,SIGNAL(clicked()),spinBox,SLOT(stepUp()));
	QObject::connect(btnBajar,SIGNAL(clicked()),spinBox,SLOT(stepDown()));
	
	window->setLayout(layoutVertical);
	
	window->show();

    return app.exec();
}
