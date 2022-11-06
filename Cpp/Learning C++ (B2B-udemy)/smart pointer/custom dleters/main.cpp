#include <iostream>
#include <memory>

using namespace std;

class Test{
    private:
        int data;
    public:
        Test():data{0}{
            cout<<"Test constructor "<< data<<endl;
        }
        Test(int data):data{data}{
            cout<<"Test args constructor "<<data<<endl;
        }
        ~Test(){
            cout<<"Test destructor is called"<<endl;
        }
};

void deleter(Test *ptr){
    cout<<"using my custom deleter"<<endl;
    delete ptr;
}


int main(){

    {
        shared_ptr<Test> ptr1{new Test{100}, deleter};
    }

    {
        shared_ptr<Test> pt2{new Test{200}, 
        [](Test *ptr){
            cout<<"lambda function"<<endl;
            delete ptr;
        }};
    }

    return 0;
}