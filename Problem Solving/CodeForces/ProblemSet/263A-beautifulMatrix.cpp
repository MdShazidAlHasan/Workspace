#include <iostream>

using namespace std;

int main()
{
    int a,b,inp, arr[5][5]{0};
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>inp;
            arr[i][j]=inp;
            if(inp==1){
                a = i+1;b = j+1;
                break;
            }
        }
    }
    
    cout<<(abs(3-b)+abs(3-a))<<endl;
    return 0;
}
