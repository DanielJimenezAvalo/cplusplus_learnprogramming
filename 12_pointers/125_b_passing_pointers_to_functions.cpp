/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    passing pointers to a function  %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& const and pointers

    & there are several ways to qualify pointers using const

        * pointers to constant

            - the data pointed to by the pointers is constant and cannot be changed

            - the pointer itself can change and point somewhere else

                    int high_score {100};
                    int low_score {65};

                    const int *score_ptr { &high_score };

                    *score_ptr = 86;            // ERROR
                    score_ptr = &low_score;     // OK

        * constant to pointer

            - the data pointed to by the pointer can be changed

            - the pointer itself cannot change and point somewhere else

                    (...)

                    int *const score_ptr { &high_score };

                    *score_ptr = 86;            // OK
                    score_ptr = &low_score;     // ERROR

        * constant pointers to constants

& pass-by-reference with pointer parameters

    * pass-by-reference with pointers - defining the function

                void double_data(int *int_ptr);

                void double_data(int *int_ptr) {
                    *int_ptr *= 2    // *int_ptr = *int_ptr * 2 
                }

    * pass-by-reference with pointers - calling the function

                int main(){

                    int value {10};

                    cout<<value<<endl;  // 10

                    double_data( &value );

                    cout<<value<<endl;  // 20
                }

& we can use pointer and the dereference operator to achieve pass-by-reference

& the function parameter is a pointer

& the actual parameter can be a pointer or address of a variable 

*/


#include<iostream>
#include<string>
#include<vector>

using namespace std;

void swap( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int x {100}, y {200};
    
    cout<<"\nx: "<<x<<endl; // x: 100
    cout<<"y: "<<y<<endl;   // y: 200

    swap( &x, &y);

    cout<<"\nx: "<<x<<endl; // x: 200
    cout<<"y: "<<y<<endl;   // y: 100

    cout<<endl;
    return 0;
}
