#include <iostream>

using namespace std;

class Base {
    private:
        int value;
    public:
        Base()
            :value{5}{
                cout<<"base no args constructor "<<endl;
            }
        Base(int x)
            :value{x}{
                cout<<"base (int) overloaded constructor"<<endl;
            }
        ~Base(){cout<<"destroyed"<<endl;}
};

class Derived:public Base
{
private:
    int double_value;
public:

};

int main(){
    Base b;
    return 0;
 }
