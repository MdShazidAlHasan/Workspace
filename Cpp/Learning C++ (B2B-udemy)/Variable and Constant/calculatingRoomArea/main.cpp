#include <iostream>

using namespace std;
int age  = 18;
int main()
{
    cout<<age<<endl;
    cout<<"please enter the width of the room:";
    int width{0};
    cin>>width;
    cout<<"please enter the height of the room:";
    int height{0};
    cin>>height;
    cout<<"the area of the room is : "<< height*width<<"square feet"<<endl;

}
