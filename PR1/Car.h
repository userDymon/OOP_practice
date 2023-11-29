#pragma once
#include "Transport.h"
#include <string>

class Car : public Transport
{
private:
    int vinNumber;
    int doors;

public:
    Car();
    Car(std::string, int, double, int, int, int, int);
    Car(Car&, Transport&);
    ~Car(){}


    int getVinNumber() const;
    int getDoors() const;

    void setVinNumber(int);
    void setDoors(int);

    double priceWithDiscount() override;

    friend std::istream& operator >>(std::istream&, Car&);
    friend std::ostream& operator <<(std::ostream&, Car&);

    friend bool operator ==(Car&, Car&);
};

