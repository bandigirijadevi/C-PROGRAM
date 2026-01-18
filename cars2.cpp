#include<iostream>
using namespace std;
class Cars //object
{
public:
string brand;
int price;
int seat;
string model;
Cars (string b,int p,int s,string m) // one constructor
{
    brand = b;
    price = p;
    seat = s;
    model = m;
}
};

int main()
{
     Cars c1("honda",1220000,4,"swift");
cout<<c1.brand<<c1.model<<c1.price<<c1.seat<<endl;
    
    
}