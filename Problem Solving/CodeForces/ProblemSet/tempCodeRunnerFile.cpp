#include<iostream>
using namespace std;
int main(){
    int i{0};
    char c;
    while(cin >> c){
        
        i+=(c=='4'||c=='7');
    }
    cout << ((i==4||i==7)?"YES":"NO");
}