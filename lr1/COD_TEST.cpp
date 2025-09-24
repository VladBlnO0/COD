#include <iostream>
#include "banking.h"

int main() {
    double balance = 1000.0;
    double amount = 250.0;
    int years = 3;

    int ok = validate(balance, amount);
    std::cout << "Transaction valid? " << (ok ? "Yes" : "No") << std::endl;

    double newBalance = deposit(balance, 2.5, years);
    std::cout << "Balance after " << years << " years = " << newBalance << std::endl;

    char str[] = "4242 4242 4242 4242";
    transaction(str, balance, 10.5);
    
    return 0;
}
