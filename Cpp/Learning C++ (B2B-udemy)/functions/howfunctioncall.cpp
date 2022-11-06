#include <iostream>

using namespace std;

void func2(int &x, int y, int z){
    x+= y+z;
}
int func1(int a, int b){
    int result {};
    result = a + b;
    func2(result, a, b);
    return result;
}
int main(){
    int x{10};
    int y{20};
    int z{0};
    cout<<func1(10, 20)<<endl;

}