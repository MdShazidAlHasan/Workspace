#include <iostream>
using namespace std;

int main()
{
    /* code */
    int counter {10};
    int result = 30;

    cout<< result<<endl;
    result = result +1;
    cout<< result<<endl;
    result++;
    cout<< result<<endl;
    ++result;
    cout<< result<<endl; 

    counter = ++result + 10; // pre  
    cout << counter<<endl;

    counter = result++ + 10;//post 
    cout << counter<<endl;    
    cout << result<<endl;

    return 0;
}
