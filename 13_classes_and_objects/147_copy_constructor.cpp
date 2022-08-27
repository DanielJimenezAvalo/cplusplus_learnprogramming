/*
&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& copy constructor 
&&&&&&&&&&&&&&&&&&&&&&&&
% when objects are copied c++ must create a new object from an existing object
% when is a copy of an object made ?
    - passing object by value as a parameter
    - returning a object from a function value
    - constructing one object based on another of the same class
% c++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& pass object by-value
&&&&&&&&&&&&&&&&&&&&&&&&
Player hero {"Hero", 100, 20};

void display_player(Player p){
    // p is a COPY of hero in this example
    // use p
    // destructor for p will be called
}

display_player(hero)

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& return object by value
&&&&&&&&&&&&&&&&&&&&&&&&
Player enemy;

Player create_super_enemy(){
    Player an_enemy{"super enemy", 1000, 1000};
    return an enemy; //a COPY of an_enemy is returned
}

enemy=create_super_enemy();

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& construct one object based on another
&&&&&&&&&&&&&&&&&&&&&&&&
Player hero {"Hero", 100, 100};

Player another_hero {hero}; //a COPY of hero is made

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& copy constructor
&&&&&&&&&&&&&&&&&&&&&&&&
% if you don't provide your own way of copying objects by values, then the compipler provides a default.
% copies the values of each data member to the new object
    - defalut memberwise copy
% perfectly fine in many cases
% beware if you have a pointer data member
    - pointer will be copied, not what it is pointing to.
    - shallow vs deep copy (next lesson)

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& best practice of copy constructor:
&&&&&&&&&&&&&&&&&&&&&&&&
% provide a copy constructor when your class has raw pointer members
% provide a copy contructor with const reference parameter
% use STL classes as they alredy provide copy constructors
% Avoid usinr raw pointer data member if possible

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& declaring the copy constructor
&&&&&&&&&&&&&&&&&&&&&&&&
Type::Type( const Type &source)

&&&&&&&&&&&&&&&&&&&&&&&&
&&&& implementing the copy constructor
&&&&&&&&&&&&&&&&&&&&&&&&
Type::Type( const Type &source ){
    //code or initialization list to copy the object
}

*/


#include <iostream>
#include <string>

using namespace std;

class Player {
    private:
        std::string name;
        int health;
        int xp;
    public:
        //getters: because parameters are private
        std::string get_name() { return name ; }
        int get_health() { return health ; }
        int get_xp() { return xp ;}

        //constructor
        Player( std::string name_val = "none", int health_val = 0, int xp_val=0 );

        //prototype copy constructor
        Player( const Player &source );

        //destructor 
        ~Player(){ cout<< " destructor called for "<<name<<endl; }
};

//constructor   
Player::Player( std::string name_val, int health_val, int xp_val ) 
    : name{name_val}, health{health_val}, xp{xp_val} { 
        cout<<"three arg constructor"<<endl;
    }

//set copy constructor
Player::Player( const Player &source )
    //: name(source.name), health(source.health), xp(source.xp){
    //changing to delegate constructor function
    : Player {source.name, source.health, source.xp }{  
        cout<<"copy constructor - made copy of: "<<source.name<<endl;
    }

//use of the copy 
void display_player( Player p ){
    cout<<"name: "<< p.get_name() <<endl;
    cout<<"health: "<< p.get_health() <<endl;
    cout<<"xp: "<<p.get_xp() <<endl;
}


int main(){
    
    Player empty{"XXXXXX",100,50};

    Player my_new_object{empty};

    display_player(empty); //passing and object to a function

    Player frank {"Frank"};
    Player hero {"Hero",100};
    Player villain {"Villain",100,53};

    cout<<endl;
    return 0;
}