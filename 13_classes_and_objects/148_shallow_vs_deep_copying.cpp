/*

&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& shallow vs deep copying constructor 
&&&&&&&&&&&&&&&&&&&&&&&&
% consider a class that contains a pointer as a data member
% constructor allocates storage dynamically and initializes the pointer
% destructor release the memory allocated by the constructor
% what happens in the default copy constructor?

&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& default copy constructor 
&&&&&&&&&&&&&&&&&&&&&&&&
% default behavior provided by the compiler generated copy constructor
% memberwise copying of all the object attributes
% each data member is copied from the source object
% the pointer is copied NOT what it points to (shallow copy)
% PROBLEM: when we release the storage in the destructor, the other object still 
    refers to the released storage

*/

#include <iostream>

using namespace std;

class Shallow{
    private:
        int *data;
    public:
        void set_data_value(int d){ *data = d; }
        int get_data_value(){ return *data; }

        //Constructor
        Shallow( int d );

        //copy constructor
        Shallow( const Shallow &source );

        //destructor
        ~Shallow();
};

Shallow::Shallow( int d ){
    data = new int;
    *data = d;
}

Shallow::Shallow( const Shallow &source)
    :data(source.data){
        cout<<"copy constructor - shallow copy"<<endl;
    }

Shallow::~Shallow(){
    delete data;
    cout<<"destructor freeing data"<<endl;
}

void display_shallow(Shallow s){
    cout<<s.get_data_value()<<endl;
}

int main(){

    Shallow obj1 {100};
    display_shallow(obj1);

    Shallow obj2 {obj1};
    obj2.set_data_value(1000);

    cout<<endl;
    return 0;
}
