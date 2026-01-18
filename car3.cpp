#include<iostream>
using namespace std;
class Cars //object
{
public:
string brand;
int price;
int seat;
string model;
Cars c1(string b,string m,int s,int p)
{
    brand = b;
    model = m;
    seat = s;
    price =p;

}
Cars c2(string b,string m,int s,int p)
{
   brand = b;
    model = m;
    seat = s;
    price =p;
}
};
int main()
{
    Cars c1("Maruti","xyz",6,1000000);
    Cars c2("Tata Motors","Tigor",7,10000000);
    
    cout<< c1.price<<" "<<c1.brand<<" "<<endl;
    cout<<c2.brand<<" "<<c2.model<<" "<<c2.seat<<endl;
}