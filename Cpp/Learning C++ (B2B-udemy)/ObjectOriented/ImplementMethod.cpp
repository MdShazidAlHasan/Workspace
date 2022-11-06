#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;

    void talk(string);
    bool is_dead();
};

class Account{
    private:
        string name;
        double balance;
    public:
        void set_balance(double bal){balance = bal;}
        double get_balance(){return balance;}
        
        void set_name(string n);
        string get_name(); 

        bool deposit(double amount);
        bool withdraw(double amount);

};

void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    return true;
}
bool Account::withdraw(double amount){
    if (balance<amount){
        return false;
    }
    else{
        balance -= amount;
        return true;
    }
}

int main(int argc, char const *argv[])
{
      

}

