#include <iostream>

using namespace std;

int main()
{
    int a,b, count{0};
    cin>>a>>b;
    while(true){
        if(a>b)break;
        count+=1;
        a = a*3;
        b = b*2;
    }
    cout<<count<<endl;
    return 0;
}
