#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rno;
    float cgp;
};
int main()
{
    Student s1;
    s1.name = "Raghav";
    s1.rno = 56;
    s1.cgp = 7.8;
    cout <<s1.name<<s1.cgp<<s1.rno;
}