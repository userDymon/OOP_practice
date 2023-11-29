#include <iostream>
#include <Windows.h>
#include "Car.h"
#include "Transport.h"
#include "Bus.h"
#include "Vector.h"

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
   Vector<Transport*> myTrans;

    for (int i = 0; i < size; i++)
    {
        if (menu() == 1) {
            Car* car = new Car();
            cin >> *car;
            myTrans.push_back(car);
        }
        else
        {
            Bus* bus = new Bus();
            cin >> *bus;
            myTrans.push_back(bus);
        }

        cout << *myTrans[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Price with discount: " << myTrans[i]->priceWithDiscount() << endl;
    }

}