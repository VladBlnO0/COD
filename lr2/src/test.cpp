//
// Created by vladyslav on 24/09/2025.
//

#include "banking.h"
#include <iostream>

int main() {
    const int balance = 100, amount = 50, new_limit = 40, current_limit = 20;

    std::cout << "Transaction valid? " << (validate(balance, amount) ? " Yes" : " No") << std::endl;
    std::cout << "New card number: " << get_card_number() << std::endl;
    validate_change_daily_limit(new_limit, current_limit);
    std::cout << std::endl;
    validate_change_daily_limit(current_limit, current_limit);
    std::cout << std::endl;


    return 0;
}
