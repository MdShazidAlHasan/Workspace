#include<iostream>
using namespace std;
int main(){
    int a{0}, d{0},n;
    cin>>n;
    char c;
    while(cin >> c){
        if(c=='A'){   
            a+=1;
        }else{
            d+=1;
        }
    }
    if(a==d)
    {
        cout<<"Friendship";
    }else{
    cout << ((a>d)?"Anton":"Danik");
    }
}