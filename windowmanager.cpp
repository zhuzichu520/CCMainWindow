#include "windowmanager.h"
#include "talkwindowshell.h"
#include "talkwindow.h"
#include "talkwindowitem.h"

Q_GLOBAL_STATIC(WindowManager, theInstance)
WindowManager::WindowManager()
	: QObject(nullptr)
	, m_talkwindowshell(nullptr)
{

}

WindowManager::~WindowManager()
{

}

WindowManager* WindowManager::getInstance()
{
	return theInstance();
}

void WindowManager::addWindowName(const QString& qsWindowName, QWidget* qWidget)
{
	if (!m_windowMap.contains(qsWindowName))
	{
		m_windowMap.insert(qsWindowName, qWidget);
	}
}

void WindowManager::addWindowName2(const QString& qsWindowName, TalkWindowShell* qWidget)
{
	if (!m_windowMap2.contains(qsWindowName))
	{
		m_windowMap2.insert(qsWindowName, qWidget);
	}
}

void WindowManager::deleteWindowName(const QString& qsWindowName)
{
	m_windowMap.remove(qsWindowName);
}

QWidget* WindowManager::findWindowName(const QString& qsWindowName)
{
	if (m_windowMap.contains(qsWindowName))
	{
		return m_windowMap.value(qsWindowName);
	}
	return nullptr;
}

TalkWindowShell* WindowManager::findWindowName2(const QString& qsWindowName)
{
	if (m_windowMap2.contains(qsWindowName))
	{
		return m_windowMap2.value(qsWindowName);
	}
	return nullptr;
}


void WindowManager::addNewTalkWindow(const QString& uid)
{
	TalkWindowShell* m_talkwindowshell2 = findWindowName2(uid);
	if (m_talkwindowshell2 == nullptr)
	{
		m_talkwindowshell2 = new TalkWindowShell;
		connect(m_talkwindowshell2, &TalkWindowShell::destroyed, [this](QObject* obj){
			m_talkwindowshell = nullptr;
		});
		addWindowName2(uid, m_talkwindowshell2);
	}
	int n = m_windowMap2.size();
	QWidget* widget = findWindowName(uid);
	if (widget == nullptr)
	{
		TalkWindow* talkwindow1 = new TalkWindow(m_talkwindowshell2, uid);
		TalkWindowItem* talkwindowItem1 = new TalkWindowItem(talkwindow1);
		talkwindow1->setWindowName(QStringLiteral("密信通-工作号- %1号").arg(n));
		talkwindowItem1->setMsgLabelContent(QStringLiteral("密信通-%1号").arg(n));
		m_talkwindowshell2->addTalkWindow(talkwindow1, talkwindowItem1);
	}
	else
	{
		m_talkwindowshell2->setCurrentWidget(widget);
	}
	//int x = m_windowMap2.size() * 10;
	//int y = m_windowMap2.size() * 10;
	//m_talkwindowshell2->move(m_talkwindowshell2->geometry().x()+x, m_talkwindowshell2->geometry().y()+y);
	m_talkwindowshell2->show();
	m_talkwindowshell2->activateWindow();
	int x = m_windowMap2.size() * 10;
	int y = m_windowMap2.size() * 10;
	m_talkwindowshell2->move(m_talkwindowshell2->geometry().x()+x, m_talkwindowshell2->geometry().y()+y);

}
