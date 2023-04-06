/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    relationship between arrays and pointers    %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& the value of an array name is address of the first element in the array

& the value of a pointer variable is an address

& if the pointer points to the same data type as the array element then the pointer 
and array name can be used interchangeably (almost)

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int scores[]{100,95,89};

    cout<<"value of scores: "<<scores<<endl;    //0x7fff884c3a4c

    int *score_ptr {scores}; //we don't put the & because scores is a matrix and for default the pointer goes to the first element
    cout<<"value of score_ptr: "<<score_ptr<<endl;  //0x7fff884c3a4c

    cout<<"\nArray subscript notation ------- "<<endl;
    cout<<"scores[0]: "<<scores[0]<<endl;   // 100
    cout<<"scores[1]: "<<scores[1]<<endl;   // 95
    cout<<"scores[2]: "<<scores[2]<<endl;   // 89

    cout<<"\nPointer subscription notation ------- "<<endl;
    cout<<"score_ptr[0]: "<<score_ptr[0]<<endl;     // 100
    cout<<"score_ptr[1]: "<<score_ptr[1]<<endl;     // 95
    cout<<"score_ptr[2]: "<<score_ptr[2]<<endl;     // 89

    cout<<"\nPointer offset notation ------- "<<endl;
    cout<<"*score_ptr: "<<*score_ptr<<endl;             // 100
    cout<<"*(score_ptr+1): "<<*(score_ptr+1)<<endl;     // 95
    cout<<"*(score_ptr+2): "<<*(score_ptr+2)<<endl;     // 89

    cout<<"\nArray offset notation ------- "<<endl;
    cout<<"*scores: "<<*scores<<endl;           // 100
    cout<<"*(scores+1): "<<*(scores+1)<<endl;   // 95
    cout<<"*(scores+2): "<<*(scores+2)<<endl;   // 89

    cout<<endl;
    return 0;
}
