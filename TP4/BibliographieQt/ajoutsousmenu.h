#ifndef AJOUTSOUSMENU_H
#define AJOUTSOUSMENU_H

#include <QtGui/QMainWindow>
#include "ui_ajoutsousmenu.h"

class ajoutsousmenu : public QMainWindow
{
    Q_OBJECT

public:
    ajoutsousmenu(QWidget *parent = 0);
    ~ajoutsousmenu();

private:
    Ui::ajoutsousmenuClass ui;
};

#endif // AJOUTSOUSMENU_H
