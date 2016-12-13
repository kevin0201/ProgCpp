#ifndef DIALOGSUPPRESSION_H
#define DIALOGSUPPRESSION_H

#include <QtGui/QDialog>
#include "ui_dialogsuppression.h"

class dialogSuppression : public QDialog
{
    Q_OBJECT

public:
    dialogSuppression(QWidget *parent = 0);
    ~dialogSuppression();

private:
    Ui::dialogSuppressionClass ui;
};

#endif // DIALOGSUPPRESSION_H
