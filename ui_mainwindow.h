/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *mainwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_resource;
    QGroupBox *groupBox_Tower;
    QGroupBox *groupBox_introduce;
    QGroupBox *groupBox_skill;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1047, 680);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mainwidget = new QWidget(centralWidget);
        mainwidget->setObjectName(QStringLiteral("mainwidget"));
        mainwidget->setStyleSheet(QStringLiteral("background-color: rgb(176, 176, 176);"));

        horizontalLayout->addWidget(mainwidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_resource = new QGroupBox(centralWidget);
        groupBox_resource->setObjectName(QStringLiteral("groupBox_resource"));

        verticalLayout->addWidget(groupBox_resource);

        groupBox_Tower = new QGroupBox(centralWidget);
        groupBox_Tower->setObjectName(QStringLiteral("groupBox_Tower"));

        verticalLayout->addWidget(groupBox_Tower);

        groupBox_introduce = new QGroupBox(centralWidget);
        groupBox_introduce->setObjectName(QStringLiteral("groupBox_introduce"));

        verticalLayout->addWidget(groupBox_introduce);

        groupBox_skill = new QGroupBox(centralWidget);
        groupBox_skill->setObjectName(QStringLiteral("groupBox_skill"));

        verticalLayout->addWidget(groupBox_skill);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_resource->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_Tower->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_introduce->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_skill->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
