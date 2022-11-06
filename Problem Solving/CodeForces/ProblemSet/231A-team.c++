#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n{};
    int count{};
    cin>>n;
    for (int i=0; i<n; ++i)
    {
        int a{0},b{0},c{0};
        cin>>a>>b>>c;
        count += a+b+c>=2?1:0;
    }
    cout<<count<<endl;
    return 0;
}
