#include<iostream>
using namespace std;
class Cars
{
public:
string brand;
int price;
int seat;
string model;
};
void print(Cars c2){
cout<<c2.brand<<" "<<c2.model<<" "<<c2.price<<" "<<endl;
}
int main()
{
    Cars c1;
    c1.brand = "Maruti";
    c1.price = 1200000;
    c1.seat = 5;
    
    
    Cars c2;
    c2.brand = "Tata Motors";
    c2.model = "tigor";
    c2.seat = 7;
    c2.price = 1230000;
    cout<< c1.price<<" "<<c1.brand<<" "<<endl;
    print(c2);
}