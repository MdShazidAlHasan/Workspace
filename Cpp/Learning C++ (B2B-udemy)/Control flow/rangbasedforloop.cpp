#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int scores[]{10, 20, 30};
    for (auto i: scores)
        cout<<i<<endl;

    vector<double> temp{90.3, 92.4, 99.00, 87.6};
    double average_temp{};
    double total{};

    for (auto temp: temp)
        total += temp;
    average_temp = total/temp.size();
    cout<<fixed<<setprecision(2);
    cout<<"average: "<<average_temp<<endl;

    return 0;
}
