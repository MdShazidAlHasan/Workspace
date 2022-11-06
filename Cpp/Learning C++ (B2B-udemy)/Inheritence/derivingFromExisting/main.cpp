#include <iostream>
#include "Account.cpp"
#include "Savingaccount.cpp"

using namespace std;

int main(){
    cout<<"-------account---------"<<endl;
    Account acc{};
    acc.deposit(100);
    acc.withdraw(50);

    cout<<endl;

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc -> deposit(500);
    p_acc -> withdraw(800);
    delete p_acc;
    return 0;

}