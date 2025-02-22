//lesson 45 declaring and initializing variables
// compilation: g++ -pthread -std=c++17 -o 43_52_lesson  43_52_lesson.cpp
// execution ./43_52_lesson 

#include <iostream>

using namespace std;

int main(){

    // char type

    char middle_initial {'J'}; //Notice the single quotes around characters
    cout<<"My middle initial is "<< middle_initial << endl;

    // integer types

    unsigned short int exam_score {55};
    cout<<"My exam score was "<<exam_score<<endl;

    int countries_represented {65};
    cout<<"There were "<<countries_represented<<" countries represented in my meeting"<<endl;

    long people_in_florida {20610000};
    cout<<"there are about "<<people_in_florida<<" people in Florida"<<endl;

    long long people_on_earth {7'600'000'000};
    cout<<" there are about "<<people_on_earth<<" people on earth"<<endl;
    
    // floatinf point types

    float car_payment {401.23};
    cout<<" my car payment is "<<car_payment<<endl;

    double pi {3.141592};
    cout<<" PI is "<<pi<<endl;

    long double large_amount {2.7e120};
    cout<<large_amount<<" is a very big number "<<endl;

    // boolean

    bool game_over {false};
    cout<<" the value of game over is "<<game_over<<endl;

    // overflow examples

    short value1 {30000};
    short value2 {1000};
    short product {value1*value2};

    cout<<" the product of "<<value1<<" and "<<value2<<" is "<<product<<endl;

    return 0;
}