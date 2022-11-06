#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    vector<string> stoges{"larry", "moe", "carly"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr = &stoges;
    cout<<(*vector_ptr)[0]<<endl;
    

    return 0;
}
