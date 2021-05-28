/********************************************************************************
** Form generated from reading UI file 'skinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINWINDOW_H
#define UI_SKINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *titleIcon;
    QSpacerItem *horizontalSpacer;
    QPushButton *sysmin;
    QPushButton *sysclose;
    QWidget *bodyWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *SkinWindow)
    {
        if (SkinWindow->objectName().isEmpty())
            SkinWindow->setObjectName(QString::fromUtf8("SkinWindow"));
        SkinWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(SkinWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(SkinWindow);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy);
        titleWidget->setMinimumSize(QSize(0, 32));
        titleWidget->setMaximumSize(QSize(16777215, 32));
        titleWidget->setProperty("titleskin", QVariant(true));
        horizontalLayout = new QHBoxLayout(titleWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 0, 4, 0);
        titleIcon = new QLabel(titleWidget);
        titleIcon->setObjectName(QString::fromUtf8("titleIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleIcon->sizePolicy().hasHeightForWidth());
        titleIcon->setSizePolicy(sizePolicy1);
        titleIcon->setMinimumSize(QSize(42, 18));
        titleIcon->setMaximumSize(QSize(42, 18));

        horizontalLayout->addWidget(titleIcon);

        horizontalSpacer = new QSpacerItem(295, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sysmin = new QPushButton(titleWidget);
        sysmin->setObjectName(QString::fromUtf8("sysmin"));
        sysmin->setMinimumSize(QSize(24, 24));
        sysmin->setMaximumSize(QSize(24, 24));

        horizontalLayout->addWidget(sysmin);

        sysclose = new QPushButton(titleWidget);
        sysclose->setObjectName(QString::fromUtf8("sysclose"));
        sysclose->setMinimumSize(QSize(24, 24));
        sysclose->setMaximumSize(QSize(24, 24));

        horizontalLayout->addWidget(sysclose);


        verticalLayout->addWidget(titleWidget);

        bodyWidget = new QWidget(SkinWindow);
        bodyWidget->setObjectName(QString::fromUtf8("bodyWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bodyWidget->sizePolicy().hasHeightForWidth());
        bodyWidget->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(bodyWidget);
        gridLayout->setSpacing(12);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(12, 12, 12, 12);

        verticalLayout->addWidget(bodyWidget);


        retranslateUi(SkinWindow);

        QMetaObject::connectSlotsByName(SkinWindow);
    } // setupUi

    void retranslateUi(QWidget *SkinWindow)
    {
        SkinWindow->setWindowTitle(QApplication::translate("SkinWindow", "SkinWindow", nullptr));
        titleIcon->setText(QString());
        sysmin->setText(QString());
        sysclose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SkinWindow: public Ui_SkinWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINWINDOW_H
