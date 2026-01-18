#include <iostream>
using namespace std;
class Car {
public:
    int speed;
    Car() {
        speed = 60;
    }
    void show() {
        cout << "Speed: " << speed;
    }
};
int main() {
    Car c1;
    c1.show();
    return 0;
}