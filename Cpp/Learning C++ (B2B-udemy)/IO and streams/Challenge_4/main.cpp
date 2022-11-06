// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inpFile("romeoandjuliet.txt");
    ofstream outFile("out.txt");

    if(!inpFile.is_open()){
        cerr<<"Error opening file"<<endl;
        return 1;
    }
    string line="";
    int count{0};

    while (getline(inpFile, line))
    {   
        if(line.empty()){
            outFile<<endl;
        }else{
            cout<<line<<endl;
        count++;
        if(count==5)break;
        outFile<<left<<count<<line<<endl;
        }
    }
    inpFile.close();
    outFile.close();
    

    return 0;
}

