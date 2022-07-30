
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int *int_ptr{nullptr}; //always initialize to null
    int_ptr = new int; //allocate an integer on the heap
    cout<<int_ptr<<endl; //print allocation of int
    delete int_ptr; //freeze the allocated storage

    size_t size{0}; //size of initialized to 0
    double *temp_ptr{nullptr}; //pinter to a double

    cout<<"how many temps? "; 
    cin>>size;

    temp_ptr = new double [size]; //array of doubles with size "size"


    cout<<temp_ptr<<endl; 

    delete [] temp_ptr; //freeze the allocated storage, doesn't erase the pointer, only delete the variable of the stack




    cout<<endl;
    return 0;
}