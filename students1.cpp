#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rno;
    float cgp;

    //constructor = function name = class
    Student(string s,int r,float g)
    {
name = s;
rno = r;
cgp = g;
    }
};
int main()
{
   // Student s1;
//s1.name = "Raghav";
 //   s1.rno = 56;
 //   s1.cgp = 7.8;
 Student s1("Raghav",56,9.0);
    cout <<s1.name<<s1.rno<<s1.cgp<<endl;
}