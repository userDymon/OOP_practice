#pragma once
#include <iostream>
#include <string>
class Transport
{
public:
    Transport();
    Transport(std::string, int, double, int, int );
    Transport(Transport&);
    int getID();
    std::string getModel();
    int getYear();
    double getPrice();
    int getRegistrationNumber();
    int getSeatsCount();

    void setModel(std::string);
    void setYear(int);
    void setPrice(double);
    void setRegistrationNumber(int);
    void setSeatsCount(int);

    virtual double priceWithDiscount() = 0;

    friend std::istream& operator>>(std::istream& in, Transport& transport);

    friend std::ostream& operator<<(std::ostream& out, Transport& transport);

private:
    static int identic;

protected:
    int id;
    std::string model;
    int year;
    double price;
    int registrationNumber;
    int seatsCount;
};

