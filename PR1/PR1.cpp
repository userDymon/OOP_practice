#include <iostream>
#include <Windows.h>
#include "Car.h"
#include "Transport.h"
#include "Bus.h"

using namespace std;


int menu() {
    int input;
    cout << "Об'єкт якого класу створити: 1.Car 2.Bus\n";
    cin >> input;
    return input;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size = 1;
    Transport * transArray[size];

    for (int i = 0; i < size; i++)
    {
        if (menu() == 1) {
            Car* car = new Car();
            cin >> *car;
            transArray[i] = car;
        }
        else
        {
            Bus* bus = new Bus();
            cin >> *bus;
            transArray[i] = bus;
        }

        cout << *transArray[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Price with discount: " << transArray[i]->priceWithDiscount() << endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete transArray[i];
    }
}