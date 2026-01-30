#include<iostream>
using namespace std;
class Cricketer
{

    int age;
    int matches;
    int runs;
    float average;
    public:

Cricketer( int age,int matches,int runs,float average)

    
{ this->age=age;
    this->matches=matches;
    this->runs=runs;
    this->average=average;
}
};
int main()
{
    int x=4, y=4;
    cout<<&x<<endl;
    int *P = &x;
    cout<<P<<endl;
    cout<<*P<<endl;
}
