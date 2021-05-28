#include "skinwindow.h"
#include "UserLogin.h"
#include "ccmainwindow.h"

UserLogin::UserLogin(QWidget *parent)
	: BasicWindow(parent)
{
    ui.setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose);
	initTitleBar();
	setTitleBarTitle("", ":/CCMainWindow/Resources/MainWindow/qqlogoclassic.png");
    loadStyleSheet("UserLogin");
	initControl();
}

UserLogin::~UserLogin()
{
}

void UserLogin::initControl()
{
	QLabel* headlabel = new QLabel(this);
	headlabel->setFixedSize(68, 68);
	QPixmap pix(":/CCMainWindow/Resources/MainWindow/head_mask.png");
	headlabel->setPixmap(getRoundImage(QPixmap(":/CCMainWindow/Resources/MainWindow/yutiange.jpg"), pix, headlabel->size()));
	headlabel->move(width()/2 - 34, ui.titleWidget->height() - 34);

	connect(ui.loginBtn, &QPushButton::clicked, this, &UserLogin::onLoginBtnClicked);
}

void UserLogin::onLoginBtnClicked()
{
	close();
	CCMainWindow* mainwindow = new CCMainWindow;
	mainwindow->show();
}