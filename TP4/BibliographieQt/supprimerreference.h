#ifndef SUPPRIMERREFERENCE_H
#define SUPPRIMERREFERENCE_H

#include <QtGui/QMainWindow>
#include "ui_supprimerreference.h"

class SupprimerReference : public QMainWindow
{
    Q_OBJECT

public:
    SupprimerReference(QWidget *parent = 0);
    ~SupprimerReference();

private:
    Ui::SupprimerReferenceClass ui;
};

#endif // SUPPRIMERREFERENCE_H
