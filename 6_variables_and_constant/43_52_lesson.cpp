//lesson 45 declaring and initializing variables
// compilation: g++ -pthread -std=c++17 -o 43_52_lesson  43_52_lesson.cpp
// execution ./43_52_lesson 

#include <iostream>

using namespace std;

int main(){

    int room_width {0};
    int room_length {0};


    cout << "enter the width of the room: ";
    cin>> room_width;

    
    cout << "enter the lenght of the room: ";
    cin>> room_length;

    cout << "the area of the room is " << room_length*room_width << " square feet" << endl;

    return 0;
}