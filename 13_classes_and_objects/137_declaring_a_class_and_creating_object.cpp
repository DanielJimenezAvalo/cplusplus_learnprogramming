#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;


    //methods
    void talk(string);
    bool is_death();



};


int main(){

    Player frank;
    Player hero;

    Player players[] {frank, hero};

    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player; //create on the heap

    delete enemy;

    cout<<endl;
    return 0;
}