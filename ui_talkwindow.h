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
    QPushButton *topIcon;
    QLabel *nameLabel;
    QPushButton *sysmin;
    QPushButton *sysmax;
    QPushButton *sysclose;
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
        TalkWindow->resize(547, 483);
        verticalLayout = new QVBoxLayout(TalkWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(TalkWindow);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy);
        titleWidget->setMinimumSize(QSize(0, 50));
        titleWidget->setMaximumSize(QSize(16777215, 50));
        titleWidget->setProperty("bottomskin", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(titleWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(15, -1, 15, -1);
        topIcon = new QPushButton(titleWidget);
        topIcon->setObjectName(QString::fromUtf8("topIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topIcon->sizePolicy().hasHeightForWidth());
        topIcon->setSizePolicy(sizePolicy1);
        topIcon->setMinimumSize(QSize(25, 25));
        topIcon->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(topIcon);

        nameLabel = new QLabel(titleWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setMinimumSize(QSize(0, 27));
        nameLabel->setMaximumSize(QSize(16777215, 27));
        QFont font;
        font.setPointSize(12);
        nameLabel->setFont(font);
        nameLabel->setMargin(0);

        horizontalLayout_2->addWidget(nameLabel);

        sysmin = new QPushButton(titleWidget);
        sysmin->setObjectName(QString::fromUtf8("sysmin"));
        sizePolicy1.setHeightForWidth(sysmin->sizePolicy().hasHeightForWidth());
        sysmin->setSizePolicy(sizePolicy1);
        sysmin->setMinimumSize(QSize(25, 25));
        sysmin->setMaximumSize(QSize(25, 25));
        sysmin->setFocusPolicy(Qt::ClickFocus);
        sysmin->setIconSize(QSize(20, 20));
        sysmin->setCheckable(false);

        horizontalLayout_2->addWidget(sysmin);

        sysmax = new QPushButton(titleWidget);
        sysmax->setObjectName(QString::fromUtf8("sysmax"));
        sizePolicy1.setHeightForWidth(sysmax->sizePolicy().hasHeightForWidth());
        sysmax->setSizePolicy(sizePolicy1);
        sysmax->setMinimumSize(QSize(25, 25));
        sysmax->setMaximumSize(QSize(25, 25));
        sysmax->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(sysmax);

        sysclose = new QPushButton(titleWidget);
        sysclose->setObjectName(QString::fromUtf8("sysclose"));
        sizePolicy1.setHeightForWidth(sysclose->sizePolicy().hasHeightForWidth());
        sysclose->setSizePolicy(sizePolicy1);
        sysclose->setMinimumSize(QSize(25, 25));
        sysclose->setMaximumSize(QSize(25, 25));
        sysclose->setFocusPolicy(Qt::ClickFocus);
        sysclose->setIconSize(QSize(20, 20));
        sysclose->setCheckable(false);
        sysclose->setAutoDefault(false);
        sysclose->setFlat(false);

        horizontalLayout_2->addWidget(sysclose);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(titleWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        bodySpliter = new QSplitter(TalkWindow);
        bodySpliter->setObjectName(QString::fromUtf8("bodySpliter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
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
        moduleLayout->setSpacing(15);
        moduleLayout->setContentsMargins(11, 11, 11, 11);
        moduleLayout->setObjectName(QString::fromUtf8("moduleLayout"));
        moduleLayout->setContentsMargins(15, 0, 15, 0);
        fontBtn = new QPushButton(moduleWidget);
        fontBtn->setObjectName(QString::fromUtf8("fontBtn"));
        sizePolicy1.setHeightForWidth(fontBtn->sizePolicy().hasHeightForWidth());
        fontBtn->setSizePolicy(sizePolicy1);
        fontBtn->setMinimumSize(QSize(25, 25));
        fontBtn->setMaximumSize(QSize(25, 25));
        fontBtn->setCheckable(true);
        fontBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(fontBtn);

        faceBtn = new QPushButton(moduleWidget);
        faceBtn->setObjectName(QString::fromUtf8("faceBtn"));
        sizePolicy1.setHeightForWidth(faceBtn->sizePolicy().hasHeightForWidth());
        faceBtn->setSizePolicy(sizePolicy1);
        faceBtn->setMinimumSize(QSize(25, 25));
        faceBtn->setMaximumSize(QSize(25, 25));
        faceBtn->setCheckable(true);
        faceBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(faceBtn);

        richfacebtn = new QPushButton(moduleWidget);
        richfacebtn->setObjectName(QString::fromUtf8("richfacebtn"));
        sizePolicy1.setHeightForWidth(richfacebtn->sizePolicy().hasHeightForWidth());
        richfacebtn->setSizePolicy(sizePolicy1);
        richfacebtn->setMinimumSize(QSize(25, 25));
        richfacebtn->setMaximumSize(QSize(25, 25));
        richfacebtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(richfacebtn);

        cutBtn = new QPushButton(moduleWidget);
        cutBtn->setObjectName(QString::fromUtf8("cutBtn"));
        sizePolicy1.setHeightForWidth(cutBtn->sizePolicy().hasHeightForWidth());
        cutBtn->setSizePolicy(sizePolicy1);
        cutBtn->setMinimumSize(QSize(25, 25));
        cutBtn->setMaximumSize(QSize(25, 25));
        cutBtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(cutBtn);

        inputbtn = new QPushButton(moduleWidget);
        inputbtn->setObjectName(QString::fromUtf8("inputbtn"));
        sizePolicy1.setHeightForWidth(inputbtn->sizePolicy().hasHeightForWidth());
        inputbtn->setSizePolicy(sizePolicy1);
        inputbtn->setMinimumSize(QSize(25, 25));
        inputbtn->setMaximumSize(QSize(25, 25));
        inputbtn->setProperty("hasborder", QVariant(true));

        moduleLayout->addWidget(inputbtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        moduleLayout->addItem(horizontalSpacer_2);

        registerBtn = new QPushButton(moduleWidget);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));
        sizePolicy1.setHeightForWidth(registerBtn->sizePolicy().hasHeightForWidth());
        registerBtn->setSizePolicy(sizePolicy1);
        registerBtn->setMinimumSize(QSize(25, 25));
        registerBtn->setMaximumSize(QSize(25, 25));
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
        topIcon->setText(QString());
        nameLabel->setText(QApplication::translate("TalkWindow", "\345\257\206\344\277\241\351\200\232-\345\267\245\344\275\234\345\217\267", nullptr));
#ifndef QT_NO_TOOLTIP
        sysmin->setToolTip(QApplication::translate("TalkWindow", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        sysmin->setText(QString());
        sysmax->setText(QString());
#ifndef QT_NO_TOOLTIP
        sysclose->setToolTip(QApplication::translate("TalkWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
        sysclose->setText(QString());
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
