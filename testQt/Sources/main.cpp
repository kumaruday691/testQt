

using namespace std;

#include <QApplication>
#include <QtWidgets/QLabel>
#include "../Headers/mainwindow.h"


int main(int argc, char **argv) {

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
//    QApplication app(argc, argv);
//    QLabel *label = new QLabel("Label");
//    QPushButton *button = new QPushButton("Click Me");
//
//    QObject::connect(button, SIGNAL(clicked()), label, SLOT(close()));
//    label->show();
//    button->show();
//
//    std::cout << "Hello, World!" << std::endl;
//    return app.exec();
}
