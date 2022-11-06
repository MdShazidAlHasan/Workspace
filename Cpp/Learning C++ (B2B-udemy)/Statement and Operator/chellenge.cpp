#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double temp{};
    int amount{};
    cin>>amount;
    
    temp =amount - amount%100;
    amount = amount%100; 
    cout<< "dollar: "<< (temp)/100<<endl;

    temp =amount- amount%50;
    amount = amount%50; 
    cout<< "fify: "<< (temp)/50<<endl;

    temp =amount- amount%25;
    amount = amount%25; 
    cout<< "quater: "<< (temp)/25<<endl;
    
    temp =amount- amount%10;
    amount = amount%10; 
    cout<< "ten: "<< (temp)/10<<endl;

    temp =amount- amount%5;
    amount = amount%5; 
    cout<< "five: "<< (temp)/5<<endl;

    temp =amount- amount%1;
    amount = amount%1; 
    cout<< "one: "<< (temp)/1<<endl;

    return 0;
}

