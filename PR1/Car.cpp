#include "Car.h"

int Car::getId() const { return id; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }
int Car::getRegNumber() const { return regNumber; }
int Car::getVinNumber() const { return vinNumber; }
int Car::getPassengerSeats() const { return passenger_seats; }
int Car::getDoors() const { return doors; }

void Car::setId(int id) { this->id = id; }
void Car::setModel(std::string model) { this->model = model; }
void Car::setYear(int year) { this->year = year; }
void Car::setPrice(double price) { this->price = price; }
void Car::setRegNumber(int reg_number) { this->regNumber = reg_number; }
void Car::setVinNumber(int vin_number) { this->vinNumber = vin_number; }
void Car::setPassengerSeats(int passenger_seats) { this->passenger_seats = passenger_seats; }
void Car::setDoors(int doors) { this->doors = doors; }