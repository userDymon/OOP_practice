#pragma once
#include <string>
class Transport
{
public:
    Transport();
    Transport(int, std::string, int, double, int, int );
    Transport(Transport&);
    int getID();
    std::string getModel();
    int getYear();
    double getPrice();
    int getRegistrationNumber();
    int getSeatsCount();

    void setID(int);
    void setModel(std::string);
    void setYear(int);
    void setPrice(double);
    void setRegistrationNumber(int);
    void setSeatsCount(int);

    virtual double priceWithDiscount() = 0;

protected:
    int id;
    std::string model;
    int year;
    double price;
    int registrationNumber;
    int seatsCount;
};

