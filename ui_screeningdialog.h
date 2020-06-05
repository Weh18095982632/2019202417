/********************************************************************************
** Form generated from reading UI file 'screeningdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENINGDIALOG_H
#define UI_SCREENINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ScreeningDialog
{
public:

    void setupUi(QDialog *ScreeningDialog)
    {
        if (ScreeningDialog->objectName().isEmpty())
            ScreeningDialog->setObjectName(QStringLiteral("ScreeningDialog"));
        ScreeningDialog->resize(400, 300);

        retranslateUi(ScreeningDialog);

        QMetaObject::connectSlotsByName(ScreeningDialog);
    } // setupUi

    void retranslateUi(QDialog *ScreeningDialog)
    {
        ScreeningDialog->setWindowTitle(QApplication::translate("ScreeningDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScreeningDialog: public Ui_ScreeningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENINGDIALOG_H
