#ifndef LACZEDOBAZYDANYCH_H
#define LACZEDOBAZYDANYCH_H

#include <QSqlDatabase>
#include <QObject>
#include "klient.h"
#include "kierowca.h"
#include "samochod.h"

class laczeDoBazyDanych : QObject
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
    bool check = true;
public:
    laczeDoBazyDanych(QObject *parent=0);
    laczeDoBazyDanych(std::string host, std::string name, std::string user, std::string passwd, int port, QObject *parent=0);
    bool connect(std::string host, std::string name, std::string user, std::string passwd, int port);
    QSqlDatabase getdb(){
        return db;
    }

    void init(std::string host, std::string name, std::string user, std::string passwd, int port);
    bool getcheck();


signals:
    void UtraconoPolaczenie();

};

#endif // LACZEDOBAZYDANYCH_H
