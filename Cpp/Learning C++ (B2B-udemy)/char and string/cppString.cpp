#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string s0;
    string s1{"apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1, 0, 3};
    string s7{10, 'X'};

    cout<<s0.length()<<endl;

    //comparison
    cout<<boolalpha;
    cout<<(s1==s4)<<endl;
    cout<<s1 + " eating"<<endl;
    
    //c-style string doesn't support concatanation

    
    return 0;
}
