#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "bdd.h"
#include <QMainWindow>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString lineTest;



private:
    Ui::MainWindow *ui;
    Bdd m_bdd;


private slots:

    void on_pbValider_clicked();

    void on_pbEffacer_clicked();
    void on_pb1_clicked();
    void on_pb2_clicked();
    void on_pb3_clicked();

    void sltPlaque(QString gotPlaque);
};

#endif // MAINWINDOW_H
