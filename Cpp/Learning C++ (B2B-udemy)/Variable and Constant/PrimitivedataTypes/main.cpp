 #include <iostream>

using namespace std;

int main()
{
    // character type
    char middle_initial{'h'};
    cout<<"the middle initial is:"<< middle_initial<<endl;

    //integer type
    unsigned short int score {55};
    cout<<"the score was: "<< score<<endl;

    int visited_country{30};
    cout<< "we have visited: "<< visited_country<<"countries"<<endl;

    long people_florida{20510000};
    cout<<"there are about "<< people_florida<<" lives in florida"<<endl;
    long long people_on_earth{7'600'000'000'000'000'000};
    cout<<"people lives in earth "<<people_on_earth<<endl;

    //floating point
    float car_payment{50.6};
    cout<<"i have to pay "<<car_payment<< "to the shop"<<endl;

    double pi{3.14159};
    cout<<"the value of pi: "<< pi<<endl;

    bool game_over{false};
    cout<< "what is the game situation: "<< game_over<< endl;

    short val1{3000};
    short val2{10000};
    short product {val1*val2};
    cout<< product;

    return 0;
}
