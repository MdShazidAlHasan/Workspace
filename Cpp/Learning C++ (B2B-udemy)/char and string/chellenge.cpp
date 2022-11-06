#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOOPQRSTUVWXYZ"};
    string key {"ijklmnopqrstuvwxyzABCDEFGHIJKLMNOOPQRSTUVWXYZabcdefgh"};
    
    string message {};
    getline(cin, message);
    string enc_message{};

    for (auto c : message){
        size_t position = alphabet.find(c);
        if (position != string::npos){
            enc_message += key[position];
        }
        else{
            enc_message += c;
        }
    }
    cout<<enc_message<<endl;

    return 0;
}
