/********************************************************************************
** Form generated from reading UI file 'talkwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALKWINDOW_H
#define UI_TALKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <msgwebview.h>
#include <qmsgtextedit.h>

QT_BEGIN_NAMESPACE

class Ui_TalkWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameLabel;
    QPushButton *sysmin;
    QPushButton *sysclose;
    QLabel *signLabel;
    QWidget *funWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addtoolbtn;
    QPushButton *addhumanBtn;
    QPushButton *appBtn;
    QPushButton *videoBtn;
    QPushButton *toolsetBtn;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSplitter *bodySpliter;
    QWidget *bodyWidget;
    QVBoxLayout *vlayout;
    QFrame *frameWidhet;
    QVBoxLayout *verticalLayout_2;
    MsgWebView *msgWidget;
    QWidget *fontWidget;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *fontfamilyCombox;
    QComboBox *fontsizeCombox;
    QPushButton *boldBtn;
    QPushButton *italBtn;
    QPushButton *underBtn;
    QPushButton *colorBtn;
    QSpacerItem *horizontalSpacer_4;
    QWidget *bottomWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *moduleWidget;
    QHBoxLayout *moduleLayout;
    QPushButton *fontBtn;
    QPushButton *faceBtn;
    QPushButton *richfacebtn;
    QPushButton *cutBtn;
    QPushButton *inputbtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *registerBtn;
    QMsgTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *closeBtn;
    QToolButton *sendBtn;

    void setupUi(QWidget *TalkWindow)
    {
        if (TalkWindow->objectName().isEmpty())
            TalkWindow->setObjectName(QString::fromUtf8("TalkWindow"));
        TalkWindow->resize(602, 439);
        verticalLayout = new QVBoxLayout(TalkWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(TalkWindow);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy);
        titleWidget->setMinimumSize(QSize(0, 84));
        titleWidget->setMaximumSize(QSize(16777215, 84));
        titleWidget->setProperty("bottomskin", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(titleWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameLabel = new QLabel(titleWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setMinimumSize(QSize(0, 27));
        nameLabel->setMaximumSize(QSize(16777215, 27));
        QFont font;
        font.setPointSize(12);
        nameLabel->setFont(font);

        horizontalLayout_2->addWidget(nameLabel);

        sysmin = new QPushButton(titleWidget);
        sysmin->setObjectName(QString::fromUtf8("sysmin"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sysmin->sizePolicy().hasHeightForWidth());
        sysmin->setSizePolicy(sizePolicy1);
        sysmin->setMinimumSize(QSize(30, 27));
        sysmin->setMaximumSize(QSize(30, 27));
        sysmin->setFocusPolicy(Qt::ClickFocus);
        sysmin->setIconSize(QSize(30, 30));
        sysmin->setCheckable(false);

        horizontalLayout_2->addWidget(sysmin);

        sysclose = new QPushButton(titleWidget);
        sysclose->setObjectName(QString::fromUtf8("sysclose"));
        sizePolicy1.setHeightForWidth(sysclose->sizePolicy().hasHeightForWidth());
        sysclose->setSizePolicy(sizePolicy1);
        sysclose->setMinimumSize(QSize(30, 27));
        sysclose->setMaximumSize(QSize(30, 27));
        sysclose->setFocusPolicy(Qt::ClickFocus);
        sysclose->setIconSize(QSize(30, 30));
        sysclose->setCheckable(false);
        sysclose->setAutoDefault(false);
        sysclose->setFlat(false);

        horizontalLayout_2->addWidget(sysclose);


        verticalLayout_3->addLayout(horizontalLayout_2);

        signLabel = new QLabel(titleWidget);
        signLabel->setObjectName(QString::fromUtf8("signLabel"));
        sizePolicy.setHeightForWidth(signLabel->sizePolicy().hasHeightForWidth());
        signLabel->setSizePolicy(sizePolicy);
        signLabel->setMinimumSize(QSize(0, 20));
        signLabel->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(10);
        signLabel->setFont(font1);

        verticalLayout_3->addWidget(signLabel);

        funWidget = new QWidget(titleWidget);
        funWidget->setObjectName(QString::fromUtf8("funWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(funWidget->sizePolicy().hasHeightForWidth());
        funWidget->setSizePolicy(sizePolicy2);
        funWidget->setMinimumSize(QSize(0, 34));
        funWidget->setMaximumSize(QSize(16777215, 600));
        funWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(funWidget);
        horizontalLayout_4->setSpacing(8);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 6, 0);
        addtoolbtn = new QPushButton(funWidget);
        addtoolbtn->setObjectName(QString::fromUtf8("addtoolbtn"));
        sizePolicy1.setHeightForWidth(addtoolbtn->sizePolicy().hasHeightForWidth());
        addtoolbtn->setSizePolicy(sizePolicy1);
        addtoolbtn->setMinimumSize(QSize(27, 25));
        addtoolbtn->setMaximumSize(QSize(27, 25));
        addtoolbtn->setProperty("hasborder", QVariant(true));

        horizontalLayout_4->addWidget(addtoolbtn);

        addhumanBtn = new QPushButton(funWidget);
        addhumanBtn->setObjectName(QString::fromUtf8("addhumanBtn"));
        sizePolicy1.setHeightForWidth(addhumanBtn->sizePolicy().hasHeightForWidth());
        addhumanBtn->setSizePolicy(sizePolicy1);
        addhumanBtn->setMinimumSize(QSize(27, 25));
        addhumanBtn->setMaximumSize(QSize(27, 25));
        addhumanBtn->setProperty("hasborder", QVariant(true));

        horizontalLayout_4->addWidget(addhumanBtn);

        appBtn = new QPushButton(funWidget);
        appBtn->setObjectName(QString::fromUtf8("appBtn"));
        sizePolicy1.setHeightForWidth(appBtn->sizePolicy().hasHeightForWidth());
        appBtn->setSizePolicy(sizePolicy1);
        appBtn->setMinimumSize(QSize(25, 25));
        appBtn->setMaximumSize(QSize(25, 25));
        appBtn->setProperty("hasborder", QVariant(true));

        horizontalLayout_4->addWidget(appBtn);

        videoBtn = new QPushButton(funWidget);
        videoBtn->setObjectName(QString::fromUtf8("videoBtn"));
        sizePolicy1.setHeightForWidth(videoBtn->sizePolicy().hasHeightForWidth());
        videoBtn->setSizePolicy(sizePolicy1);
        videoBtn->setMinimumSize(QSize(25, 25));
        videoBtn->setMaximumSize(QSize(25, 25));
        videoBtn->setProperty("hasborder", QVariant(true));

        horizontalLayout_4->addWidget(videoBtn);

        toolsetBtn = new QPushButton(funWidget);
        toolsetBtn->setObjectName(QString::fromUtf8("toolsetBtn"));
        sizePolicy1.setHeightForWidth(toolsetBtn->sizePolicy().hasHeightForWidth());
        toolsetBtn->setSizePolicy(sizePolicy1);
        toolsetBtn->setMinimumSize(QSize(25, 25));
        toolsetBtn->setMaximumSize(QSize(25, 25));
        toolsetBtn->setProperty("hasborder", QVariant(true));

        horizontalLayout_4->addWidget(toolsetBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(funWidget);


        verticalLayout->addWidget(titleWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        bodySpliter = new QSplitter(TalkWindow);
        bodySpliter->setObjectName(QString::fromUtf8("bodySpliter"));
        sizePolicy2.setHeightForWidth(bodySpliter->sizePolicy().hasHeightForWidth());
        bodySpliter->setSizePolicy(sizePolicy2);
        bodySpliter->setOrientation(Qt::Vertical);
        bodySpliter->setHandleWidth(1);
        bodySpliter->setChildrenCollapsible(false);
        bodyWidget = new QWidget(bodySpliter);
        bodyWidget->setObjectName(QString::fromUtf8("bodyWidget"));
        sizePolicy2.setHeightForWidth(bodyWidget->sizePolicy().hasHeightForWidth());
        bodyWidget->setSizePolicy(sizePolicy2);
        bodyWidget->setStyleSheet(QString::fromUtf8(""));
        vlayout = new QVBoxLayout(bodyWidget);
        vlayout->setSpacing(0);
        vlayout->setContentsMargins(11, 11, 11, 11);
        vlayout->setObjectName(QString::fromUtf8("vlayout"));
        vlayout->setContentsMargins(0, 0, 0, 0);
        frameWidhet = new QFrame(bodyWidget);
        frameWidhet->setObjectName(QString::fromUtf8("frameWidhet"));
        sizePolicy2.setHeightForWidth(frameWidhet->sizePolicy().hasHeightForWidth());
        frameWidhet->setSizePolicy(sizePolicy2);
        frameWidhet->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(frameWidhet);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 1, 0, 1);
        msgWidget = new MsgWebView(frameWidhet);
        msgWidget->setObjectName(QString::fromUtf8("msgWidget"));

        verticalLayout_2->addWidget(msgWidget);


        vlayout->addWidget(frameWidhet);

        fontWidget = new QWidget(bodyWidget);
        fontWidget->setObjectName(QString::fromUtf8("fontWidget"));
        sizePolicy.setHeightForWidth(fontWidget->sizePolicy().hasHeightForWidth());
        fontWidget->setSizePolicy(sizePolicy);
        fontWidget->setMinimumSize(QSize(0, 34));
        fontWidget->setMaximumSize(QSize(16777215, 34));
        horizontalLayout_5 = new QHBoxLayout(fontWidget);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 8, 0, 6);
        fontfamilyCombox = new QComboBox(fontWidget);
        fontfamilyCombox->setObjectName(QString::fromUtf8("fontfamilyCombox"));
        sizePolicy1.setHeightForWidth(fontfamilyCombox->sizePolicy().hasHeightForWidth());
        fontfamilyCombox->setSizePolicy(sizePolicy1);
        fontfamilyCombox->setMinimumSize(QSize(92, 21));
        fontfamilyCombox->setMaximumSize(QSize(92, 21));
        fontfamilyCombox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(fontfamilyCombox);

        fontsizeCombox = new QComboBox(fontWidget);
        fontsizeCombox->setObjectName(QString::fromUtf8("fontsizeCombox"));
        sizePolicy1.setHeightForWidth(fontsizeCombox->sizePolicy().hasHeightForWidth());
        fontsizeCombox->setSizePolicy(sizePolicy1);
        fontsizeCombox->setMinimumSize(QSize(46, 21));
        fontsizeCombox->setMaximumSize(QSize(46, 21));
        fontsizeCombox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(fontsizeCombox);

        boldBtn = new QPushButton(fontWidget);
        boldBtn->setObjectName(QString::fromUtf8("boldBtn"));
        sizePolicy1.setHeightForWidth(boldBtn->sizePolicy().hasHeightForWidth());
        boldBtn->setSizePolicy(sizePolicy1);
        boldBtn->setMinimumSize(QSize(21, 21));
        boldBtn->setMaximumSize(QSize(21, 21));

        horizontalLayout_5->addWidget(boldBtn);

        italBtn = new QPushButton(fontWidget);
        italBtn->setObjectName(QString::fromUtf8("italBtn"));
        sizePolicy1.setHeightForWidth(italBtn->sizePolicy().hasHeightForWidth());
        italBtn->setSizePolicy(sizePolicy1);
        italBtn->setMinimumSize(QSize(21, 21));
        italBtn->setMaximumSize(QSize(21, 21));

        horizontalLayout_5->addWidget(italBtn);

        underBtn = new QPushButton(fontWidget);
        underBtn->setObjectName(QString::fromUtf8("underBtn"));
        sizePolicy1.setHeightForWidth(underBtn->sizePolicy().hasHeightForWidth());
        underBtn->setSizePolicy(sizePolicy1);
        underBtn->setMinimumSize(QSize(21, 21));
        underBtn->setMaximumSize(QSize(21, 21));

        horizontalLayout_5->addWidget(underBtn);

        colorBtn = new QPushButton(fontWidget);
        colorBtn->setObjectName(QString::fromUtf8("colorBtn"));
        sizePolicy1.setHeightForWidth(colorBtn->sizePolicy().hasHeightForWidth());
        colorBtn->setSizePolicy(sizePolicy1);
        colorBtn->setMinimumSize(QSize(21, 21));
        colorBtn->setMaximumSize(QSize(21, 21));

        horizontalLayout_5->addWidget(colorBtn);

        horizontalSpacer_4 = new QSpacerItem(219, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        vlayout->addWidget(fontWidget);

        bodySpliter->addWidget(bodyWidget);
        bottomWidget = new QWidget(bodySpliter);
        bottomWidget->setObjectName(QString::fromUtf8("bottomWidget"));
        sizePolicy2.setHeightForWidth(bottomWidget->sizePolicy().hasHeightForWidth());
        bottomWidget->setSizePolicy(sizePolicy2);
        bottomWidget->setMinimumSize(QSize(0, 138));
        bottomWidget->setMaximumSize(QSize(16777215, 400));
        bottomWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(bottomWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        moduleWidget = new QWidget(bottomWidget);
        moduleWidget->setObjectName(QString::fromUtf8("moduleWidget"));
        sizePolicy.setHeightForWidth(moduleWidget->sizePolicy().hasHeightForWidth());
        moduleWidget->setSizePolicy(sizePolicy);
        moduleWidget->setMinimumSize(QSize(0, 24));
        moduleWidget->setMaximumSize(QSize(16777215, 24));
        moduleLayout = new QHBoxLayout(moduleWidget);
        moduleLayout->setSpacing(8);
        moduleLayout->setContentsMargins(11, 11, 11, 11);
        moduleLayout->setObjectName(QString::fromUtf8("moduleLayout"));
        moduleLayout->setContentsMargins(8, 0, 8, 0);
        fontBtn = new QPushButton(moduleWidget);
        fontBtn->setObjectName(QString::fromUtf8("fontBtn"));
        sizePolicy1.setHeightForWidth(fontBtn->sizePolicy().hasHeightForWidth());
        fontBtn->setSizePolicy(sizePolicy1);
        fontBtn->setMinimumSize(QSize(20, 20));
        fontBtn->setMaximumSize(QSize(20, 20));
        fontBtn->setCheckable(true);
        fontBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(fontBtn);

        faceBtn = new QPushButton(moduleWidget);
        faceBtn->setObjectName(QString::fromUtf8("faceBtn"));
        sizePolicy1.setHeightForWidth(faceBtn->sizePolicy().hasHeightForWidth());
        faceBtn->setSizePolicy(sizePolicy1);
        faceBtn->setMinimumSize(QSize(20, 20));
        faceBtn->setMaximumSize(QSize(20, 20));
        faceBtn->setCheckable(true);
        faceBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(faceBtn);

        richfacebtn = new QPushButton(moduleWidget);
        richfacebtn->setObjectName(QString::fromUtf8("richfacebtn"));
        sizePolicy1.setHeightForWidth(richfacebtn->sizePolicy().hasHeightForWidth());
        richfacebtn->setSizePolicy(sizePolicy1);
        richfacebtn->setMinimumSize(QSize(20, 20));
        richfacebtn->setMaximumSize(QSize(20, 20));
        richfacebtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(richfacebtn);

        cutBtn = new QPushButton(moduleWidget);
        cutBtn->setObjectName(QString::fromUtf8("cutBtn"));
        sizePolicy1.setHeightForWidth(cutBtn->sizePolicy().hasHeightForWidth());
        cutBtn->setSizePolicy(sizePolicy1);
        cutBtn->setMinimumSize(QSize(20, 20));
        cutBtn->setMaximumSize(QSize(20, 20));
        cutBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(cutBtn);

        inputbtn = new QPushButton(moduleWidget);
        inputbtn->setObjectName(QString::fromUtf8("inputbtn"));
        sizePolicy1.setHeightForWidth(inputbtn->sizePolicy().hasHeightForWidth());
        inputbtn->setSizePolicy(sizePolicy1);
        inputbtn->setMinimumSize(QSize(20, 20));
        inputbtn->setMaximumSize(QSize(20, 20));
        inputbtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(inputbtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        moduleLayout->addItem(horizontalSpacer_2);

        registerBtn = new QPushButton(moduleWidget);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));
        sizePolicy1.setHeightForWidth(registerBtn->sizePolicy().hasHeightForWidth());
        registerBtn->setSizePolicy(sizePolicy1);
        registerBtn->setMinimumSize(QSize(20, 20));
        registerBtn->setMaximumSize(QSize(20, 20));
        registerBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(registerBtn);


        verticalLayout_5->addWidget(moduleWidget);

        textEdit = new QMsgTextEdit(bottomWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setContextMenuPolicy(Qt::NoContextMenu);
        textEdit->setFrameShape(QFrame::NoFrame);

        verticalLayout_5->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        closeBtn = new QToolButton(bottomWidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setMinimumSize(QSize(68, 24));
        closeBtn->setProperty("titleskin", QVariant(true));

        horizontalLayout_3->addWidget(closeBtn);

        sendBtn = new QToolButton(bottomWidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setMinimumSize(QSize(92, 24));
        sendBtn->setPopupMode(QToolButton::MenuButtonPopup);
        sendBtn->setArrowType(Qt::NoArrow);
        sendBtn->setProperty("titleskin", QVariant(true));

        horizontalLayout_3->addWidget(sendBtn);


        verticalLayout_5->addLayout(horizontalLayout_3);

        bodySpliter->addWidget(bottomWidget);

        horizontalLayout->addWidget(bodySpliter);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TalkWindow);

        sysclose->setDefault(false);


        QMetaObject::connectSlotsByName(TalkWindow);
    } // setupUi

    void retranslateUi(QWidget *TalkWindow)
    {
        TalkWindow->setWindowTitle(QApplication::translate("TalkWindow", "TalkWindow", nullptr));
        nameLabel->setText(QApplication::translate("TalkWindow", "\345\257\206\344\277\241\351\200\232-\345\267\245\344\275\234\345\217\267", nullptr));
#ifndef QT_NO_TOOLTIP
        sysmin->setToolTip(QApplication::translate("TalkWindow", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        sysmin->setText(QString());
#ifndef QT_NO_TOOLTIP
        sysclose->setToolTip(QApplication::translate("TalkWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
        sysclose->setText(QString());
        signLabel->setText(QApplication::translate("TalkWindow", "\346\254\242\350\277\216\345\220\220\346\247\275\343\200\201\345\257\206\344\277\241\351\200\232", nullptr));
        addtoolbtn->setText(QString());
        addhumanBtn->setText(QString());
        appBtn->setText(QString());
        videoBtn->setText(QString());
        toolsetBtn->setText(QString());
        boldBtn->setText(QString());
        italBtn->setText(QString());
        underBtn->setText(QString());
        colorBtn->setText(QString());
        fontBtn->setText(QString());
        faceBtn->setText(QString());
        richfacebtn->setText(QString());
        cutBtn->setText(QString());
        inputbtn->setText(QString());
        registerBtn->setText(QString());
        closeBtn->setText(QApplication::translate("TalkWindow", "\345\205\263\351\227\255", nullptr));
        sendBtn->setText(QApplication::translate("TalkWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TalkWindow: public Ui_TalkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALKWINDOW_H
