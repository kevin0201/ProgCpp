/********************************************************************************
** Form generated from reading UI file 'ajoutsousmenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTSOUSMENU_H
#define UI_AJOUTSOUSMENU_H

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

class Ui_ajoutsousmenuClass
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ajoutsousmenuClass)
    {
        if (ajoutsousmenuClass->objectName().isEmpty())
            ajoutsousmenuClass->setObjectName(QString::fromUtf8("ajoutsousmenuClass"));
        ajoutsousmenuClass->resize(412, 126);
        centralwidget = new QWidget(ajoutsousmenuClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 151, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 30, 171, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 0, 201, 21));
        ajoutsousmenuClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ajoutsousmenuClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 412, 27));
        ajoutsousmenuClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ajoutsousmenuClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ajoutsousmenuClass->setStatusBar(statusbar);

        retranslateUi(ajoutsousmenuClass);

        QMetaObject::connectSlotsByName(ajoutsousmenuClass);
    } // setupUi

    void retranslateUi(QMainWindow *ajoutsousmenuClass)
    {
        ajoutsousmenuClass->setWindowTitle(QApplication::translate("ajoutsousmenuClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ajoutsousmenuClass", "AJOUTER JOURNAL", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ajoutsousmenuClass", "AJOITER OUVRAGE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajoutsousmenuClass", "Type de reference", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajoutsousmenuClass: public Ui_ajoutsousmenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTSOUSMENU_H
