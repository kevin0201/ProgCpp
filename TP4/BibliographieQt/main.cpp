#include "bibliographieqt.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BibliographieQt w;
    w.show();
    return a.exec();
}
