#include <iostream>
using namespace std;

class Car
 {
private:
    int speed;

public:
    void setspeed(int s)
     {
        if (s >= 0 && s <= 200)
            speed = s;
    }

    int getspeed()
     {
        return speed;
    }
};

int main()
 {
    Car c;
    c.setspeed(120);
    cout << "Speed: " << c.getspeed() << " km/h";
    return 0;
}