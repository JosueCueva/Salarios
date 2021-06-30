#include "principal.h"
#include "calculosalario.h"
#include <QApplication>

#include <QObject>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();

    return a.exec();
}
