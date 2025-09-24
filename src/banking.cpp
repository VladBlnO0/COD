#include "banking.h"
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>

int validate(const double balance, const double amount) {
    if (amount <= 0.0) return 0;
    if (amount > balance) return 0;
    return 1;
}

char* get_card_number() {
    const int num = rand()%999999999+1;
    const std::string num_str = std::to_string(num);
    const auto card_number = new char[num_str.length()+1];
    strcpy(card_number, num_str.c_str());
    return card_number;
}

bool validate_change_daily_limit(const double new_limit, const double current_limit) {
    if (new_limit <= 0) {
        std::cout << "Limit must not be greater than 0";
        return false;
    }
    if (current_limit == new_limit) {
        std::cout << "Limit must not be same as current";
        return false;
    }
    std::cout << "Limit has changed";
    return true;
}
