#include <iostream>
using namespace std;

class BankAccount
 {
private:
    double balance;

public:
    void setBalance(double b)
     {
        if (b >= 0)
            balance = b;
    }

    double getBalance()
     {
        return balance;
    }
};

int main() 
{
    BankAccount acc;
    acc.setBalance(5000.75);
    cout << "Balance: " << acc.getBalance();
    return 0;
}