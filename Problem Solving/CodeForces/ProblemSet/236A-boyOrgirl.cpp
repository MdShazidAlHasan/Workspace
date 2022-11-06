#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int total{0};
    vector<char> arr;
    for (int i=0; i<s.size();i++){
        if(count(arr.begin(), arr.end(), s[i])){
            continue;
        }else{
            total+=1;
            arr.push_back(s[i]);
        }
    }

    string a = (total%2==0)?"CHAT WITH HER!":"IGNORE HIM!";
    cout<<a<<endl;
    return 0;
}
