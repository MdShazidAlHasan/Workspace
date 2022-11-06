#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<< "vector1"<< endl;
    cout<< vector1.at(0)<<endl;
    cout<< vector1.at(1)<<endl;


}
