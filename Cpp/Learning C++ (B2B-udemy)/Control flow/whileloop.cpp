#include <iostream>


using namespace std;

int main(int argc, char const *argv[])
{
    bool done {false};
    int num{0};

    while (!done)
    {   
        cout<<"enter a number 1 and 5: ";
        cin>> num;
        if (num<=1 or num>=5)
            cout<< "out of range"<<endl;
        else{
            cout<<"thanks"<<endl;
            done = true;
        }
    }
    

    return 0;
}
