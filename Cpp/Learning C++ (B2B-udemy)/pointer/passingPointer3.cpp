#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> display( ){
    vector<string> s {"s", "p", "q"};
    return s;     
}

int main(int argc, char const *argv[])
{
   vector<string> a = display();
   cout<<a[1]<<endl;
    return 0;
}
