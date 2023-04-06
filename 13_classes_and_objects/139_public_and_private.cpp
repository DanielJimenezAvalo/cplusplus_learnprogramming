#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    private:
        //attributes
        string name {"Player"};
        int health;
        int xp;

    public:
        //METHODS
        void talk(string text_to_say){
            cout<<name<<" says "<<text_to_say<<endl;
        };

        bool is_dead();
};

int main(){

    Player frank;
    //frank.name = "Frank";
    frank.talk("Hello there");

    cout<<endl;
    return 0;

}