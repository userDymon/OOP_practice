#pragma once
#include <string>
class Bus
{
private:
    int id;
    std::string model;
    int year_of_manufacture;
    double price;
    int registration_number;
    int number_of_seats;
    bool has_disabled_seats;
public:
    Bus();
    Bus(int id, std::string model, int year_of_manufacture, double price, int registration_number, int number_of_seats, bool has_disabled_seats);
    Bus(const Bus& bus);
    int getID();
    void setID(int id);
    std::string getModel();
    void setModel(std::string model);
    int getYearOfManufacture();
    void setYearOfManufacture(int year_of_manufacture);
    double getPrice();
    void setPrice(double price);
    int getRegistrationNumber();
    void setRegistrationNumber(int registration_number);
    int getNumberOfSeats();
    void setNumberOfSeats(int number_of_seats);
    bool getHasDisabledSeats();
    void setHasDisabledSeats(bool has_disabled_seats);
};

