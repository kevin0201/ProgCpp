/********************************************************************************
** Form generated from reading UI file 'dialogsuppression.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSUPPRESSION_H
#define UI_DIALOGSUPPRESSION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialogSuppressionClass
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *dialogSuppressionClass)
    {
        if (dialogSuppressionClass->objectName().isEmpty())
            dialogSuppressionClass->setObjectName(QString::fromUtf8("dialogSuppressionClass"));
        dialogSuppressionClass->resize(472, 115);
        pushButton = new QPushButton(dialogSuppressionClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 80, 88, 27));
        label = new QLabel(dialogSuppressionClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 471, 91));

        retranslateUi(dialogSuppressionClass);

        QMetaObject::connectSlotsByName(dialogSuppressionClass);
    } // setupUi

    void retranslateUi(QDialog *dialogSuppressionClass)
    {
        dialogSuppressionClass->setWindowTitle(QApplication::translate("dialogSuppressionClass", "dialogSuppression", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dialogSuppressionClass", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialogSuppressionClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">La R\303\251f\303\251rence que vous voulez supprimer n'existe pas.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogSuppressionClass: public Ui_dialogSuppressionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSUPPRESSION_H
