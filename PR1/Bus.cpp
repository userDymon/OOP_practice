#include "Bus.h"

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
