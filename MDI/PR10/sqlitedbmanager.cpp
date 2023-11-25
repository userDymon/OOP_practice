#include "sqlitedbmanager.h"

#include <QDate>
#include <QDebug>
#include <QFile>
#include <QObject>
#include <QSqlError>
#include <QSqlQuery>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOST_NAME);
    db.setDatabaseName(DATABASE_FILE_NAME);
}

SqliteDBManager *SqliteDBManager::getInstance()
{
    if (instance == nullptr) {
        instance = new SqliteDBManager();
    }
    return instance;
}

void SqliteDBManager::connectToDataBase()
{
    if (QFile(DATABASE_FILE_NAME).exists()) {
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

bool SqliteDBManager::openDataBase()
{
    if (db.open()) {
        return true;
    } else
        return false;
}
bool SqliteDBManager::restoreDataBase()
{
    if (this->openDataBase()) {
        if (!this->createTables()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}
void SqliteDBManager::closeDataBase()
{
    db.close();
}
bool SqliteDBManager::createTables()
{
    QSqlQuery query;
    if (!query.exec("\
            CREATE TABLE cars(\
            id INTEGER PRIMARY KEY AUTOINCREMENT,\
            model VARCHAR(255) NOT NULL,\
            year INTEGER NOT NULL,\
            price DOUBLE NOT NULL,\
            registrationNumber INTEGER NOT NULL,\
            vinNumber INTEGER NOT NULL,\
            seatsCount INTEGER NOT NULL,\
            doorCount INTEGER NOT NULL\
        )\
    ")) {
        qDebug() << "DataBase: error of create cars";
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("\
            CREATE TABLE buses(\
                id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,\
                model VARCHAR(255) NOT NULL,\
                year INTEGER NOT NULL,\
                price DOUBLE NOT NULL,\
                registrationNumber INTEGER NOT NULL,\
                seatsCount INTEGER NOT NULL,\
                hasDisabledSeats BOOL\ 
            )\
    ")) {
        qDebug() << "DataBase: error of create cars";
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
}

bool SqliteDBManager::insertIntoTable(Car &car)
{
    QSqlQuery query;

    query.prepare(
        "INSERT INTO cars(model, year, price, registrationNumber, vinNumber, seatsCount, doorCount)\
                   VALUES(:model, :year, :price, :registrationNumber, :vinNumber, :seatsCount, :doorCount)");
    query.bindValue(":model", QString::fromStdString(car.getModel()));
    query.bindValue(":year", car.getYear());
    query.bindValue(":price", car.getPrice());
    query.bindValue(":registrationNumber", car.getRegistrationNumber());
    query.bindValue(":vinNumber", car.getVinNumber());
    query.bindValue(":seatsCount", car.getSeatsCount());
    query.bindValue(":doorCount", car.getDoors());

    if (!query.exec()) {
        qDebug() << "error insert into cars";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}
bool SqliteDBManager::insertIntoTable(Bus &bus)
{
    QSqlQuery query;

    query.prepare(
        "INSERT INTO buses(model, year, price, registrationNumber, seatsCount, hasDisabledSeats)\
        VALUES(:model, :year, :price, :registrationNumber, :seatsCount, :hasDisabledSeats)");
    query.bindValue(":model", QString::fromStdString(bus.getModel()));
    query.bindValue(":year", bus.getYear());
    query.bindValue(":price", bus.getPrice());
    query.bindValue(":registrationNumber", bus.getRegistrationNumber());
    query.bindValue(":seatsCount", bus.getSeatsCount());
    query.bindValue(":hasDisabledSeats", bus.getHasDisabledSeats());

    if (!query.exec()) {
        qDebug() << "error insert into buses";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}
