#include <iostream>
#include <memory>

using namespace std;

class B;

class A{

    shared_ptr<B> b_ptr;
    public:
        void set_B(shared_ptr<B> &b){
            b_ptr= b;
        }
    A(){
        cout<<"constuctorA is called"<<endl;
    }
    ~A(){
        cout<<"destructorA is called"<<endl;
    }
};

class B{

    weak_ptr<A> a_ptr;
    public:
        void set_A(shared_ptr<A> &a){
            a_ptr= a;
        }
    B(){
        cout<<"constuctorB is called"<<endl;
    }
    ~B(){
        cout<<"destructorB is called"<<endl;
    }
};


int main(){
    shared_ptr<A> a = make_shared<A> ();
    shared_ptr<B> b = make_shared<B> ();
    a->set_B(b);
    b->set_A(a);
}