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



*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){

    cout<<boolalpha<<endl;

    Mystring larry{"Larry"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout<<(larry==moe)<<endl;
    cout<<(larry==stooge)<<endl;

    larry.display();
    Mystring larry2 = -larry;
    larry2.display();

    Mystring stooges = larry + "Moe";
    //Mystring stooges = "Larry" + moe;

    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();

    Mystring three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();
    
    return 0;

}