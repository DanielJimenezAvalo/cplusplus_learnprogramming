#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    
    public:

        //attributes
        string name;
        int health;
        int xp;

        //methods
        void talk(string text_to_say){

            cout<<name<<" says "<<text_to_say<<endl;

        };

        bool is_death();

};

class Account{

    public:

        //atributes 
        string name ;
        double balance;

        //methods
        bool deposit(double bal){
            balance += bal;
            cout<<"In deposit"<<endl;
        };

        bool withdraw(double bal){
            balance -= bal;
            cout<<"In withdraw"<<endl;
        };
};


int main(){

    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hi there");

    Player *enemy = new Player; //create a pointer in the heap
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;

    enemy->talk("I will destroy you");


    cout<<endl;
    return 0;
}