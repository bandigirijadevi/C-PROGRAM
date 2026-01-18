#include <iostream>
using namespace std;
class Book {
public:
    int price;
    Book() {
        price = 250;
    }

    void show() {
        cout << "Book price: " << price;
    }
};
int main() {
    Book b1;   
    b1.show();
    return 0;
}