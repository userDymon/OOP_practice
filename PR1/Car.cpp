#include "Car.h"
#include <iostream>

Car::Car() :
    id(0), model("none"), year(0), price(0), regNumber(0), vinNumber(0), passengerSeats(0), doors(0) {}

Car::Car(int id, std::string model, int year, double price, int reg_number, int vin_number, int passenger_seats, int doors) :
    id(id), model(model), year(year), price(price), regNumber(reg_number), vinNumber(vin_number), passengerSeats(passenger_seats), doors(doors) {}

Car::Car(Car &other) :
    id(other.id), model(other.model), year(other.year), price(other.price), regNumber(other.regNumber), vinNumber(other.vinNumber), passengerSeats(other.passengerSeats), doors(other.doors) {}

int Car::getId() const { return id; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }
int Car::getRegNumber() const { return regNumber; }
int Car::getVinNumber() const { return vinNumber; }
int Car::getPassengerSeats() const { return passengerSeats; }
int Car::getDoors() const { return doors; }

void Car::setId(int id) { this->id = id; }
void Car::setModel(std::string model) { this->model = model; }
void Car::setYear(int year) { this->year = year; }
void Car::setPrice(double price) { this->price = price; }
void Car::setRegNumber(int reg_number) { this->regNumber = reg_number; }
void Car::setVinNumber(int vin_number) { this->vinNumber = vin_number; }
void Car::setPassengerSeats(int passenger_seats) { this->passengerSeats = passenger_seats; }
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

    car.setId(id);
    car.setModel(model);
    car.setYear(year);
    car.setPrice(price);
    car.setRegNumber(regNumber);
    car.setVinNumber(vinNumber);
    car.setPassengerSeats(passengerSeats);
    car.setDoors(doors);

    return in;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car id: " << car.getId() << "\n";
    out << "Car model: " << car.getModel() << "\n";
    out << "Car year: " << car.getYear() << "\n";
    out << "Car price: " << car.getPrice() << "\n";
    out << "Car registration number: " << car.getRegNumber() << "\n";
    out << "Car VIN number: " << car.getVinNumber() << "\n";
    out << "Number of passenger seats: " << car.getPassengerSeats() << "\n";
    out << "Number of doors: " << car.getDoors() << "\n";
    return out;
}