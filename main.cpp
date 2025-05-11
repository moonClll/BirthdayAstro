#include <QApplication>
#include "BirthdayAstroWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BirthdayAstroWidget w;
    w.show();
    return a.exec();
}
