#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;

    void talk(string);
    bool is_dead();
};

int main(int argc, char const *argv[])
{   
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    

    Player *enemy {nullptr};
    enemy = new Player;

    return 0;
}
