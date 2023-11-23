#pragma once
#include <iostream>
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

    friend std::istream& operator>>(std::istream& in, Transport& transport) {
        int id;
        std::string model;
        int year;
        double price;
        int regNumber;
        int vinNumber;
        int passengerSeats;
        int doors;

        std::cout << "Enter car id: ";
        in >> id;
        std::cout << "Enter car model: ";
        in.ignore();
        getline(in, model);
        std::cout << "Enter car year: ";
        in >> year;
        std::cout << "Enter car price: ";
        in >> price;
        std::cout << "Enter car registration number: ";
        in >> regNumber;
        std::cout << "Enter car VIN number: ";
        in >> vinNumber;
        std::cout << "Enter number of passenger seats: ";
        in >> passengerSeats;
        std::cout << "Enter number of doors: ";
        in >> doors;

        transport.setID(id);
        transport.setModel(model);
        transport.setYear(year);
        transport.setPrice(price);
        transport.setRegistrationNumber(regNumber);
        transport.setSeatsCount(passengerSeats);

        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, Transport& transport) {
        out << "Car id: " << transport.getID() << "\n";
        out << "Car model: " << transport.getModel() << "\n";
        out << "Car year: " << transport.getYear() << "\n";
        out << "Car price: " << transport.getPrice() << "\n";
        out << "Car registration number: " << transport.getRegistrationNumber() << "\n";
        out << "Number of passenger seats: " << transport.getSeatsCount() << "\n";
        return out;
    }

protected:
    int id;
    std::string model;
    int year;
    double price;
    int registrationNumber;
    int seatsCount;
};

