#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QSqlDatabase>

#include "Bus.h"
#include "Car.h"
#include "dbmanager.h"

#define DATABASE_HOST_NAME "ExampleDataBase"
#define DATABASE_FILE_NAME "DataBase.sqlite"

class SqliteDBManager : public DBManager
{
public:
    static SqliteDBManager *getInstance();

    void connectToDataBase() override;
    QSqlDatabase getDB() override;
    bool insertIntoTable(Car &car) override;
    bool insertIntoTable(Bus &bus) override;

private:
    QSqlDatabase db;

    static SqliteDBManager *instance;

    SqliteDBManager();

    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};

#endif // SQLITEDBMANAGER_H
