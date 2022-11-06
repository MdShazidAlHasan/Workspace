 #include <iostream>

using namespace std;

int main()
{
    cout << "hello ! welcome to pirate carpet cleaning service?"<<endl;
    cout << "how many rooms would you like to clean: ";

    int numbers_of_rooms{0};
    cin >> numbers_of_rooms;

    const cost_per_rooom {20};

    cout << "Estimate for the carpet cleaning service"<<endl;
    cout << "Number of rooms "<< numbers_of_rooms<<endl;
    cout << "Price per room $"<< cost_per_room  << endl;
    cout << "Cost "<< cost_per_room*numbers_of_rooms<<endl;
    cout << "Tax "<< cost_per_room*numbers_of_rooms*0.06<<endl;
    cout<< "Total estiated cost " << (cost_per_room*numbers_of_rooms)+ (cost_per_room*numbers_of_rooms*.06)<<endl;
    cout<< "This estimate is valid for cost_per_room days "<<endl;
    return 0;
}
