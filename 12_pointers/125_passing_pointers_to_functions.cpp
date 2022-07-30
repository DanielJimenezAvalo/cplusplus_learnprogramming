#include <iostream>

using namespace std;

void double_data(int *int_ptr){
    *int_ptr *=2;
}


int main(){

    int value {10};
    int *int_ptr {nullptr};

    cout<<"value: "<<value<<endl;
    double_data(&value); //double_data recieve a direction in form of a pointer and multiplicate *2 the value of the pointer
    cout<<"value: "<<value<<endl;

    cout<<"-----------------------"<<endl;
    int_ptr = &value; // int_ptr is a pointer to the direction of value
    double_data(int_ptr); //double_data recieve a direction and multipicate the value of the pointer
    cout<<"value: "<<value<<endl;
    

    cout<<endl;
    return 0;

}