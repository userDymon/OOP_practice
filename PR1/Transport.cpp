#include "Transport.h"

int Transport::identic = 0;

Transport::Transport()
{
    this->id = identic++;
    this->model = "none";
    this->year = 0;
    this->price = 0;
    this->registrationNumber = 0;
    this->seatsCount = 0;
}

Transport::Transport(std::string model, int year, double price, int registrationNumber, int seatsCount) {
    this->id = identic++;
    this->model = model;
    this->year = year;
    this->price = price;
    this->registrationNumber = registrationNumber;
    this->seatsCount = seatsCount;
}

Transport::Transport(Transport& other)
{
    this->id = other.id;
    this->model = other.model;
    this->year = other.year;
    this->price = other.price;
    this->registrationNumber = other.registrationNumber;
}

int Transport::getID() {
    return id;
}

std::string Transport::getModel() {
    return model;
}

int Transport::getYear() {
    return year;
}

double Transport::getPrice() {
    return price;
}

int Transport::getRegistrationNumber() {
    return registrationNumber;
}

int Transport::getSeatsCount()
{
    return seatsCount;
}

void Transport::setModel(std::string model) {
    this->model = model;
}

void Transport::setYear(int year) {
    this->year = year;
}

void Transport::setPrice(double price) {
    this->price = price;
}

void Transport::setRegistrationNumber(int registrationNumber) {
    this->registrationNumber = registrationNumber;
}

void Transport::setSeatsCount(int seatsCount)
{
    this->seatsCount = seatsCount;
}

std::istream& operator>>(std::istream& in, Transport& transport) {
    std::string model;
    int year;
    double price;
    int regNumber;
    int vinNumber;
    int passengerSeats;
    int doors;

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

    transport.setModel(model);
    transport.setYear(year);
    transport.setPrice(price);
    transport.setRegistrationNumber(regNumber);
    transport.setSeatsCount(passengerSeats);

    return in;
}

 std::ostream& operator<<(std::ostream& out, Transport& transport) {
    out << "Car id: " << transport.getID() << "\n";
    out << "Car model: " << transport.getModel() << "\n";
    out << "Car year: " << transport.getYear() << "\n";
    out << "Car price: " << transport.getPrice() << "\n";
    out << "Car registration number: " << transport.getRegistrationNumber() << "\n";
    out << "Number of passenger seats: " << transport.getSeatsCount() << "\n";
    return out;
}
