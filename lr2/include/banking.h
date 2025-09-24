//
// Created by vladyslav on 14/09/2025.
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

int validate(double balance, double amount);
char* get_card_number();
bool validate_change_daily_limit(double new_limit, double current_limit);

#ifdef __cplusplus
}
#endif
