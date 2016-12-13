/********************************************************************************
** Form generated from reading UI file 'supprimerreference.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREFERENCE_H
#define UI_SUPPRIMERREFERENCE_H

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
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SupprimerReferenceClass
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SupprimerReferenceClass)
    {
        if (SupprimerReferenceClass->objectName().isEmpty())
            SupprimerReferenceClass->setObjectName(QString::fromUtf8("SupprimerReferenceClass"));
        SupprimerReferenceClass->resize(437, 215);
        centralwidget = new QWidget(SupprimerReferenceClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 109, 47));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(130, 60, 256, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 0, 311, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 110, 161, 41));
        SupprimerReferenceClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SupprimerReferenceClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 437, 27));
        SupprimerReferenceClass->setMenuBar(menubar);
        statusbar = new QStatusBar(SupprimerReferenceClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SupprimerReferenceClass->setStatusBar(statusbar);

        retranslateUi(SupprimerReferenceClass);

        QMetaObject::connectSlotsByName(SupprimerReferenceClass);
    } // setupUi

    void retranslateUi(QMainWindow *SupprimerReferenceClass)
    {
        SupprimerReferenceClass->setWindowTitle(QApplication::translate("SupprimerReferenceClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SupprimerReferenceClass", "IDENTIFIANT", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SupprimerReferenceClass", "ENTRER L'IDENTIFIANT POUR SUPPRIMER", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SupprimerReferenceClass", "CONFIRMER", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupprimerReferenceClass: public Ui_SupprimerReferenceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREFERENCE_H
