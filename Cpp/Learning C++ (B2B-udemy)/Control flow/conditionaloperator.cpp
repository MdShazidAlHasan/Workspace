#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num{0};
    cin>>num;
    cout<<num<< " is "<<((num%2==0)? "even":"odd")<<endl;


    return 0;
}
