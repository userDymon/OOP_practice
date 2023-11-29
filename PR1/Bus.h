#pragma once
#include "Transport.h"
#include <string>
class Bus : public Transport
{
private:
    bool hasDisabledSeats;
public:
    Bus();
    Bus(std::string, int, double, int, int, bool);
    Bus(Bus&, Transport&);

    bool getHasDisabledSeats();
    void setHasDisabledSeats(bool hasDisabledSeats);

    double priceWithDiscount() override;

    friend std::istream& operator >>(std::istream&, Bus&);
    friend std::ostream& operator <<(std::ostream&, Bus&);
};

