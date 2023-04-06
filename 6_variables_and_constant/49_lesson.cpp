/*

\n - newline

\r - return

\t - tab

\b - backspace

\' - single quote

\" - double quote

\\ - backslash

*/


#include <iostream>

using namespace std;

int main(){

    cout<<" hello welcome to Daniel's Carpet Cleaning Service"<<endl;
    cout<<" \nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin>>number_of_rooms;

    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"number of rooms:"<<number_of_rooms<<endl;
    cout<<"Price per room $ "<<price_per_room<<endl;
    cout<<"cost: $"<<price_per_room*number_of_rooms<<endl;
    cout<<"tax: $"<<price_per_room*number_of_rooms*sales_tax<<endl;
    cout<<"=================="<<endl;
    cout<<"total estimate $"<<(price_per_room*number_of_rooms)+(price_per_room*number_of_rooms*sales_tax)<<endl;
    cout<<"the estimate is valid for "<<estimate_expiry<<" days"<<endl;
    cout<<endl;

    return 0;
}