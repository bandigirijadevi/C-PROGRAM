#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rno;
    float cgp;
    Student(){ // Default Constructor

    }
    Student(string s,int r,float g) // parmeterised constructor
    {
 name = s;
 rno = r;
 cgp = g;
    }

};
int main()
{
    Student s2("Ram",45,8.9);
    Student s1;
    s1.name = "Raghav";
    s1.rno = 56;
    s1.cgp = 7.8;
    cout <<s1.name<<s1.cgp<<s1.rno;
    cout<<s2.name<<s2.cgp<<s2.rno;
}