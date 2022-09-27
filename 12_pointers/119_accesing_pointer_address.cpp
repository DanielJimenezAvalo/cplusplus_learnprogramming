/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     what is a pointer ?    %%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% a variable
    - whose value is an address

% what can be at that address
    - another variable
    - a function

% pointers point to variable or functions?

% to use the data that the pointer is pointing to you must know its type

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     why use pointers ?    %%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% can't i just use the variable or function itself?

    - Yes but not always

        & inside functions, pointers can be used to access data that are defined outside the function
            * Those variables may not be in scope so you can't access them by their name
        
        & pointers can be used to operate on arrays very efficiently

        & we can allocate memory dynamically on the heap or free store
            * this memory doesn't even have a varibale name
            * the only way to get to it is via pointer
        
        & With Object Oriented pointers are how polymorphism works!

        & can access specific address in memory
            * useful in embedded and systems applications

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     declaring pointers    %%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% variable_type *pointer_name;

% initializing pointer varibales to 'point nowhere'

    - variable_type *pointer_name {nullptr};

        & int *int_ptr {nullptr};

    - always initialize pointers

    - uninitializing pointers contain garbage data and can 'point anywhere'

    - initializing to zero or nullptr (c++ 11) represents address zero
        & implies that the pointer is 'pointing nowhere'

    - if you don't initialize a pointer to point to a variable or function then you should
    initialize it to nullptr to ' make it null '

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     accesing pointers address    %%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

- & the address operator 

    % variables are stored in unique address

    % unary operator 

    % evaluate to the address of its operand
        * operand cannot be a constant or expression that evaluates to temp values

- sizeof a pointer variable 

    % all pointers in a program have the same size

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%     storing an address in pointer variable    %%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

- typed pointers 

    % the compiler will make sure that the address stored in a pointer variable is 
    of the correct type

        int score {10};
        double high_temp {100.7};

        int *score_ptr {nullptr};

        score_ptr = &score; // ok
        score_ptr = &high_temp; // compile error

- the address operator 

    % pointers are variables so they can change

    % pointers can be null

    % pointers can be uninitilized

*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int num {10};

    cout<<"value of num is: "<<num<<endl;           //10
    cout<<"sizeof of num is: "<<sizeof(num)<<endl;  //4 bytes
    cout<<"address of num is: "<<&num<<endl;        // 0x7ffeacaba230

    //#########################

    int *p;
    cout<<"\nValue of p is "<<p<<endl;          // 0x55aab4bb06e8 - garbage because is not initialized
    cout<<"Address of p is "<<&p<<endl;         // 0x7ffeacaba238
    cout<<"sizeof of p is "<<sizeof(p)<<endl;   // 8 (bytes)

    p=nullptr;                                  // set o to point nowhere
    cout<<"\nValue of p is "<<p<<endl;          // 0

    //#########################

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4{nullptr};
    string *p5 {nullptr};

    cout<<"\nsizeof of p1 is "<<sizeof(p1)<<endl;   //8 (bytes)
    cout<<"sizeof of p2 is "<<sizeof(p2)<<endl;     //8 (bytes)
    cout<<"sizeof of p3 is "<<sizeof(p3)<<endl;     //8 (bytes)
    cout<<"sizeof of p4 is "<<sizeof(p4)<<endl;     //8 (bytes)
    cout<<"sizeof of p5 is "<<sizeof(p5)<<endl;     //8 (bytes)

    //#########################

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr=&score;

    cout<<"\nvalue of score is "<<score<<endl;              // 10
    cout<<"address of score is "<<&score<<endl;             // 0x7ffeacaba234
    cout<<"value of score_ptr is "<<score_ptr<<endl;        // 0x7ffeacaba234
    cout<<"address of score_ptr is "<<&score_ptr<<endl;     // 0x7ffeacaba240
    cout<<"value pointed with pointer is "<<*score_ptr<<endl; // 10


    cout<<endl;
    return 0;
}