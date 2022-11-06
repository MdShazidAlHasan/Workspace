#include <iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    int randomnum{};
    size_t count{10};
    int min {1};
    int max {6};

    cout<<RAND_MAX<<endl;

    srand(time(nullptr));

    for (size_t i{1}; i<=count; ++i){
        randomnum = rand() % max + min;
        cout<<randomnum<<endl;

    }

    return 0;
}
