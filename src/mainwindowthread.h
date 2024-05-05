#ifndef MAINWINDOWTHREAD_H
#define MAINWINDOWTHREAD_H
#include <QThread>

class MainWindowThread :public QThread
{
    Q_OBJECT
public:
    MainWindowThread();
    void run(void)
    {
        exec();
    }
};

#endif // MAINWINDOWTHREAD_H
