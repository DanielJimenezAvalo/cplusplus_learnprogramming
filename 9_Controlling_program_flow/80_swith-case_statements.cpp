#include <iostream>

using namespace std;

int main(){
    
    char letter_grade {};

    cout<<"Enter the letter grade you expect on teh exam: ";
    cin>>letter_grade;

    switch (letter_grade) {
        case 'a':
        case 'A':
            cout<<"you need a 90 or above, study hard!"<<endl;
            break;
        case 'b':
        case 'B':
            cout<<"you need 80-89, go study!"<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"you need 70-79 for an average grade"<<endl;
            break;
        case 'd':
        case 'D':
            cout<<"all you need is 60-69"<<endl;
            break;
        case 'f':
        case 'F':
            cout<<"xxxx"<<endl;
            break;
        default:
            cout<<"Sorry, not a valid grade"<<endl;
    } 

    return 0;

}