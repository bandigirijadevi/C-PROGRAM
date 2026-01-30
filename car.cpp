#include <iostream>
using namespace std;

class Vehicle
 {
public:
    void fuel()
     {
        cout << "Uses fuel" << endl;
    }
};

class Car : public Vehicle
 {
};

class Bike : public Vehicle
 {
};

int main() 
{
    Car c;
    Bike b;
    c.fuel();
    b.fuel();
    return 0;
}

