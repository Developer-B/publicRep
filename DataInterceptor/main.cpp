#include "DataInterceptor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataInterceptor w;
    w.show();
    return a.exec();
}
