#include <iostream>
#include "Mystring.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Mystring empty;
    Mystring larry("larry");
    Mystring stooge{larry};

    empty.display();
    larry.display();
    stooge.display();
    return 0;
}
