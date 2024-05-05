#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->lePlaque->setText("AA123AA");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sltPlaque(QString gotPlaque)
{
    ui->lePlaque->clear();
    ui->leBadge->clear();
    ui->leParking->clear();
    ui->leMessages->clear();
    ui->lePlaque->setText(gotPlaque);
    on_pbValider_clicked();
}

void MainWindow::on_pbValider_clicked()
{

    m_bdd.setter(ui->lePlaque->text(), ui->leBadge->text(), ui->leParking->text());

 if (ui->lePlaque->text().size() != 0 && ui->leBadge->text().size() == 0){
        maStruct Struct2 = m_bdd.Select("SELECT * from Scanparking WHERE Plaques='" + ui->lePlaque->text() + "'");
        ui->leBadge->setText(Struct2.badge);
        ui->leParking->setText(Struct2.parking);
        if(Struct2.badge != ""){ui->leMessages->setText("Plaque valide");}
        else{
            ui->leMessages->setText("Plaque non valide");
            m_bdd.Select("INSERT INTO Intrus(Plaques, Parking) VALUES('" + ui->lePlaque->text() + "','1')");
        }

    }

 else if (ui->leBadge->text().size() != 0 && ui->lePlaque->text().size() == 0){
        maStruct Struct2 = m_bdd.Select("SELECT * from Scanparking WHERE Badges='" + ui->leBadge->text() + "'");
        ui->lePlaque->setText(Struct2.plaque);
        ui->leParking->setText(Struct2.parking);
        if(Struct2.plaque != ""){ui->leMessages->setText("Badge valide");}
        else{ui->leMessages->setText("Badge non valide");}
    }
 else if (ui->leParking->text() == ""){
        ui->leMessages->setText("Plaque inexistante");}

}

void MainWindow::on_pbEffacer_clicked()
{
    ui->lePlaque->clear();
    ui->leBadge->clear();
    ui->leParking->clear();
    ui->leMessages->clear();
}

void MainWindow::on_pb1_clicked()
{
    ui->lePlaque->clear();
    ui->leBadge->clear();
    ui->leParking->clear();
    ui->leMessages->clear();
    ui->lePlaque->setText("AA123AA");
}

void MainWindow::on_pb2_clicked()
{
    ui->lePlaque->clear();
    ui->leBadge->clear();
    ui->leParking->clear();
    ui->leMessages->clear();
    ui->lePlaque->setText("EE456EE");
}

void MainWindow::on_pb3_clicked()
{
    ui->lePlaque->clear();
    ui->leBadge->clear();
    ui->leParking->clear();
    ui->leMessages->clear();
    ui->lePlaque->setText("II789II");
}
