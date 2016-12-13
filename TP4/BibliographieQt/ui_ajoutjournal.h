/********************************************************************************
** Form generated from reading UI file 'ajoutjournal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTJOURNAL_H
#define UI_AJOUTJOURNAL_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutJournalClass
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AjoutJournalClass)
    {
        if (AjoutJournalClass->objectName().isEmpty())
            AjoutJournalClass->setObjectName(QString::fromUtf8("AjoutJournalClass"));
        AjoutJournalClass->resize(498, 455);
        centralwidget = new QWidget(AjoutJournalClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(170, 40, 256, 31));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(170, 80, 256, 31));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(170, 120, 256, 31));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(170, 160, 256, 31));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(170, 200, 256, 31));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(170, 240, 256, 31));
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(170, 280, 256, 31));
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(170, 320, 256, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 0, 211, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(297, 366, 131, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 40, 111, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        AjoutJournalClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AjoutJournalClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 498, 27));
        AjoutJournalClass->setMenuBar(menubar);
        statusbar = new QStatusBar(AjoutJournalClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AjoutJournalClass->setStatusBar(statusbar);

        retranslateUi(AjoutJournalClass);

        QMetaObject::connectSlotsByName(AjoutJournalClass);
    } // setupUi

    void retranslateUi(QMainWindow *AjoutJournalClass)
    {
        AjoutJournalClass->setWindowTitle(QApplication::translate("AjoutJournalClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AjoutJournalClass", "AJOUTER JOURNAL", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AjoutJournalClass", "OK", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AjoutJournalClass", "AUTEUR(S)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AjoutJournalClass", "TITRE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AjoutJournalClass", "IDENTIFIANT", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AjoutJournalClass", "ANNEE", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AjoutJournalClass", "NOM", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AjoutJournalClass", "VOLUME", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AjoutJournalClass", "PAGE", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AjoutJournalClass", "NUMERO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AjoutJournalClass: public Ui_AjoutJournalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTJOURNAL_H
