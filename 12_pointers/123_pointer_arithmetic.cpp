/*

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    pointer arithmetic  %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& pointers can be used in
    - assignment expressions
    - arithmetic expresions
    - comparision expresions

& c++ allows pointer arithmetic

& pointer arithmetic only makes sense with arrays

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    ++ and --  %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& (++) increments a pointer to point to the next array element

        int_ptr++;

& (--) decrements a pointer to point to the previous array element

        int_ptr--;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    + and -  %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& (+) increment pointer by n*sizeof(type)

        int_ptr += n    ;   or      int_ptr = int_ptr + n   ;

& (-) decrement pointer by n*sizeof(type)

        int_ptr -= n    ;   or      int_ptr = int_ptr - n   ;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    substracting two pointers  %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& determine the number of elements between the pointers

& both pointers must point to the same data type

        int n = int_ptr2 - int_ptr1;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    comparing two pointers  == and !=  %%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& determine if two pointers point to the same location

    - does NOT compare the data where they point!

    - you must compare the referenced pointers

*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int scores[]{100,95,89,68,-1};
    int *score_ptr {scores};

    while(*score_ptr != -1){
        cout<<"*score_ptr: "<<*score_ptr<<endl;
        score_ptr++;// next position of the array
        /*
            *score_ptr: 100
            *score_ptr: 95
            *score_ptr: 89
            *score_ptr: 68
        */
    }

    cout<<"\n-------------------"<<endl;
    score_ptr = scores;
    while (*score_ptr != -1){
        cout<<"*score_ptr: "<<*score_ptr++<<endl;//we use first *score_ptr and after ++
        /*
            *score_ptr: 100
            *score_ptr: 95
            *score_ptr: 89
            *score_ptr: 68
        */
    }


    cout<<"\n-------------------"<<endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout<<boolalpha;
    cout<<p1<<"=="<<p2<<":"<<(p1==p2)<<endl; //     0x7fff4cf45660==0x7fff4cf45680:false
    cout<<p1<<"=="<<p3<<":"<<(p1==p3)<<endl; //     0x7fff4cf45660==0x7fff4cf45660:true

    cout<<p1<<"=="<<p2<<":"<<(*p1==*p2)<<endl; //   0x7fff4cf45660==0x7fff4cf45680:true
    cout<<p1<<"=="<<p3<<":"<<(*p1==*p3)<<endl; //   0x7fff4cf45660==0x7fff4cf45660:true

    p3 = &s3; //point to james
    cout<<p1<<"=="<<p3<<":"<<(*p1==*p3)<<endl; //   0x7fff4cf45660==0x7fff4cf456a0:false

    cout<<"\n-------------------"<<endl;
    char name[]{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    cout<<"in the string "<<name<<", "<<*char_ptr2<<" is "<<(char_ptr2-char_ptr1)<<"  characters aways from "<<*char_ptr1<<endl;
    //  in the string Frank, n is 3  characters aways from F
    
    cout<<endl;
    return 0;

}
