#ifndef CCMAINWINDOW_H
#define CCMAINWINDOW_H

#include "BasicWindow.h"
#include "ui_ccmainwindow.h"

class QTreeWidgetItem;
class CCMainWindow : public BasicWindow
{
	Q_OBJECT

public:
    CCMainWindow(QWidget *parent = nullptr);
	~CCMainWindow();

public:
	//���õȼ�
	void setLevelPixmap(int level);
	//����ͷ��
	void setHeadPixmap(const QString& headPath);
	//�����û�����
	void setUserName(const QString& username);
	//����״̬�����˵�ͼ��
	void setStatusMenuIcon(const QString& statusPath);
	//�������APPӦ��
	QWidget* addOtherAppExtension(const QString& apppath, const QString& appName);
	//��ʼ�������б�
	void initContactTree();

private slots:
	void onItemExpanded(QTreeWidgetItem * item);
	void onItemCollapsed(QTreeWidgetItem * item);
	void onItemClicked(QTreeWidgetItem * item, int column);
	void onItemDoubleClicked(QTreeWidgetItem *, int);
	void onAppIconCliked();

private:
	void initControl();
	void initStrangerTree();
	void addMyFriendInfo(QTreeWidgetItem* pRootGroupItem);
	void addStarngerInfo(QTreeWidgetItem* pRootGroupItem);
	void updateSeachStyle();

private:
	void resizeEvent(QResizeEvent *event) override;
	bool eventFilter(QObject *watched, QEvent *event) override;
	void mousePressEvent(QMouseEvent *event) override;

private:
	Ui::CCMainWindowClass ui;
};

#endif // CCMAINWINDOW_H
