#include "laczedobazydanych.h"
#include <iostream>

laczeDoBazyDanych::laczeDoBazyDanych(QObject *parent) : QObject(parent) {}

laczeDoBazyDanych::laczeDoBazyDanych(std::string host, std::string name, std::string user, std::string passwd, int port, QObject *parent) :
    QObject(parent)
{
    if(connect(host, name, user, passwd, port))
        std::cout<<"Otwarto baze"<<std::endl;
    else{
        std::cout<<"Nie udalo sie otworzyc bazy"<<std::endl;
        check = false;
    }
}

bool laczeDoBazyDanych::getcheck() {
    return check;
}

bool laczeDoBazyDanych::connect(std::string host, std::string name, std::string user, std::string passwd, int port){
    db.setConnectOptions();
    db.setPort(port);
    db.setHostName(QString::fromStdString(host));
    db.setDatabaseName(QString::fromStdString(name));
    db.setUserName(QString::fromStdString(user));
    db.setPassword(QString::fromStdString(passwd));
    return this->db.open();
}

void laczeDoBazyDanych::init(std::string host, std::string name, std::string user, std::string passwd, int port){
    if(connect(host, name, user, passwd, port))
        std::cout<<"Otwarto baze"<<std::endl;
    else{
        std::cout<<"Nie udalo sie otworzyc bazy"<<std::endl;
        check = false;
    }
}
