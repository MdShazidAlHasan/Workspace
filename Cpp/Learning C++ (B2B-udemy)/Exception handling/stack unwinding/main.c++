#include <iostream>

class DivideByZeroException{

};

class NegativeValueError{

};

using namespace std;

double calculate_mapg(int miles, int gallons){
    if (gallons==0){
        throw DivideByZeroException();
    } 
    if (miles<0 or gallons<0){
        throw NegativeValueError();
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
    }catch(DivideByZeroException &ex){
        cerr<<"error detected "<<endl;
    }catch(NegativeValueError &ex){
        cerr<<"sorry one of your parameter is negative"<<endl;
    }
    return 0;
}