#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char selection{};

    do {
        cout<<"1. Do this"<<endl;
        cout<<"2. Do that"<<endl;
        cout<<"3. Do somethig else"<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"select: ";
        cin>> selection;


    }
    while (selection !='q' and selection != 'Q'); // if this statement goes 
                                                   // false then loop terminates
   

    return 0;
}
