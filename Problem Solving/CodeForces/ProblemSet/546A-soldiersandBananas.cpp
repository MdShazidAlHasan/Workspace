#include <iostream>

using namespace std;

int main()
{
    int k,n,w, total{0};
    cin>>k>>n>>w;
    for (int i=0; i<w; i++){
        total+=k*(1+i);
    }      
    int ans = (total-n)<0?0:(total-n);
    cout<<ans<<endl;
    return 0;
}
