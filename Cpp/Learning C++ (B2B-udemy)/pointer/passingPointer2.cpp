#include <iostream>

using namespace std;

void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(int argc, char const *argv[])
{
    int x{100}, y{200};
    swap(&x, &y);
    cout<<x<<' '<<y;
    return 0;
}
