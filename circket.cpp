#include<iostream>
using namespace std;
class Cricketer


{
    public:
    string name;
    int age;
    int matches;
    int runs;
    float average;
};
int main()
{
    Cricketer c1;
    c1.name = "Virat Kholi";
    c1.age=34;
    c1.matches=200;
    c1.runs=12000;
    c1.average=60.0;
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Age: "<<c1.age<<endl;
    cout<<"Matches: "<<c1.matches<<endl;
    return 0;
}