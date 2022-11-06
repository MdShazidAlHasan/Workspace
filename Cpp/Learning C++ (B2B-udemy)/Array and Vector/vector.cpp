#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <char> vowels;
    cout << vowels.size()<< endl;
    vowels.push_back('a');
    cout<<vowels.at(0)<<endl;
    int s = vowels[2];
    cout<<s<<endl;



return 0;

}
