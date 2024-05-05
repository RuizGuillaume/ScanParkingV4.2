/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lePlaque;
    QLineEdit *leBadge;
    QLineEdit *leParking;
    QLabel *labelbadge;
    QLabel *label_3;
    QPushButton *pbEffacer;
    QPushButton *pbEnvoyersms;
    QPushButton *pbValider;
    QLineEdit *leMessages;
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(7);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 361, 41));
        label->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        lePlaque = new QLineEdit(centralWidget);
        lePlaque->setObjectName(QStringLiteral("lePlaque"));
        lePlaque->setGeometry(QRect(20, 60, 381, 51));
        lePlaque->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        leBadge = new QLineEdit(centralWidget);
        leBadge->setObjectName(QStringLiteral("leBadge"));
        leBadge->setGeometry(QRect(20, 210, 381, 51));
        leBadge->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        leParking = new QLineEdit(centralWidget);
        leParking->setObjectName(QStringLiteral("leParking"));
        leParking->setEnabled(false);
        leParking->setGeometry(QRect(20, 350, 381, 51));
        leParking->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        labelbadge = new QLabel(centralWidget);
        labelbadge->setObjectName(QStringLiteral("labelbadge"));
        labelbadge->setGeometry(QRect(20, 160, 131, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(8);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(labelbadge->sizePolicy().hasHeightForWidth());
        labelbadge->setSizePolicy(sizePolicy1);
        labelbadge->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 310, 191, 31));
        label_3->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        pbEffacer = new QPushButton(centralWidget);
        pbEffacer->setObjectName(QStringLiteral("pbEffacer"));
        pbEffacer->setGeometry(QRect(430, 10, 171, 61));
        pbEffacer->setStyleSheet(QLatin1String("font: 18pt \"DejaVu Math TeX Gyre\";\n"
"background-color: rgb(190, 0, 0)"));
        pbEnvoyersms = new QPushButton(centralWidget);
        pbEnvoyersms->setObjectName(QStringLiteral("pbEnvoyersms"));
        pbEnvoyersms->setGeometry(QRect(620, 10, 171, 61));
        pbEnvoyersms->setStyleSheet(QLatin1String("font: 18pt \"DejaVu Math TeX Gyre\";\n"
"background-color: rgb(52, 101, 164);\n"
""));
        pbValider = new QPushButton(centralWidget);
        pbValider->setObjectName(QStringLiteral("pbValider"));
        pbValider->setGeometry(QRect(430, 338, 361, 61));
        pbValider->setStyleSheet(QLatin1String("font: 24pt \"DejaVu Math TeX Gyre\";\n"
"background-color: rgb(115, 210, 22);"));
        leMessages = new QLineEdit(centralWidget);
        leMessages->setObjectName(QStringLiteral("leMessages"));
        leMessages->setEnabled(false);
        leMessages->setGeometry(QRect(440, 90, 341, 231));
        leMessages->setStyleSheet(QStringLiteral("font: 20pt \"DejaVu Math TeX Gyre\";"));
        pb1 = new QPushButton(centralWidget);
        pb1->setObjectName(QStringLiteral("pb1"));
        pb1->setGeometry(QRect(520, 320, 21, 21));
        pb1->setStyleSheet(QStringLiteral("background-color : rgb(117, 80, 123)"));
        pb2 = new QPushButton(centralWidget);
        pb2->setObjectName(QStringLiteral("pb2"));
        pb2->setGeometry(QRect(600, 320, 21, 21));
        pb2->setStyleSheet(QStringLiteral("background-color : rgb(117, 80, 123)"));
        pb3 = new QPushButton(centralWidget);
        pb3->setObjectName(QStringLiteral("pb3"));
        pb3->setGeometry(QRect(680, 320, 21, 21));
        pb3->setStyleSheet(QStringLiteral("background-color : rgb(117, 80, 123)"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Plaque d'immatriculation", Q_NULLPTR));
        labelbadge->setText(QApplication::translate("MainWindow", "Badge", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Parking", Q_NULLPTR));
        pbEffacer->setText(QApplication::translate("MainWindow", "Effacer", Q_NULLPTR));
        pbEnvoyersms->setText(QApplication::translate("MainWindow", "Envoyer SMS", Q_NULLPTR));
        pbValider->setText(QApplication::translate("MainWindow", "Valider", Q_NULLPTR));
        pb1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pb2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pb3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
