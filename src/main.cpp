#include "mainwindow.h"
#include <QApplication>
#include "mainwindowthread.h"
#include "cmainscanparking.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CMainScanParking oTh1;
    MainWindowThread oTh2;
    MainWindow w;
    QObject::connect(&oTh1,SIGNAL(MonSignal(const QString &)),&w,SLOT(sltPlaque(QString)));
    oTh2.start();
    w.moveToThread(&oTh2);
    oTh1.start();
    w.showFullScreen();

    return a.exec();
}
