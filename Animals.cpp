#include <iostream>
using namespace std;

class Animal
 {
public:
    void eat()
     {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal
 {
public:
    void bark()
     {
        cout << "Dog barks" << endl;
    }
};

int main()
 {
    Dog d;
    d.eat();   // inherited paramter
    d.bark();  // own function 
    return 0;
}