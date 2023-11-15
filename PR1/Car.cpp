#include "Car.h"

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