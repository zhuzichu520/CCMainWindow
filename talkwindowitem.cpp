#include "talkwindowitem.h"
#include "commonutils.h"

#include <QDebug>

TalkWindowItem::TalkWindowItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	initControl();
}

TalkWindowItem::~TalkWindowItem()
{

}

void TalkWindowItem::initControl()
{
	ui.tclosebtn->setVisible(false);
	connect(ui.tclosebtn, SIGNAL(clicked(bool)), this, SIGNAL(signalCloseClicked()));
}

void TalkWindowItem::setMsgLabelContent(const QString& msg)
{
	ui.msgLabel->setText(msg);
}

void TalkWindowItem::setHeadPixmap(const QString& headpath)
{
	QPixmap head = QPixmap(":/CCMainWindow/Resources/MainWindow/yutiange.jpg");
	QPixmap mask = QPixmap(":/CCMainWindow/Resources/MainWindow/head_mask.png");

	const QPixmap&& headpixmap = CommonUtils::getRoundImage(head, mask, ui.headlabel->size());
	ui.headlabel->setPixmap(headpixmap);
}


void TalkWindowItem::enterEvent(QEvent *event)
{
	ui.tclosebtn->setVisible(true);
	QWidget::enterEvent(event);
}

void TalkWindowItem::leaveEvent(QEvent *event)
{
	ui.tclosebtn->setVisible(false);
	QWidget::leaveEvent(event);
}

void TalkWindowItem::resizeEvent(QResizeEvent *event)
{
	QWidget::resizeEvent(event);
}
