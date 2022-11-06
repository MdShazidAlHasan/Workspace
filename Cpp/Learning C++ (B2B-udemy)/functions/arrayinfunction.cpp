#include <iostream>

using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){
    for (size_t i{0}; i<size; ++i)
        cout<<arr[i]+" ";
    cout<<endl;
}
void set_array(int arr[], size_t size, int value){
    for (size_t i{0}; i<size; i++){
        arr[i] = value;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int scores[]{10, 20, 30, 50};
    print_array(scores, 4);
    set_array(scores, 4, 10);
    return 0;
}
