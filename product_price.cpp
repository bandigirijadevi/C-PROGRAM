#include <iostream>
using namespace std;

class Product
 {
private:
    float price;

public:
    void setPrice(float p)
     {
        if (p > 0)
            price = p;
    }

    float getPrice()
     {
        return price;
    }
};
int main()
 {
    Product p;
    p.setPrice(99.99);
    cout << "Price: " << p.getPrice();
    return 0;
}