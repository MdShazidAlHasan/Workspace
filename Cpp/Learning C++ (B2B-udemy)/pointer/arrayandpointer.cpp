#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char name[] ("frank");
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    char_ptr1 = &name[0];
    char_ptr2 = &name[4];
    cout<<char_ptr2-char_ptr1<<"\n"<<&name<<endl;


    return 0;
}
