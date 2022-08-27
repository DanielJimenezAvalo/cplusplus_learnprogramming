/*

what is l or r value?
R values is not addressable

&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& Move constructor
&&&&&&&&&&&&&&&&&&&&&&&&
% sometimes when we execute code the compiler creates a unnamed temporary values.

    int total {0};
    total = 100 +200;

    - 100 + 200 is evaluated and 300 stored in a unnamed temp value
    - the 300 is then stored in the vatiable : total
    - then the temp value is discarded

% the same happens with objects as well

&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& When is it useful ?
&&&&&&&&&&&&&&&&&&&&&&&&

% sometimes copy constructors are called manny times automatically due to the copy semantics of C++
% copy constructors doing deep copying can have a significant performance bottleneck
% Move constructor moves an object rather than copy it
% optimal but recommended when you hace a raw pointer


&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& r-value reference
&&&&&&&&&&&&&&&&&&&&&&&&

% used in moving semantics and perfect forwarding
% move semantics is all about r-value reference
% used by move constructor and move assigment operator to efficiently move an object rather than copy it
% R-value reference operator (&&)

    int x {100}

        int &l_ref = x;     // l-value reference
        l_ref = 10;         //change x to 10

        int &&r_ref = 200;  // r-value reference
        r_ref = 300;        // change r_ref to 300

        int &&x_ref = x;    // compiler error 

&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& l-value reference
&&&&&&&&&&&&&&&&&&&&&&&&

    int x {100};            // x is an l-value

    void func(int &num);    // A

    func(x)                 // calls A - x is an l-value
    func(200)               // error - 200 is an r-value

&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& r-value reference parameters
&&&&&&&&&&&&&&&&&&&&&&&&

    int x {100};            // x is an l-value

    void func(int &&num);   // B

    func(200)               // calls B - 200 is an r-value
    func(x)                 // error - x is an l-value
*/
#include <iostream>
#include <vector>

using namespace std;

class Move {
    private:
        int *data;
    public:
        void set_data_value(int d) { *data = d;}
        int get_data_value() { return *data;}

        //constructor
        Move(int d);

        //copy constructor 
        Move(const Move &source);

        //Move Constructor
        Move(Move &&source) noexcept;

        //destructor
        ~Move();
};

Move::Move(int d){
    data = new int;
    *data = d;
    cout<<"constructor for: "<< d << endl;
}

//copy ctor
Move::Move(const Move &source)
    :Move{ *source.data} {
        cout<<"copy constructor - deep copy for: "<<*data<<endl;
    }

//Move ctor
Move::Move(Move &&source) noexcept
    :data{source.data} {
        source.data = nullptr;
        cout<<"move constructor - moving resource: "<<*data<<endl;
    }


Move::~Move(){
    if(data != nullptr){
        cout<<"destructor freeing data for: "<<*data<<endl;
    } else {
        cout<<"destructor freeing data for nullptr "<<endl;
    }
    delete data;
}

int main(){
    vector <Move> vec;

    vec.push_back( Move{10} );

    vec.push_back( Move(20) );
    vec.push_back( Move(30) );
    vec.push_back( Move(40) );
    vec.push_back( Move(50) );
    vec.push_back( Move(60) );
    vec.push_back( Move(70) );
    vec.push_back( Move(80) );

    return 0;
}