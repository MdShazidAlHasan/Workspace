#include <iostream>
#include "Mystring.cpp"
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    Mystring a {"hello"};
    a = Mystring{"hola"};
    a = "bonjour";
    return 0;
}


