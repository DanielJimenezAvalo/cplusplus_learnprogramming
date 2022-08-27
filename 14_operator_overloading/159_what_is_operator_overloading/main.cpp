/*
&&&&&&&&&&&&&&&&&&&&&&&&
&&&&& operator overloading
&&&&&&&&&&&&&&&&&&&&&&&&
% what is operator overloading?
    - using traditional opersators such as +, =, *, etc. with user-defined types 
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
*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
    Mystring empty;         //no -arg constructor
    Mystring larry("Larry"); //overloaded constructor
    Mystring stooges {larry}; //copy constructor

    empty.display();
    larry.display();
    stooges.display();

    return 0;
}