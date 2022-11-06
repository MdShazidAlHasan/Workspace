#include <iostream>
#include <iomanip>

using namespace std;

double tax(int income, double rate = 0.1){
    return income*rate;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<tax(1599)<<endl;
    return 0;
}
