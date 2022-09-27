/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    dereferencing a pointer    %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

* Access the data we are pointing to - dereferencing a pointer

    - if score_ptr is a pointer and has a valid address

    - then you can access the data at the address contained in the score_ptr
    using the dereferencing operator *

*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int score {100};
    int *score_ptr {&score};



    cout<<"\nvalue of score is "<<score<<endl;  // 100
    cout<<"address of score is "<<&score<<endl; // 0x7ffe85dbd2c4
    cout<<"value of score_ptr is "<<score_ptr<<endl; // 0x7ffe85dbd2c4
    cout<<"address of score_ptr is "<<&score_ptr<<endl; // 0x7ffe85dbd2c8

    cout<<"value in the pointer: "<<*score_ptr<<endl;   // 100

    *score_ptr=200; //dereferening a pointer (change the value in the pointer)


    cout<<"\nnew value of score is "<<score<<endl; // 200 - value change after dereferencing the pointer
    cout<<"new address of score is "<<&score<<endl; // 0x7ffe85dbd2c4 - addrees doesn't change
    cout<<"new value of score_ptr is "<<score_ptr<<endl; // 0x7ffe85dbd2c4 - value doesn't change due adrees of values doesn't change
    cout<<"new address of score_ptr is "<<&score_ptr<<endl; // 0x7ffe85dbd2c8 - address of pointer doesn't change 

    cout<<"new vale in the pointer after dereferenciang "<<*score_ptr<<endl; // 200 - the value change because of dereferencing 

    //#############################################

    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr { &high_temp };

    cout<<"\nvalue of high_temp is "<<high_temp<<endl; // 100.7
    cout<<"address of high_temp is "<<&high_temp<<endl; // 0x7ffe85dbd2d0

    cout<<"\nvalue of low_temp is "<<low_temp<<endl; // 37.4
    cout<<"address of low_temp is "<<&low_temp<<endl; // 0x7ffe85dbd2d8

    cout<<"\nvalue of temp_ptr is "<<temp_ptr<<endl; // 0x7ffe85dbd2d0
    cout<<"address of temp_ptr is "<<&temp_ptr<<endl; // 0x7ffe85dbd2e0
    
    cout<<"\nthe value in the pointer is: "<<*temp_ptr<<endl; // 100.7

    temp_ptr = &low_temp; //changing the value of the pointer (address of the value)

    cout<<"\nnew value of high_temp is "<<high_temp<<endl; // 100.7
    cout<<"new address of high_temp is "<<&high_temp<<endl; // 0x7ffe85dbd2d0

    cout<<"\nnew value of low_temp is "<<low_temp<<endl; // 37.4
    cout<<"new address of low_temp is "<<&low_temp<<endl; // 0x7ffe85dbd2d8

    cout<<"\nnew value of temp_ptr is "<<temp_ptr<<endl; // 0x7ffe85dbd2d8
    cout<<"new address of temp_ptr is "<<&temp_ptr<<endl; //0x7ffe85dbd2e0

    cout<<"\nnew the value in the pointer is: "<<*temp_ptr<<endl; // 37.4

    //#############################################

    string name{"frank"};
    string *string_ptr {&name};

    cout<<"\n*string_ptr: "<<*string_ptr<<endl; // frank

    name = "daniel";

    cout<<"*string_ptr: "<<*string_ptr<<endl; // daniel

    cout<<"//-----------------------------------------"<<endl;

    vector<string> stooges {"curly","larry","moe"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr=&stooges;

    cout<<"first stooge: "<<(*vector_ptr).at(0)<<endl; // curly

    cout<<"stooges: "; // curly larry moe

    for (auto stooge: *vector_ptr){
        cout<<stooge<<" ";
    }
    cout<<endl;

    cout<<endl;
    return 0;
}