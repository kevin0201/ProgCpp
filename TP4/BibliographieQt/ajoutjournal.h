#ifndef AJOUTJOURNAL_H
#define AJOUTJOURNAL_H

#include <QtGui/QMainWindow>
#include "ui_ajoutjournal.h"

class AjoutJournal : public QMainWindow
{
    Q_OBJECT

public:
    AjoutJournal(QWidget *parent = 0);
    ~AjoutJournal();

private:
    Ui::AjoutJournalClass ui;
};

#endif // AJOUTJOURNAL_H
