#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num{255};

    cout<<dec<<num<<endl;
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;

    // show base
    cout<<showbase<<"========="<<endl;
    cout<<dec<<num<<endl;
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;


}