#include "gppbs.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GPPBS w;
    w.show();

    return a.exec();
}
