/*
&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& operator overloading
&&&&&&&&&&&&&&&&&&&&&&&&
··················································································
% what is operator overloading?
    - using traditional operators such as +, =, *, etc. with user-defined types 
    - allows user defined types to behave similar to built in types
    - can make code more readable and writeble
    - not done automatically (except for the assignment operator). they must be explicitly defined

% what operators can be overloaded?
    - tha majority of c++ operators can be overloaded
    - this can be overload: operators -> :: (asignment operator), 
        :? (conditional operator), .* (pointer to member operator), ., sizeof
    
% some basic rules
    - precedence and associativity cannot be changed
    - 'arity' cannot be changed (i.e. can't make the division operator unary, division is for two members)
    - can't overload operators for primitive types (e.g. int, double, etc)
    - can't create new operators
    - [], (), ->, and the assigment operator (=) must be declared as member methods
    - other operators can be declared as member methods or global functions

··················································································
% Copy assignment operator (=)
    - C++ provides a default assignment operator used for assigning one object to another
        Mystring s1 {"Frank"};
        Mystring s2 = s1;       //NOT assignment
                                //same as Mystring s2{s1}
        s2 = s1                 //assignment
    
    - Default is memberwise assignment (shallow copy)
        if we have raw pointer data member we must deep copy

% overloading the copy assigment operator (deep copy)
        
        Type &Type::operartor=(const Type &rhs);
        Mystring &Mystring::operator=(cosnt Mystring &rhs);
        s2 = s1;                // we write this
        s2.operator=(s1)        //operator= method is called

··················································································
% Move assignment operator (=)

    - c++ will use the copy assignment operator if necessary
        Mystring  s1;
        s1 = Mystring {"Frank"}; // move assignment 

    - if we have raw pointer we should overload the move assignment operator for efficiency

% overloading the move assignment operator

        Type &Type::operator=(Type &&rhs);

        Mystring &Mystring::operator=(Mystring &&rhs);
        s1=Mystring{"Joe"};     //move operator= called
        s1="Frank";             //move operator= called
        
..................................................................................
%operator overloading unary operators as member methods (++, --, -, !)

        ReturnType Type::operatorOp();

        Number Number::operator-() const;
        Number Number::operator++();    //pre - increment
        Number Number::operator++(int); //post - increment
        bool Number::operator!() const;

% binary operators as a member methods (+,-,==,!=,<,>, etc.)

        ReturnType Type::operatorOp(const Type &rhs);

        Number Number::operator+(const Number &rhs) const;
        Number Number::operator-(const Number &rhs) const;
        bool Number::operator==(const Number &rhs) const;
        bool Number::operator<(const Number &rhs) const;

..................................................................................
%unary operators as global functions (++, --, -, !)

        ReturnType operatorOp(Type &obj);

        Number operator-(const Number &obj);
        Number operator++(Number &obj);     //pre-increment
        Number operator++(Number &obj, int);     //post-increment
        bool operator!(const Number &obj);

%binary operators as global functions (+,-,==,!=,<,>,etc)

        ReturnType operatorOp(const Type &lhs, const Type &rhs);

        Number operator+(const Number &lhs, const Number &rhs);
        Number operator-(const Number &lhs, const Number &rhs);
        bool operator==(const Number &lhs, const Number &rhs);
        bool operator<(const Number &lhs, const Number &rhs);

..................................................................................
%steram insertion and extraction operators (<<, >>)

Doesn't make sense to implement as member methods
    - Left operant must be a user-defined class
    - not the way we normally use these operators

% stream insertion operator (<<)

        std::ostream &operator<<(std::ostream &os, cosnt Mystring &obj){
            os<<obj.str;        //if friend function
            // os<<obj.get_str();   //if not a friend function
            return os;
        }

return a reference to the ostream so we can keep inserting 
don't return ostream by value

% stream extraction operator(>>)

        std::istream &operator>>(std::istream &is, Mystring &obj){
            char *buff = new char[1000];
            is>>buff;
            obj = Mystring{buff}; //if you have copy or mov e assignment
            delete [] buff;
            return is;
        }
    
    return a reference to the istream so we can keep inserting
    update the object passed in

*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){

    cout<<boolalpha<<endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout<<"enter the third stooge's first name: ";
    cin>>curly;

    cout<<"the three stooges are "<<larry<<", "<<moe<<" and "<<curly<<endl;

    cout<<"\nEnter the three stooges names separated by a space: ";
    cin>>larry>>moe>>curly;

    cout<<"The three stooges are "<<larry<<", "<<moe<<", and "<<curly<<endl;
    
    return 0;

}