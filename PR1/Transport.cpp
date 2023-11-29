#include "Transport.h"

Transport::Transport()
{
    this->id = 0;
    this->model = "none";
    this->year = 0;
    this->price = 0;
    this->registrationNumber = 0;
    this->seatsCount = 0;
}

Transport::Transport(int id, std::string model, int year, double price, int registrationNumber, int seatsCount) {
    this->id = id;
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

void Transport::setID(int id) {
    this->id = id;
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
