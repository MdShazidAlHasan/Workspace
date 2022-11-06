#include <iostream>

using namespace std;

int main()
{
    int n,total{0};
    string s;
    char current{};
    cin>>n;
    cin>>s;
    for(auto a: s){
        if(current==a){
            total+=1;
        }
        current=a;
    }
    cout<<total<<endl;
    return 0;
}
