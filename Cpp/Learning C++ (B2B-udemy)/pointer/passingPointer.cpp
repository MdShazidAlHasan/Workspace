#include <iostream>

using namespace std;

void double_data(int *int_ptr){
    *int_ptr *= 2; 
}

int main(int argc, char const *argv[])
{
    int value{10};
    int *int_ptr{nullptr};

    double_data(&value);
    cout<<value<<endl;

    int_ptr = &value;
    double_data(int_ptr);
    cout<<value;

    return 0;
}
