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

int main(){
    // Test *t = new Test{100};
    // delete t;

    unique_ptr<Test> t1 {new Test{100}};
    unique_ptr<Test> t2 = make_unique<Test>(1000);

    unique_ptr<Test> t3;
    t3 = move(t1);
    if (!t1){
        cout<<"t1 is a null pointer"<<endl;
    }

    return 0;
}