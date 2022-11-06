#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    const int lower{10};
    const int upper{20};

    cout<< boolalpha;
    cin>>num;

    bool within_bounds{};
    within_bounds = num<lower or num>upper;
    cout<<within_bounds<<endl;
    
    return 0;
}
