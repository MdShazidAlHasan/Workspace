#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_
#include "Account.h"

class Savingsaccount: public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savingsaccount &account);
protected:
    double int_rate;
public:
    Savingsaccount();
    Savingsaccount(double balance, double int_rate);

    void deposit(double amount);

};
#endif
