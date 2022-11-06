#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);

void pass_by_value1 (int num){
    num = 1000;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    pass_by_value1(a);
    cout<<a;
    return 0;
}
