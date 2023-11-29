#include <iostream>
#include <Windows.h>
#include <random>
#include <time.h>
#include <vector>
#include <algorithm>
#include <typeinfo>

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
   
    srand(time(0));

    vector<int> firstVector;
    vector<int> secondVector;

    for (int i = 0; firstVector.size() < 10; i++)
    {
        int Random = rand() % 100;
        if (Random % 2 == 1)
            firstVector.push_back(Random);
    }

    for (int i = 0; secondVector.size() < 10; i++)
    {
        int Random = rand() % 100;
        if (Random % 2 == 0)
            secondVector.push_back(Random);
    }


    sort(firstVector.begin(), firstVector.end());
    sort(secondVector.begin(), secondVector.end());

    vector<int> thirdVector(firstVector.size() + secondVector.size());
    merge(firstVector.begin(), firstVector.end(), secondVector.begin(), secondVector.end(), thirdVector.begin());

    cout << "Перший вектор:" << endl;

    for (int i = 0; i < firstVector.size(); i++)
    {
        cout << firstVector[i] << endl;
    }

    cout << "Другий вектор:" << endl;

    for (int i = 0; i < secondVector.size(); i++)
    {
        cout << secondVector[i] << endl;
    }

    cout << "Третій вектор:" << endl;

    for (int i = 0; i < thirdVector.size(); i++)
    {
        cout << thirdVector[i] << endl;
    }

    //4 завдання:

   vector<Transport*> transportVector;

    int choice;
    do {
        std::cout << "1. Add Car\n";
        std::cout << "2. Add Bus\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            Car *car = new Car();
            cin >> *car;
            transportVector.push_back(car);
            break;
        }
        case 2: {
            Bus *bus = new Bus();
            cin >> *bus; 
            transportVector.push_back(bus);
            break;
        }
        case 0:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 0);

    //5 завдання:

    vector<Transport*> newTransportVector(transportVector.begin(), transportVector.end());

    transportVector.erase(std::remove_if(transportVector.begin(), transportVector.end(),
        [](const Transport* transport) { return dynamic_cast<const Car*>(transport) != nullptr; }),
        transportVector.end());

    newTransportVector.erase(std::remove_if(newTransportVector.begin(), newTransportVector.end(),
        [](const Transport* transport) { return dynamic_cast<const Bus*>(transport) != nullptr; }),
        newTransportVector.end());

    cout << "\nContents of the first vector after removing Car objects:\n";
    for (const auto& transport : transportVector) {
        cout << *transport << endl;
    }

    cout << "\nContents of the second vector after removing Bus objects:\n";
    for (const auto& transport : newTransportVector) {
       cout << *transport << endl;
    }
}