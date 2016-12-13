/********************************************************************************
** Form generated from reading UI file 'dialogajouterreference.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTERREFERENCE_H
#define UI_DIALOGAJOUTERREFERENCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAjouterReferenceClass
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogAjouterReferenceClass)
    {
        if (DialogAjouterReferenceClass->objectName().isEmpty())
            DialogAjouterReferenceClass->setObjectName(QString::fromUtf8("DialogAjouterReferenceClass"));
        DialogAjouterReferenceClass->resize(503, 142);
        label = new QLabel(DialogAjouterReferenceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 471, 91));
        pushButton = new QPushButton(DialogAjouterReferenceClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 90, 88, 27));

        retranslateUi(DialogAjouterReferenceClass);

        QMetaObject::connectSlotsByName(DialogAjouterReferenceClass);
    } // setupUi

    void retranslateUi(QDialog *DialogAjouterReferenceClass)
    {
        DialogAjouterReferenceClass->setWindowTitle(QApplication::translate("DialogAjouterReferenceClass", "DialogAjouterReference", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAjouterReferenceClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">L</span><span style=\" font-size:12pt; font-weight:600;\">a R</span><span style=\" font-size:12pt; font-weight:600;\">\303\251f\303\251rence que vous voul</span><span style=\" font-size:12pt; font-weight:600;\">ez ajouter existe d\303\251j\303\240.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogAjouterReferenceClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAjouterReferenceClass: public Ui_DialogAjouterReferenceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTERREFERENCE_H
