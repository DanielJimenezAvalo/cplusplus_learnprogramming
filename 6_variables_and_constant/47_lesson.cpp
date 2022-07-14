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

    





    return 0;
}