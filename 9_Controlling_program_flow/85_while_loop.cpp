#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    /*
    
    int num {};

    cout<<" enter a positive integer - start the countdown: ";
    cin>>num;

    while (num>0) {
        cout<<num<<endl;
        --num;
    }
    cout<<"blastoff!"<<endl;
    
    // ##########################
    int number{};
    cout<<"enter an integer less than 100: ";
    cin>>number;

    while (number >= 100){
        cout<<"enter an integer less than 100: ";
        cin>>number;
    } 

    cout<<"thanks"<<endl;
    */

    bool done {false};
    int number {0};

    while ( !done ){
        
        cout<<"enter an integer between 1 and 5: ";
        
        cin>>number;

        if ( number<=1 || number >=5 ){
            cout<<"out of range, try again"<<endl;
        }else{
            cout<<"thanks"<<endl;
            done=true;
        }

    }




    cout<<endl;
    return 0;
}