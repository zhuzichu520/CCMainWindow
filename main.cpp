#include "UserLogin.h"
#include "ccmainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

#ifdef Q_OS_OSX
    // On OS X, correct WebView / QtQuick compositing and stacking requires running
    // Qt in layer-backed mode, which again resuires rendering on the Gui thread.
    qWarning("Setting QT_MAC_WANTS_LAYER=1 and QSG_RENDER_LOOP=basic");
    qputenv("QT_MAC_WANTS_LAYER", "1");
    qputenv("QSG_RENDER_LOOP", "basic");
#endif

    QApplication a(argc, argv);
	a.setQuitOnLastWindowClosed(false);
    UserLogin* w = new UserLogin;
	w->show();
	return a.exec();
}
