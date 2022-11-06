#include <iostream>
using namespace std;
int a,b,c,n,x{0},y{0},z{0};
int main()
{
    for(cin>>n; n--; x+=a,y+=b,z+=c)
        cin>>a>>b>>c;
    
    cout<<(x||y||z?"NO":"YES")<<endl;
    return 0;
}