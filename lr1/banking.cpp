#include <iostream>
#include "banking.h"

int validate(double balance, double amount) {
    if (amount <= 0.0) return 0;
    if (amount > balance) return 0;
    return 1;
}

double deposit(double balance, double percentage, int years) {
    if (balance <= 0.0 || percentage <= 0.0 || years <= 0) return balance;
    double interest;
    for (int i = 0; i < years; i++) {
        interest = (balance * percentage) / 100;
        balance += interest;
    };
    return balance;
}

void transaction(char* sender_card, double receiver_balance, double amount) {
    std::cout << "Received: " << amount << std::endl;
    std::cout << "From: " << sender_card << std::endl;
    std::cout << "Balance now: " << receiver_balance + amount << std::endl;
}