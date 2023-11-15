#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    Car object1, object2, object3;
    cin >> object1 >> object2 >> object3;
    cout << object1 << endl << object2 << endl << object3;

    cout << (object1 == object2);
}