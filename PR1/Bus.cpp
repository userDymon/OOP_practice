#include "Bus.h"

Bus::Bus()
{
    this->id = 0;
    this->model = "none";
    this->year_of_manufacture = 0;
    this->price = 0;
    this->registration_number = 0;
    this->number_of_seats = 0;
    this->has_disabled_seats = false;
}

Bus::Bus(int id, std::string model, int year_of_manufacture, double price, int registration_number, int number_of_seats, bool has_disabled_seats) {
    this->id = id;
    this->model = model;
    this->year_of_manufacture = year_of_manufacture;
    this->price = price;
    this->registration_number = registration_number;
    this->number_of_seats = number_of_seats;
    this->has_disabled_seats = has_disabled_seats;
}

Bus::Bus(const Bus& bus) {
    id = bus.id;
    model = bus.model;
    year_of_manufacture = bus.year_of_manufacture;
    price = bus.price;
    registration_number = bus.registration_number;
    number_of_seats = bus.number_of_seats;
    has_disabled_seats = bus.has_disabled_seats;
}

int Bus::getID() {
    return id;
}

void Bus::setID(int id) {
    this->id = id;
}

std::string Bus::getModel() {
    return model;
}

void Bus::setModel(std::string model) {
    this->model = model;
}

int Bus::getYearOfManufacture() {
    return year_of_manufacture;
}

void Bus::setYearOfManufacture(int year_of_manufacture) {
    this->year_of_manufacture = year_of_manufacture;
}

double Bus::getPrice() {
    return price;
}

void Bus::setPrice(double price) {
    this->price = price;
}

int Bus::getRegistrationNumber() {
    return registration_number;
}

void Bus::setRegistrationNumber(int registration_number) {
    this->registration_number = registration_number;
}

int Bus::getNumberOfSeats() {
    return number_of_seats;
}

void Bus::setNumberOfSeats(int number_of_seats) {
    this->number_of_seats = number_of_seats;
}

bool Bus::getHasDisabledSeats() {
    return has_disabled_seats;
}

void Bus::setHasDisabledSeats(bool has_disabled_seats) {
    this->has_disabled_seats = has_disabled_seats;
}
