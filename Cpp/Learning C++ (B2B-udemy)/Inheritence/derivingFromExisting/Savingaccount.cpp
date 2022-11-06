#include <iostream>
#include "Savingsaccount.h"

Savingsaccount::Savingsaccount(){}
Savingsaccount::~Savingsaccount(){}

void Savingsaccount::deposit(double amount){
    std::cout<<"Saving account deposit called with "<<amount<<std::endl;

}

void Savingsaccount::withdraw(double amount){
    std::cout<<"Saving account withdraw "<<amount<<std::endl;

}
 