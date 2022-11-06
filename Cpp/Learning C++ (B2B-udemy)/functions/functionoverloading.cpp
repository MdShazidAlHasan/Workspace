#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
    cout<<"printing "<<num<<endl;
}

void print(double num){
    cout<<"printing "<<num<<endl;
}

void print(string s){
    cout<<"printing "<<s<<endl;
}
void print(string s, string p){
    cout<<"printing "<<s<<" "<<p<<endl;
}
void print(vector<string> v){
    for (auto c : v)
        cout<<c + " ";
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    print(100);
    print('A');

    print(123.5);
    print("string");
    vector<string> a {"labu", "sabu", "tabu"};
    print(a);
    char b[] {'a', 'b'};
    print(b);

    return 0;
}
