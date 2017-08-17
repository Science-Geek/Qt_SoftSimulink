#include "Qt_SoftSimulink.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_SoftSimulink w;
    w.show();
    return a.exec();
}
