#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char letter_grade {};
    cin>> letter_grade;

    switch (letter_grade)
    {
    case 'A':
        cout<<"great"<<endl;
        break;
    case 'B':
        cout<<"good"<<endl;
        break;
    case 'C':
        cout<<"need improvement";
        break;
    case 'D':
        cout<<"poor";
        break;
    case 'F':{
        char confirm{};
        cout<<"Are you sure?(Y/N)";
        cin>>confirm;
        if (confirm=='y' or confirm=='Y')
            cout<<"ok , i guess you didn't study"<<endl;
        else if (confirm=='n' or confirm=='N')
            cout << " good go and study"<<endl;
        else  
            cout<<"wrong choice"<<endl;
            break;
    }
    default:
        cout<< "soory, not a valid grade"<<endl;
        break;
    }

    return 0;
}
