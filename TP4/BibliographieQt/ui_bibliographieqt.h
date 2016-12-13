/********************************************************************************
** Form generated from reading UI file 'bibliographieqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOGRAPHIEQT_H
#define UI_BIBLIOGRAPHIEQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibliographieQtClass
{
public:
    QWidget *centralwidget;
    QPushButton *AjouterReference;
    QPushButton *SupprimerReference;
    QPushButton *AfficherBibliographie;
    QPushButton *Quitter;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BibliographieQtClass)
    {
        if (BibliographieQtClass->objectName().isEmpty())
            BibliographieQtClass->setObjectName(QString::fromUtf8("BibliographieQtClass"));
        BibliographieQtClass->resize(372, 357);
        centralwidget = new QWidget(BibliographieQtClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AjouterReference = new QPushButton(centralwidget);
        AjouterReference->setObjectName(QString::fromUtf8("AjouterReference"));
        AjouterReference->setGeometry(QRect(60, 60, 221, 41));
        SupprimerReference = new QPushButton(centralwidget);
        SupprimerReference->setObjectName(QString::fromUtf8("SupprimerReference"));
        SupprimerReference->setGeometry(QRect(60, 120, 221, 41));
        AfficherBibliographie = new QPushButton(centralwidget);
        AfficherBibliographie->setObjectName(QString::fromUtf8("AfficherBibliographie"));
        AfficherBibliographie->setGeometry(QRect(60, 180, 221, 41));
        Quitter = new QPushButton(centralwidget);
        Quitter->setObjectName(QString::fromUtf8("Quitter"));
        Quitter->setGeometry(QRect(60, 250, 221, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(67, -4, 251, 31));
        BibliographieQtClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BibliographieQtClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 372, 27));
        BibliographieQtClass->setMenuBar(menubar);
        statusbar = new QStatusBar(BibliographieQtClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BibliographieQtClass->setStatusBar(statusbar);

        retranslateUi(BibliographieQtClass);

        QMetaObject::connectSlotsByName(BibliographieQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *BibliographieQtClass)
    {
        BibliographieQtClass->setWindowTitle(QApplication::translate("BibliographieQtClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        AjouterReference->setText(QApplication::translate("BibliographieQtClass", "Ajouter une r\303\251f\303\251rence", 0, QApplication::UnicodeUTF8));
        SupprimerReference->setText(QApplication::translate("BibliographieQtClass", "SupprimerReference", 0, QApplication::UnicodeUTF8));
        AfficherBibliographie->setText(QApplication::translate("BibliographieQtClass", "AfficherBibliographie", 0, QApplication::UnicodeUTF8));
        Quitter->setText(QApplication::translate("BibliographieQtClass", "Quitter", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BibliographieQtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">MENU GENERALE BIBLIOGRAPHIE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BibliographieQtClass: public Ui_BibliographieQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOGRAPHIEQT_H
