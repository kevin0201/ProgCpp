#ifndef DIALOGAJOUTERREFERENCE_H
#define DIALOGAJOUTERREFERENCE_H

#include <QtGui/QDialog>
#include "ui_dialogajouterreference.h"

class DialogAjouterReference : public QDialog
{
    Q_OBJECT

public:
    DialogAjouterReference(QWidget *parent = 0);
    ~DialogAjouterReference();

private:
    Ui::DialogAjouterReferenceClass ui;
};

#endif // DIALOGAJOUTERREFERENCE_H
