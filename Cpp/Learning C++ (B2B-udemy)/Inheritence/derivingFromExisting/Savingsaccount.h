#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.h"

class Savingsaccount: public Account
{
public:
    Savingsaccount();
    ~ Savingsaccount();

    void deposit(double amount);
    void withdraw(double amount);

};
#endif