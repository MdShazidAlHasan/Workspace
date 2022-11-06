#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int *int_ptr(nullptr);
    int_ptr = new int;
    cout<<int_ptr<<endl;
    delete int_ptr;

    return 0;
}
