#include "Bus.h"
#include <iostream>

Bus::Bus() : Transport()
{
    this->hasDisabledSeats = false;
}

Bus::Bus(int id, std::string model, int year, double price, int registrationNumber, int seatsCount, bool has_disabled_seats) : 
    Transport(id, model, year, price, registrationNumber, seatsCount) {
    this->hasDisabledSeats = has_disabled_seats;
}

Bus::Bus(Bus& bus, Transport& other) : Transport(other) {
    this->hasDisabledSeats = bus.hasDisabledSeats;
}

bool Bus::getHasDisabledSeats() {
    return hasDisabledSeats;
}

void Bus::setHasDisabledSeats(bool hasDisabledSeats) {
    this->hasDisabledSeats = hasDisabledSeats;
}

double Bus::priceWithDiscount()
{
    return (price * 0.95);
}

std::istream& operator >>(std::istream& in, Bus& bus)
{
    int id;
    std::string model;
    int year;
    double price;
    int regNumber;
    int vinNumber;
    int passengerSeats;
    int doors;
    bool hasDisabledSeats;

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
    std::cout << "Enter number of passenger seats: ";
    in >> passengerSeats;
    std::cout << "Enter if has didabled seats: ";
    in >> hasDisabledSeats;

    bus.setID(id);
    bus.setModel(model);
    bus.setYear(year);
    bus.setPrice(price);
    bus.setRegistrationNumber(regNumber);
    bus.setSeatsCount(passengerSeats);
    bus.setHasDisabledSeats(hasDisabledSeats);

    return in;
}


std::ostream& operator <<(std::ostream& out, Bus& bus)
{
    out << "Car id: " << bus.getID() << "\n";
    out << "Car model: " << bus.getModel() << "\n";
    out << "Car year: " << bus.getYear() << "\n";
    out << "Car price: " << bus.getPrice() << "\n";
    out << "Car registration number: " << bus.getRegistrationNumber() << "\n";
    out << "Number of passenger seats: " << bus.getSeatsCount() << "\n";
    out << "Has disabled seats: " << bus.getHasDisabledSeats() << "\n";
    return out;
}
