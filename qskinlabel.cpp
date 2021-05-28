#include "qskinlabel.h"
#include  <QApplication> 

QSkinLabel::QSkinLabel(QWidget *parent)
	: QLabel(parent)
{

}

QSkinLabel::~QSkinLabel()
{

}

void QSkinLabel::enterEvent(QEvent *event)
{
	m_spliterBtn->setVisible(true);
    QLabel::enterEvent(event);
}

void QSkinLabel::leaveEvent(QEvent *event)
{
	if (qApp->widgetAt(QCursor::pos()) != m_spliterBtn)
	{
		m_spliterBtn->setVisible(false);
	}
    QLabel::leaveEvent(event);
}
