#include "cmainscanparking.h"

CMainScanParking::CMainScanParking()
{

}

void CMainScanParking::run()
{
    QString numPlaque;
    Gachette gachette;
    Camera camera;
    ReconnaissancePlaque reconnaissancePlaque;

    gachette.errorCheck();
    camera.errorCheck();
    reconnaissancePlaque.errorCheck();
    while(1)
    {

        gachette.surveillerGachette(); //Surveillance de la gachette est bloquante
        camera.prendrePhoto();
        numPlaque = QString::fromStdString(reconnaissancePlaque.scanPlaque("/home/pi/imagePlaque.jpg"));

        emit MonSignal(numPlaque); //Envoi du signal avec le numero de plaque
    }

    camera.release();
}

