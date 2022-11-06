#include<iostream>
using namespace std;

int sum(int arr[], int size, int &total) {
    total += arr[0];
    //base case
    if(size == 0 || size == 1 ){
        return total;
    }
 
    cout<<total<<" ";
    sum(arr+1, size-1, total);
    return total;

}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;
    int total = 0;

    int ans = sum(arr, size, total);
    cout<<ans<<endl;
    return 0;
}