#include <iostream>

using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"NO PUNISHMENT"<<endl;
    }else{
        for(int i=0; i<n;i++){
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
    return 0;
}