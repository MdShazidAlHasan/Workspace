#include <iostream>

using namespace std;

class Base {
    private:
        int c{0};
    public:
        int a{0};
        void display(){cout<<"--------"<<a<<b<<endl;}
    protected:
        int b {0};
};

class Derived:public Base
{
private:
    int double_value;
public:

};

int main(){
    Base b;
    b.a = 100;
    //b.b = 200;
    int a;
    std::cin>>a;
    std::cout<<a+10;
    return 0;
 }
