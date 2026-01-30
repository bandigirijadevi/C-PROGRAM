#include <iostream>
using namespace std;
int main()
 {
    int n, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
     {
        rem = n % 10;          // to get last number
        rev = rev * 10 + rem; 
        n = n / 10;            // to remove last number
    }
    cout << "Reversed number = " << rev;
    return 0;
}