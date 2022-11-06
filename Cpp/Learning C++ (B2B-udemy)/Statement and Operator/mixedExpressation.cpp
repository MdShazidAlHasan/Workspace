#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int total{};

    int num1{}, num2{}, num3{};
    const int count{3};

    cin>> num1>>num2>>num3;

    total = num1 + num2 + num3;

    double average{};
    cout << average <<endl;

    average = (double)total/count;

    cout<< average<<endl;



    return 0;
}
