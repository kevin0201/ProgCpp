#ifndef AJOUTOUVRAGE_H
#define AJOUTOUVRAGE_H

#include <QtGui/QMainWindow>
#include "ui_ajoutouvrage.h"

class ajoutOuvrage : public QMainWindow
{
    Q_OBJECT

public:
    ajoutOuvrage(QWidget *parent = 0);
    ~ajoutOuvrage();

private:
    Ui::ajoutOuvrageClass ui;
};

#endif // AJOUTOUVRAGE_H
