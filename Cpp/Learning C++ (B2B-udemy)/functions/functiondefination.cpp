#include <iostream>

using namespace std;

const double pi {3.1416};

double calc_area(double radius){
    return pi*radius*radius;
}


void area_circle(){
    double radius{};
    cout<<"enter: ";
    cin>>radius;
    cout<<calc_area(radius)<<endl;
}

int main(){
    area_circle();
}