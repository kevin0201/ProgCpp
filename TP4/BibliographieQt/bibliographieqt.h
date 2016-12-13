#ifndef BIBLIOGRAPHIEQT_H
#define BIBLIOGRAPHIEQT_H

#include <QtGui/QMainWindow>
#include "ui_bibliographieqt.h"

class BibliographieQt : public QMainWindow
{
    Q_OBJECT

public:
    BibliographieQt(QWidget *parent = 0);
    ~BibliographieQt();

private:
    Ui::BibliographieQtClass ui;
};

#endif // BIBLIOGRAPHIEQT_H
