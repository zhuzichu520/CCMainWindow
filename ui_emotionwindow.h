/********************************************************************************
** Form generated from reading UI file 'emotionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMOTIONWINDOW_H
#define UI_EMOTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmotionWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QWidget *bottomWidget;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *emotionWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;

    void setupUi(QWidget *EmotionWindow)
    {
        if (EmotionWindow->objectName().isEmpty())
            EmotionWindow->setObjectName(QString::fromUtf8("EmotionWindow"));
        EmotionWindow->resize(480, 358);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EmotionWindow->sizePolicy().hasHeightForWidth());
        EmotionWindow->setSizePolicy(sizePolicy);
        EmotionWindow->setMinimumSize(QSize(480, 358));
        EmotionWindow->setMaximumSize(QSize(480, 358));
        EmotionWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(EmotionWindow);
        verticalLayout->setSpacing(12);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        topWidget = new QWidget(EmotionWindow);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy1);
        topWidget->setMinimumSize(QSize(0, 62));
        topWidget->setMaximumSize(QSize(16777215, 62));

        verticalLayout->addWidget(topWidget);

        bottomWidget = new QWidget(EmotionWindow);
        bottomWidget->setObjectName(QString::fromUtf8("bottomWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bottomWidget->sizePolicy().hasHeightForWidth());
        bottomWidget->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(bottomWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(bottomWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        emotionWidget = new QWidget();
        emotionWidget->setObjectName(QString::fromUtf8("emotionWidget"));
        emotionWidget->setGeometry(QRect(0, 0, 456, 260));
        sizePolicy2.setHeightForWidth(emotionWidget->sizePolicy().hasHeightForWidth());
        emotionWidget->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(emotionWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addLayout(gridLayout);

        scrollArea->setWidget(emotionWidget);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout->addWidget(bottomWidget);


        retranslateUi(EmotionWindow);

        QMetaObject::connectSlotsByName(EmotionWindow);
    } // setupUi

    void retranslateUi(QWidget *EmotionWindow)
    {
        EmotionWindow->setWindowTitle(QApplication::translate("EmotionWindow", "EmotionWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmotionWindow: public Ui_EmotionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMOTIONWINDOW_H
