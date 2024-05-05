#ifndef CMAINSCANPARKING_H
#define CMAINSCANPARKING_H
#include <QThread>
#include "camera.h"
#include "gachette.h"
#include "reconnaissanceplaque.h"

class CMainScanParking : public QThread
{
    Q_OBJECT

public:
    CMainScanParking();
    void run();


signals:
    void MonSignal(const QString &);
};

#endif // CMAINSCANPARKING_H
