#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> list{1, 3, 9, 0};
    char selection {};
    
    do
    {
        /* code */
        cout<<"1. P- print numbers"<<endl;
        cout<<"2. A- Add a number"<<endl;
        cout<<"3. M- Mean of numbers"<<endl;
        cout<<"4. S- Display smallest numbers"<<endl;
        cout<<"5. L- Display largest numbers"<<endl;
        cout<<"6. Q- Quit"<<endl;
        cout<<"chose your option: ";
        cin>>selection;

        if (selection=='p' or selection=='P'){
            if (list.size()==0){
                cout<<"[]"<<endl;
            }
            else{
                cout<<"[";
                for (auto i: list)
                    cout<<i<<", ";
                cout<<"]"<<endl;;
            } 
        }
        else if (selection=='a' or selection=='A'){
            cout<<"please enter the number: ";
            int input{};
            cin>>input;
            list.push_back(input);
            cout<<"The number added successfully"<<endl;
        }
        else if (selection=='m' or selection=='M'){
            if (list.size()==0)
                cout<<"0";
            else{
                int n = list.size();
                int sum = accumulate(list.begin(), list.end(), 0);
                cout<<"the mean is : "<<sum/n<<endl;
            }
        }
        else if (selection=='s' or selection=='S'){
            cout<<"The smallest character is : "<<*min_element(list.begin(), list.end())<<endl;;
        }
        else if  (selection=='l' or selection=='L'){
            cout<<"the largest element is: " << *max_element(list.begin(), list.end())<<endl;
        }
        else if  (selection=='d' or selection=='D'){
            list.clear();
            cout<<"\nAs you wish, i am deleting all items\n "<<endl;
        }
        else if  (selection=='q' or selection=='Q'){
            cout<<"good bye!!!"<<endl;
        }
        else 
            cout<<"\n***comand not found***\n"<<endl;

        
        

    } while (selection != 'q' and selection !='Q');
    

    return 0;
}
