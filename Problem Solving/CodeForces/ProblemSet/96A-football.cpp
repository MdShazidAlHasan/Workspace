#include <iostream>

using namespace std;
void solve(){
    string s;
    cin>>s;
    int total{1};
    char current{};
    for (auto a:s)
    {
        if(total>=7)break;
        if(a==current){
            total+=1;     
        }else{
            total=1;
        }
        current=a;
    }
    cout<<(total>=7?"YES":"NO")<<endl;
}

int main()
{

    solve();
    return 0;
}