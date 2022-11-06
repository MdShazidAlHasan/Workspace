#include "Savingsaccount.h"
#include "Account.cpp"

Savingsaccount::Savingsaccount()
    :Savingsaccount(0,0){}

Savingsaccount::Savingsaccount(double balance, double int_rate)
    :Account(balance), int_rate(int_rate){
}

void Savingsaccount::deposit(double amount){
    amount = amount + (amount*int_rate);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savingsaccount &account){
    os <<  "saving account balance "<<account.balance<<" Interest rate "<<account.int_rate;
    return os;
}
