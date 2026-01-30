#include<iostream>
using namespace std;

class Rectangle {  //using multiple constructor
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }           //creating a function int area to calculate the area of rectangle
    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r(5, 4);
    cout << "Area: " << r.area();
    return 0;
}