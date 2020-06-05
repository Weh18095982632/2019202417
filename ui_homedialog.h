/********************************************************************************
** Form generated from reading UI file 'homedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEDIALOG_H
#define UI_HOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_screenNum;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *mainwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_resource;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_Tower;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QGroupBox *groupBox_introduce;
    QLabel *label_3;
    QGroupBox *groupBox_skill;
    QPushButton *pushButton_10;

    void setupUi(QDialog *HomeDialog)
    {
        if (HomeDialog->objectName().isEmpty())
            HomeDialog->setObjectName(QStringLiteral("HomeDialog"));
        HomeDialog->resize(1335, 814);
        horizontalLayout_3 = new QHBoxLayout(HomeDialog);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_screenNum = new QLabel(HomeDialog);
        label_screenNum->setObjectName(QStringLiteral("label_screenNum"));
        label_screenNum->setMinimumSize(QSize(0, 40));
        label_screenNum->setStyleSheet(QString::fromUtf8("font: 24pt \"\346\245\267\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_screenNum);

        widget = new QWidget(HomeDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(widget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mainwidget = new QWidget(HomeDialog);
        mainwidget->setObjectName(QStringLiteral("mainwidget"));
        mainwidget->setMinimumSize(QSize(1024, 768));
        mainwidget->setMaximumSize(QSize(1024, 768));
        mainwidget->setStyleSheet(QStringLiteral("background-color: rgb(176, 176, 176);"));

        horizontalLayout_2->addWidget(mainwidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_resource = new QGroupBox(HomeDialog);
        groupBox_resource->setObjectName(QStringLiteral("groupBox_resource"));
        label = new QLabel(groupBox_resource);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 151, 51));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\346\245\267\344\275\223\";"));
        label_2 = new QLabel(groupBox_resource);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 40, 101, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 24pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(groupBox_resource);

        groupBox_Tower = new QGroupBox(HomeDialog);
        groupBox_Tower->setObjectName(QStringLiteral("groupBox_Tower"));
        pushButton = new QPushButton(groupBox_Tower);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 90, 90));
        pushButton->setStyleSheet(QStringLiteral("background-image: url(:/image/11.png);"));
        pushButton_2 = new QPushButton(groupBox_Tower);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 20, 90, 90));
        pushButton_2->setStyleSheet(QStringLiteral("background-image: url(:/image/12.png);"));
        pushButton_3 = new QPushButton(groupBox_Tower);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 20, 90, 90));
        pushButton_3->setStyleSheet(QStringLiteral("background-image: url(:/image/13.png);"));
        pushButton_4 = new QPushButton(groupBox_Tower);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 120, 90, 90));
        pushButton_4->setStyleSheet(QStringLiteral("background-image: url(:/image/22.png);"));
        pushButton_5 = new QPushButton(groupBox_Tower);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 120, 90, 90));
        pushButton_5->setStyleSheet(QStringLiteral("background-image: url(:/image/23.png);"));
        pushButton_6 = new QPushButton(groupBox_Tower);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 120, 90, 90));
        pushButton_6->setStyleSheet(QStringLiteral("background-image: url(:/image/21.png);"));
        pushButton_7 = new QPushButton(groupBox_Tower);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(110, 220, 90, 90));
        pushButton_7->setStyleSheet(QStringLiteral("background-image: url(:/image/32.png);"));
        pushButton_8 = new QPushButton(groupBox_Tower);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 220, 90, 90));
        pushButton_8->setStyleSheet(QStringLiteral("background-image: url(:/image/33.png);"));
        pushButton_9 = new QPushButton(groupBox_Tower);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 220, 90, 90));
        pushButton_9->setStyleSheet(QStringLiteral("background-image: url(:/image/31.png);"));

        verticalLayout->addWidget(groupBox_Tower);

        groupBox_introduce = new QGroupBox(HomeDialog);
        groupBox_introduce->setObjectName(QStringLiteral("groupBox_introduce"));
        label_3 = new QLabel(groupBox_introduce);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 40, 251, 131));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\344\273\277\345\256\213\";"));

        verticalLayout->addWidget(groupBox_introduce);

        groupBox_skill = new QGroupBox(HomeDialog);
        groupBox_skill->setObjectName(QStringLiteral("groupBox_skill"));
        pushButton_10 = new QPushButton(groupBox_skill);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(40, 30, 68, 68));
        pushButton_10->setStyleSheet(QStringLiteral("background-image: url(:/image/41.png);"));

        verticalLayout->addWidget(groupBox_skill);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HomeDialog);

        QMetaObject::connectSlotsByName(HomeDialog);
    } // setupUi

    void retranslateUi(QDialog *HomeDialog)
    {
        HomeDialog->setWindowTitle(QApplication::translate("HomeDialog", "Dialog", Q_NULLPTR));
        label_screenNum->setText(QApplication::translate("HomeDialog", "\345\241\224\351\230\262--\347\256\200\345\215\225\346\250\241\345\274\217", Q_NULLPTR));
        groupBox_resource->setTitle(QApplication::translate("HomeDialog", "\350\265\204\346\272\220", Q_NULLPTR));
        label->setText(QApplication::translate("HomeDialog", "\345\211\251\344\275\231\350\265\204\346\272\220\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("HomeDialog", "100", Q_NULLPTR));
        groupBox_Tower->setTitle(QApplication::translate("HomeDialog", "\351\230\262\345\276\241\345\241\224", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        groupBox_introduce->setTitle(QApplication::translate("HomeDialog", "\351\230\262\345\276\241\345\241\224\344\273\213\347\273\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("HomeDialog", "\351\230\262\345\276\241\345\241\224\357\274\232\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202", Q_NULLPTR));
        groupBox_skill->setTitle(QApplication::translate("HomeDialog", "\347\273\210\346\236\201\346\212\200\350\203\275", Q_NULLPTR));
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeDialog: public Ui_HomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEDIALOG_H
