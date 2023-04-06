#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    char selection {};
    do {
        cout<<"\n---------------------"<<endl;
        cout<<"1. do this"<<endl;
        cout<<"2. do that"<<endl;
        cout<<"3. do something else"<<endl;
        cout<<"Q quit"<<endl;
        cout<<"\nEnter your choise: ";
        cin>>selection;

        if (selection == '1'){
            cout<<"You choose 1 - doing this "<<endl;
        }else if (selection == '2') {
            cout<<"You choose 2 - doing that "<<endl;
        }else if (selection == '3') {
            cout<<"You choose 3 - doing something else "<<endl;
        }else if (selection == 'Q' || selection == 'q') {
            cout<<"Goodbye "<<endl;
        }else{
            cout<<"Unknown option "<<endl;
        } 
    }while (selection != 'q' && selection != 'Q' );

    cout<<endl;
    return 0;
}