#ifndef BDD_H
#define BDD_H
#include <QMessageBox>
#include <QSqlError>
#include <QSqlTableModel>
#include <QtSql>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlDatabase>



struct maStruct{
    QString plaque;
    QString badge;
    QString parking;
    QString numero;
};

class Bdd : public QObject
{
    Q_OBJECT

public:
    Bdd();
    ~Bdd();

    maStruct Select(const QString & str_query);
    void setter(QString plaque, QString badge, QString parking);

private:
    QSqlDatabase db;
    QString m_linePlaque;
    QString m_lineBadge;
    QString m_lineParking;

};


#endif // BDD_H
