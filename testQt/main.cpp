#include <iostream>

using namespace std;

#include <QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>


int main(int argc, char **argv) {

    QApplication app(argc, argv);
    QLabel *label = new QLabel("Label");
    QPushButton *button = new QPushButton("Click Me") ;

    QObject::connect(button, SIGNAL(clicked()), label, SLOT(close()));
    label->show();
    button->show();

    std::cout << "Hello, World!" << std::endl;
    return app.exec();
}