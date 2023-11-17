#pragma once
#include "Transport.h"
#include <string>
class Bus : Transport
{
private:
    bool hasDisabledSeats;
public:
    Bus();
    Bus(int, std::string, int, double, int, int, bool);
    Bus(Bus&, Transport&);

    bool getHasDisabledSeats();
    void setHasDisabledSeats(bool hasDisabledSeats);
};

