#include <iostream>
using namespace std;

class Employee 
{
public:
    int salary = 30000;
};

class Manager : public Employee
 {
public:
    int bonus = 5000;
};

int main() 
{
    Manager m;
    cout << "Salary: " << m.salary << endl;
    cout << "Bonus: " << m.bonus << endl;
    return 0;
}