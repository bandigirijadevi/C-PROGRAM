#include <iostream>
using namespace std;
class Rectangle {
public:
    int l, b;
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }
    void area() {
        cout << "Area = " << l * b;
    }
};
int main() {
    Rectangle r1(4, 5);
    r1.area();
    return 0;
}