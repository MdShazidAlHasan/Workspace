#include <iostream>
#include "Account.h"


Account::Account()
    :Account(0.0){}
Account::Account(double balance)
    :balance(balance){

    }

void Account::deposit(double amount){
    std::cout<<"Account deposit called with "<<amount<<std::endl;
    balance += amount;
}
void Account::withdraw(double amount){
    std::cout<<"Account withdraw with "<<amount <<std::endl;
    if (balance<amount){
        std::cout<<"insufficient balance "<<std::endl;
    }else{
        balance -=amount;
    }
}

 std::ostream &operator<<(std::ostream &os, const Account &account){
     os<<"account balance "<<account.balance;
     return os;
 }
