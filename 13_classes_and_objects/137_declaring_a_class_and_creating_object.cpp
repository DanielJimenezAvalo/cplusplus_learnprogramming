#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    //attributes
<<<<<<< Updated upstream
<<<<<<< Updated upstream
    string name;
    int health;
    int xp;
=======
    string name {"player"};
    int health {100};
    int xp {3};
>>>>>>> Stashed changes
=======
    string name {"player"};
    int health {100};
    int xp {3};
>>>>>>> Stashed changes


    //methods
    void talk(string);
    bool is_death();

<<<<<<< Updated upstream
<<<<<<< Updated upstream


=======
=======
>>>>>>> Stashed changes
};

class Account{
    //atributes 
    string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
};


int main(){

<<<<<<< Updated upstream
<<<<<<< Updated upstream
=======
    Account frank_account;
    Account jim_account;

>>>>>>> Stashed changes
=======
    Account frank_account;
    Account jim_account;

>>>>>>> Stashed changes
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