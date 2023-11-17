#include "Car.h"
#include <iostream>

Car::Car() : Transport() {
    vinNumber = 0;
    doors = 0;
}

Car::Car(int id, std::string model, int year, double price, int regNumber, int vinNumber, int passengerSeats, int doors) : 
    Transport(id, model, year, price, regNumber, passengerSeats) {
    this->vinNumber = vinNumber;
    this->doors = doors;
}

Car::Car(Car& other, Transport& other2) :
    Transport(other2){
    this->vinNumber = other.vinNumber;
    this->doors = other.doors;
}

int Car::getVinNumber() const { return vinNumber; }
int Car::getDoors() const { return doors; }

void Car::setVinNumber(int vin_number) { this->vinNumber = vin_number; }
void Car::setDoors(int doors) { this->doors = doors; }

std::istream& operator>>(std::istream& in, Car& car) {
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

    car.setID(id);
    car.setModel(model);
    car.setYear(year);
    car.setPrice(price);
    car.setRegistrationNumber(regNumber);
    car.setVinNumber(vinNumber);
    car.setSeatsCount(passengerSeats);
    car.setDoors(doors);

    return in;
}

std::ostream& operator<<(std::ostream& out, Car& car) {
    out << "Car id: " << car.getID() << "\n";
    out << "Car model: " << car.getModel() << "\n";
    out << "Car year: " << car.getYear() << "\n";
    out << "Car price: " << car.getPrice() << "\n";
    out << "Car registration number: " << car.getRegistrationNumber() << "\n";
    out << "Car VIN number: " << car.getVinNumber() << "\n";
    out << "Number of passenger seats: " << car.getSeatsCount() << "\n";
    out << "Number of doors: " << car.getDoors() << "\n";
    return out;
}

bool operator ==(Car& car1, Car& car2) {
    return car1.getID() == car2.getID() &&
        car1.getModel() == car2.getModel() &&
        car1.getYear() == car2.getYear() &&
        car1.getPrice() == car2.getPrice() &&
        car1.getRegistrationNumber() == car2.getRegistrationNumber() &&
        car1.getVinNumber() == car2.getVinNumber() &&
        car1.getSeatsCount() == car2.getSeatsCount() &&
        car1.getDoors() == car2.getDoors();
}