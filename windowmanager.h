#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <QObject>
#include <QMap>

class TalkWindowShell;
class WindowManager : public QObject
{
	Q_OBJECT

public:
	WindowManager();
	~WindowManager();

public:
	QWidget* findWindowName(const QString& qsWindowName);
	TalkWindowShell* findWindowName2(const QString& qsWindowName);
	void deleteWindowName(const QString& qsWindowName);
	void addWindowName(const QString& qsWindowName, QWidget* qWidget);
	void addWindowName2(const QString& qsWindowName, TalkWindowShell* qWidget);

public:
	//��ȡ���ڹ�����
	static WindowManager* getInstance();
	//��Ӵ���
	void addNewTalkWindow(const QString& uid);

private:
	TalkWindowShell* m_talkwindowshell;
	QMap<QString, QWidget*> m_windowMap;
	QMap<QString, TalkWindowShell*> m_windowMap2;
};

#endif // WINDOWMANAGER_H
