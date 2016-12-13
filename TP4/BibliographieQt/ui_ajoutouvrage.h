/********************************************************************************
** Form generated from reading UI file 'ajoutouvrage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTOUVRAGE_H
#define UI_AJOUTOUVRAGE_H

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

class Ui_ajoutOuvrageClass
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser_6;
    QLabel *label_9;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QTextBrowser *textBrowser_5;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ajoutOuvrageClass)
    {
        if (ajoutOuvrageClass->objectName().isEmpty())
            ajoutOuvrageClass->setObjectName(QString::fromUtf8("ajoutOuvrageClass"));
        ajoutOuvrageClass->resize(521, 470);
        centralwidget = new QWidget(ajoutOuvrageClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(190, 320, 256, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(190, 10, 211, 31));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(190, 220, 256, 31));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(190, 160, 256, 31));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(190, 110, 256, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 111, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(190, 270, 256, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(317, 376, 131, 31));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(190, 50, 256, 31));
        ajoutOuvrageClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ajoutOuvrageClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 521, 27));
        ajoutOuvrageClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ajoutOuvrageClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ajoutOuvrageClass->setStatusBar(statusbar);

        retranslateUi(ajoutOuvrageClass);

        QMetaObject::connectSlotsByName(ajoutOuvrageClass);
    } // setupUi

    void retranslateUi(QMainWindow *ajoutOuvrageClass)
    {
        ajoutOuvrageClass->setWindowTitle(QApplication::translate("ajoutOuvrageClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ajoutOuvrageClass", "AJOUTER OUVRAGE", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajoutOuvrageClass", "AUTEUR(S)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ajoutOuvrageClass", "TITRE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajoutOuvrageClass", "IDENTIFIANT", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajoutOuvrageClass", "ANNEE", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajoutOuvrageClass", "VILLE", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajoutOuvrageClass", "EDITEUR", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ajoutOuvrageClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajoutOuvrageClass: public Ui_ajoutOuvrageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTOUVRAGE_H
