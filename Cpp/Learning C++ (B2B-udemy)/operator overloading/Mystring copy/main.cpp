#include <iostream>
#include "Mystring.cpp"
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    Mystring a {"hello"};
    Mystring b;
    b = a;
    b = "this a string";
    return 0;
}

