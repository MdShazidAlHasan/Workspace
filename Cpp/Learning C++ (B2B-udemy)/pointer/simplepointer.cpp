#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int num {10};
    cout<<num<<endl;
    cout<<sizeof num<<endl;
    cout<<&num<<endl;

    int *p;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<sizeof p<<endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4{nullptr};
    string *p5 {nullptr};

    return 0;
}
