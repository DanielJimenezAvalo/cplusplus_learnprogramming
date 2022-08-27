/*
&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& user provided copy constructor 
&&&&&&&&&&&&&&&&&&&&&&&&
% create a copy of the pointed-to data (not only the pointer without the data)
% each copy will have a pointer to unique storage in the heap
% deep copy when you have a raw pointer as a class data member 
*/

#include <iostream>

using namespace std;

class Deep{
    private:
        int *data; //pointer
    public:
        void set_data_value(int d){ *data = d; }
        int get_data_value(){ return *data; }

        //constructor
        Deep(int d);

        //copy constructor
        Deep( const Deep &source );

        //destructor
        ~Deep();
};

//constructor
Deep::Deep( int d ){
    data = new int; //allocate storage
    *data = d;
}

/*
Shallow::Shallow( const Shallow &source)
    :data(source.data){
        cout<<"copy constructor - shallow copy"<<endl;
    }
*/

//deep copy constructor - delegationg constructor
Deep::Deep( const Deep &source )
    :Deep { *source.data }{
        cout<<"copy constructor - deep copy "<<endl;
    }

//destructor
Deep::~Deep(){
    delete data;
    cout<<"destructor freeing data"<<endl;
}

void display_deep( Deep s ){
    cout<<s.get_data_value()<<endl;
    /*
    when s goes out of scope the destrcutor is called and releases data.
    NOT PROBLEM: since the storage being releases is unique to s
    */
}

int main(){
    Deep obj1 {100};
    display_deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);

    cout<<endl;
    return 0;
}

