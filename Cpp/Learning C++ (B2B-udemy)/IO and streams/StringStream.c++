#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main(){
    int num{};
    double total{};
    string name{};

    string info{"moe 100 123.45"};
    istringstream iss{info};
    iss>>name >> num >> total;
    cout<<setw(10)<<left<<name
        <<setw(5)<<num
        <<setw(10)<<total<<endl;
    
    return 0; 
}