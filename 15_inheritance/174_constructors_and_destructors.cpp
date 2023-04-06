/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     constructors and destructors  %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% constructors and class initialization

    - A Derived class inherits from its Base class

    - the Base part of the Derived class MUST be initialized BEFORE
    the Derived class is initialized

    - when a Derived object is created
        * Base class constructor executes then
        * Derived class constructor executes 

% destructor

    - class destructor are invoked in the reverse order as constructor

    - Derived part of the Derived class MUST be destroyed BEFORE the 
    Base class destructor is invoked

    - when a Derived object is destroyed
        * Derived class destructor execures then
        * Base class destructor executes
        * Each destructor should free resources allocated in it's own constructors

        class Base {
            public:
                Base() { cout<<"Base constructor"<<endl;}
                ~Base(){ cout<<"Base destructor"<<endl;}
        };

        class Derived : public Base {
            public:
                Derived() { cout<<"Derived constructor"<<endl;} 
                ~Derived() { cout<<"Derived destructor"<<endl;}
        };

        >>> output:
            Base base   --->    Base constructor
                                Base destructor

            Derived derived     --->    Base constructor
                                        Derived constructor
                                        Derived destructor
                                        Base destructor  
        >>>

% constructors and class initialization

    - A Derived class does NOT inherit automatically:
        * Base class constructor
        * Base class destructor
        * Base class overloaded assignment operators
        * Base class friend functions
    
    - however, the derived class constructors, destructors and overloaded
    assignment operator can invoke the base-class versions

*/

#include <iostream>

using namespace std;

class Base {
    private:
        int value;
    public:
        Base():value{0}{cout<<"Base no-args constructor"<<endl;}
        Base(int x):value{x}{cout<<"Base (int) overloaded constructor"<<endl;}
        ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived : public Base {
    private:
        int double_value;
    public:
        Derived() : double_value {0}{cout<<"Derived no-args constructor"<<endl;}
        Derived(int x):double_value{x*2}{cout<<"Derived(int) overloaded constructor"<<endl;}
        ~Derived(){cout<<"Derived destructor"<<endl;}
};

int main(){
    //Base b;
    //Base b {100};

    //Derived d;
    Derived d {1000};

    return 0;
}