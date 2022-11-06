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
    Derived()
        :Base{}, double_value{0}{
            cout<<"derived no args constructor"<<endl;
        }
    Derived(int x)
        :Base{x}, double_value{x*2}{
            cout<<"args called "<<double_value<<endl;
        }
    ~Derived(){
        cout<<"destroyed derived"<<endl;
     }

};

int main(){
   // Base b;
    Derived x{6};
    return 0;
}
