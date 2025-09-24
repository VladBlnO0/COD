#pragma once

#ifdef BANKINGDLL_EXPORTS
#define BANKING_API __declspec(dllexport)
#else
#define BANKING_API __declspec(dllimport)
#endif

extern "C" {
    BANKING_API int validate(double balance, double amount);
    BANKING_API double deposit(double balance, double percentage, int years);
    BANKING_API void transaction(char* sender_card, double receiver_balance, double amount);
}
