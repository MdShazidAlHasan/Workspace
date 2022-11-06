#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, b, total{0}, res{0};
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        total=total-a+b;
        if(total>res){
            res=total;
            }
    }   
    cout<<res<<endl;
    return 0;
}