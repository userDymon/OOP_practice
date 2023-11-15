#pragma once

#include <string>

class Car
{
private:
    int id;
    std::string model;
    int year;
    double price;
    int regNumber;
    int vinNumber;
    int passengerSeats;
    int doors;
public:
    Car();
    Car(int, std::string, int, double, int, int, int, int);
    Car(Car&);
    ~Car(){}

    int getId() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    int getRegNumber() const;
    int getVinNumber() const;
    int getPassengerSeats() const;
    int getDoors() const;

    void setId(int);
    void setModel(std::string);
    void setYear(int);
    void setPrice(double);
    void setRegNumber(int);
    void setVinNumber(int);
    void setPassengerSeats(int);
    void setDoors(int);
};

