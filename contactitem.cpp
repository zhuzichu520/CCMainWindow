#include "contactitem.h"

ContactItem::ContactItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	initControl();
}

ContactItem::~ContactItem()
{

}

void ContactItem::initControl()
{

}

void ContactItem::setUserName(const QString& userName)
{
	ui.userName->setText(userName);
}

void ContactItem::setSignName(const QString& signName)
{
	ui.signName->setText(signName);
}

void ContactItem::setHeadPixmap(const QPixmap& headPath)
{
	ui.label->setPixmap(headPath);
}

QSize ContactItem::getHeadLabelSize() const
{
	return ui.label->size();
}
