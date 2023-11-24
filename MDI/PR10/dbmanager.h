#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>

#include "Bus.h"
#include "Car.h"

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool insertIntoTable(Car &Car) = 0;
    virtual bool insertIntoTable(Bus &Bus) = 0;
};

#endif // DBMANAGER_H
