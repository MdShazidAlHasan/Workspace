#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i=1; i<=10; ++i)
        cout<<i<<endl;
        cout<<"pirate"<<endl;

    vector<int> nums{10, 20, 30, 40, 50};
    for (int i=0; i<nums.size(); i++){
        cout<<nums[i]<<' ';
        cout<<endl;
    }
    
    return 0;
}
