#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int score {100};
    int *score_ptr {&score};



    cout<<"\nvalue of score is "<<score<<endl;
    cout<<"address of score is "<<&score<<endl;
    cout<<"value of score_ptr is "<<score_ptr<<endl;
    cout<<"address of score_ptr is "<<&score_ptr<<endl;

    cout<<"value in the pointer: "<<*score_ptr<<endl;

    *score_ptr=200; //dereferening a pointer (change the value in the pointer)


    cout<<"\nnew value of score is "<<score<<endl; //value change after dereferencing the pointer
    cout<<"new address of score is "<<&score<<endl; //addrees doesn't change
    cout<<"new value of score_ptr is "<<score_ptr<<endl; //value doesn't change due adrees of values doesn't change
    cout<<"new address of score_ptr is "<<&score_ptr<<endl; //address of pointer doesn't change 

    cout<<"new vale in the pointer after dereferenciang "<<*score_ptr<<endl; //the value change because of dereferencing 

    //#############################################

    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr { &high_temp };

    cout<<"\nvalue of high_temp is "<<high_temp<<endl;
    cout<<"address of high_temp is "<<&high_temp<<endl;

    cout<<"\nvalue of low_temp is "<<low_temp<<endl;
    cout<<"address of low_temp is "<<&low_temp<<endl;

    cout<<"\nvalue of temp_ptr is "<<temp_ptr<<endl;
    cout<<"address of temp_ptr is "<<&temp_ptr<<endl;
    
    cout<<"\nthe value in the pointer is: "<<*temp_ptr<<endl;

    temp_ptr = &low_temp; //changing the value of the pointer (address of the value)

    cout<<"\nnew value of high_temp is "<<high_temp<<endl;
    cout<<"new address of high_temp is "<<&high_temp<<endl;

    cout<<"\nnew value of low_temp is "<<low_temp<<endl;
    cout<<"new address of low_temp is "<<&low_temp<<endl;

    cout<<"\nnew value of temp_ptr is "<<temp_ptr<<endl;
    cout<<"new address of temp_ptr is "<<&temp_ptr<<endl;

    cout<<"\nnew the value in the pointer is: "<<*temp_ptr<<endl;

    //#############################################

    string name{"frank"};
    string *string_ptr {&name};

    cout<<"\n*string_ptr: "<<*string_ptr<<endl;

    name = "daniel";

    cout<<"*string_ptr: "<<*string_ptr<<endl;

    cout<<"//-----------------------------------------"<<endl;

    vector<string> stooges {"curly","larry","moe"};
    vector<string> *vector_ptr {nullptr};

    vector_ptr=&stooges;

    cout<<"first stooge: "<<(*vector_ptr).at(0)<<endl;

    cout<<"stooges: ";

    for (auto stooge: *vector_ptr){
        cout<<stooge<<" ";
    }
    cout<<endl;

    cout<<endl;
    return 0;
}