/*

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     deriving classes from existing classes  %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% c++ derivation syntax

    class Base {
        //base class members
    };

    class derived: access-specifier Base {
        // derived class members
    };

    access-specifier can be: public, private or protected

% types of inheritance in c++

    - public
        & Most common
        & establish ' is a ' relationship between derived and base classes
    
    - private and protected
        & establishes ' derived class HAS A base class ' relationship
        & ' is implemented in terms of ' relationship
        & different from composition

% c++ derivation syntax

        class Account {
            //account class members ...
        };
        
        class Savings_Accounts: public Account {
            //Savings_Accounts class members ...
        }

    - Savings_Account ' IS A ' Account

% c++ creating objects

        Account account {};
        Account *p_account = new Account();

        account.deposit(1000.0);
        p_account -> withdraw(200.0)

        delete p_account;

        Savings_Account sav_account {};
        Savings_Account *p_sav_account = new Savings_Account();

        sav_account.deposit(1000.0);
        p_sav_account -> withdraw(200);

        delete p_sav_account;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     protected member and classes access  %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% the protected class member modifier

        class Base {
            protected:
                //protected base class members ...
        }
    
    - accesible from the Base class itself
    - accesible from classes derived from base
    - not accessible by objects of base or derived

        class Base {
            public:
                int a;  //public base class members
            
            protected:
                int b;  //protected Base class members

            private:
                int c;  //privated Base class members
        };
    
% access with public inheritance

        base class              access in derived class
            * public: a             * public:a
            * protected: b          * protected: b
            * private: c        	* c : no access

% access with protected inheritance

        base class              access in derived class
            * public: a             * protected:a
            * protected: b          * protected: b
            * private: c        	* c : no access

% access with private inheritance

        base class              access in derived class
            * public: a             * private:a
            * protected: b          * private: b
            * private: c        	* c : no access



*/

#include <iostream>

using namespace std;

class Base{
    // note friend of Base have access to all
    public:
        int a {0};
        void display(){
            std::cout<<a<<", "<<b<<", "<<c<<endl; //member method has access to all
        }
    protected:
        int b {0};
    private:
        int c {0};
};

class Derived:public Base {
    // note friend of Derived have access only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible

    public:
        void access_base_members(){
            a=100; //ok
            b=200; //ok
            //c=300; // not accessible
        }

};

int main(){
    cout<<"=== Base member access from base objects ==="<<endl;
    Base base;
    base.a=100;     //ok
    //base.b=100;   // compiler error   
    //base.c=100;   // compiler error

    cout<<"=== Base member access from derived objects ==="<<endl;
    Derived d;
    d.a=100;    // ok
    //d.b=200;    // error
    //d.c=300;    // error

    return 0;
}