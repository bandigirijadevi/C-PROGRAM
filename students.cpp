#include <iostream>
using namespace std;

class Person
 {
public:
    int age;
    void setAge(int a) {
        age = a;
    }
};

class Student : public Person 
{
public:
    void display() {
        cout << "Age: " << age << endl;
    }
};

int main()
 {
    Student s;
    s.setAge(20);
    s.display();
    return 0;
}