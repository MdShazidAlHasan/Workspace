#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char s;
    cin>>s;
    cout<<(char)toupper(s);
    while(cin>>s){
        cout<<(char)(s);
    }
}