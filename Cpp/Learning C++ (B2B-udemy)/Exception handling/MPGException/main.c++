#include <iostream>

using namespace std;

double calculate_mapg(int miles, int gallons){
    if (gallons==0){
        throw 0;
    } 
    return static_cast<double> (miles)/gallons;
}
int main(){
    int miles{};
    int gallons{};
    double miles_per_gallons{};

    cout<<"enter the miles  : ";
    cin>> miles;

    cout<<"enter the galons  :";
    cin>>gallons;

    try{
        miles_per_gallons = calculate_mapg(miles, gallons);
        cout<<"result "<<miles_per_gallons<<endl;
    }catch(int &ex){
        cerr<<"error detected "<<endl;
    }
    return 0;
}