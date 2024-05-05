#include "bdd.h"


Bdd::Bdd()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("scanparking");
    db.setDatabaseName("Scanparking");

    if(db.open())
    {
        qDebug() << "Vous êtes maintenant connecté à BDD";
        db.close();
    }
    else
    {
        qDebug() << "Vous n'avez pas réussi à vous connecter a la" << "BDD";
    }

}


Bdd::~Bdd()
{
}

maStruct Bdd::Select(const QString & str_query)
{
    if(!db.open())
    {
        qDebug() << "not opened";
    }

    QSqlQuery q;
    q.prepare(str_query);
    //q.bindValue(":valeur", m_linePlaque );
    q.exec(str_query);
    q.next();

    if (q.value(2).toString() == ""){
    qDebug() << str_query << "rien du tout";}

    maStruct l_Struct;
    l_Struct.plaque = q.value(1).toString();
    l_Struct.badge = q.value(2).toString();
    l_Struct.parking = q.value(3).toString();
    l_Struct.numero = q.value(4).toString();
    return l_Struct;

}

void Bdd::setter(QString plaque, QString badge, QString parking)
{
    m_linePlaque = plaque;
    m_lineBadge = badge;
    m_lineParking = parking;

}
