#pragma once
#include "Transport.h"
#include <string>

class Car : Transport
{
private:
    int vinNumber;
    int doors;

public:
    Car();
    Car(int, std::string, int, double, int, int, int, int);
    Car(Car&, Transport&);
    ~Car(){}


    int getVinNumber() const;
    int getDoors() const;

    void setVinNumber(int);
    void setDoors(int);

    friend std::istream& operator >>(std::istream&, Car&);
    friend std::ostream& operator <<(std::ostream&, Car&);

    friend bool operator ==(Car&, Car&);
};

