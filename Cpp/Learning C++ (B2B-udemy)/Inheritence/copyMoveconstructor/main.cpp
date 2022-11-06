#include <iostream>

using namespace std;

class Base {
    private:
        int value;
    public:
        Base()
            :value{0}{
                cout<<"base no args constructor "<<endl;
            }
        Base(int x)
            :value{x}{
                cout<<"base (int) overloaded constructor"<<endl;
            }
        Base (const Base &other)
            :value(other.value){
                cout<<"base copy constructor called"<<endl;
        }
        Base &operator=(const Base &rhs){
            cout<<"base operator"<<endl;
            if (this == &rhs){
                return *this;
            }
            value = rhs.value;
            return *this;
        }
        ~Base(){cout<<"base destroyed"<<endl;}
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
    Derived(const Derived &other)
        :Base(other), double_value{other.double_value}{
            cout<<"Derived copy constructor called "<<endl;
        }
    Derived &operator=(const Derived &rhs){
        cout<<"Derived operator "<<endl;
        if (this == &rhs){
            return *this;
        }
        Base::operator=(rhs);
        double_value = rhs.double_value;
        return *this; 
    }

    ~Derived(){
        cout<<"destroyed derived"<<endl;
     }

};

int main(){
    // Base b{100};
    //  Base b1{b};
    // b = b1;
    Derived d;
    Derived d1{d};
    d = d1;

    return 0;
  }
