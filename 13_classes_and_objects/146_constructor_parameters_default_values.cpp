#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        std::string name;
        int health;
        int xp;
    public:
        Player( std::string name_val = "none", int health_val = 0, int xp_val=0 );
};

   
Player::Player( std::string name_val, int health_val, int xp_val ) 
    : name{name_val}, health{health_val}, xp{xp_val} { 
        cout<<"three arg constructor"<<endl;
    }

int main(){
    
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero",100};
    Player villain {"Villain",100,53};

    cout<<endl;
    return 0;
}