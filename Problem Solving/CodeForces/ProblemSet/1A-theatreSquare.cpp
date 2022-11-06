#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int m,n,a,len,wid;
    cin>>m>>n>>a;
    if(m%a==0){
        len = m/a;
    }else{
        len = m/a+1;
    }
    if(n%a==0){
        wid = n/a;
    }else{
        wid = n/a+1;
    }
    cout<<len*wid<<endl;
    return 0;
}
