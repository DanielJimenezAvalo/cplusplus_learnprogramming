/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    Dynamic memory allocation   %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

* allocation storage from the heap at runtime

    - we often don't know how much storage we need until we need it

    - we can allocate storage for a variable at run time

    - recall c++ arrays

        & we had to explicitly provide the size and it was fixed

        & but vector grow and shrink dynamically

    - we can use pointers to access newly allocated heap storage

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int *int_ptr{nullptr}; //always initialize to null
    int_ptr = new int; //allocate an integer on the heap
    cout<<int_ptr<<endl; // 0x5568b091ceb0 - print allocation of int
    delete int_ptr; //freeze the allocated storage

    size_t size{0}; //size of initialized to 0
    double *temp_ptr{nullptr}; //pointer to a double

    cout<<"how many temps? "; 
    cin>>size;

    temp_ptr = new double [size]; //array of doubles with size "size"


    cout<<temp_ptr<<endl // 0x5568b091ceb0; 

    delete [] temp_ptr; //freeze the allocated storage, doesn't erase the pointer, only delete the variable of the stack




    cout<<endl;
    return 0;
}