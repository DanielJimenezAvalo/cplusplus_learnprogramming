#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int scores[]{100,95,89,68,-1};
    int *score_ptr {scores};

    while(*score_ptr != -1){
        cout<<"*score_ptr: "<<*score_ptr<<endl;
        score_ptr++;//next position of the array
    }

    cout<<"\n-------------------"<<endl;
    score_ptr = scores;
    while (*score_ptr != -1){
        cout<<"*score_ptr: "<<*score_ptr++<<endl;//we use first *score_ptr and after ++
    }

    cout<<"\n-------------------"<<endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout<<boolalpha;
    cout<<p1<<"=="<<p2<<":"<<(p1==p2)<<endl; //false
    cout<<p1<<"=="<<p3<<":"<<(p1==p3)<<endl; //true

    cout<<p1<<"=="<<p2<<":"<<(*p1==*p2)<<endl; //true
    cout<<p1<<"=="<<p3<<":"<<(*p1==*p3)<<endl; //true

    p3 = &s3; //point to james
    cout<<p1<<"=="<<p3<<":"<<(*p1==*p3)<<endl; //false

    cout<<"\n-------------------"<<endl;
    char name[]{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    cout<<"in the string "<<name<<", "<<*char_ptr2<<" is "<<(char_ptr2-char_ptr1)<<"  characters aways from "<<*char_ptr1<<endl;
    


    cout<<endl;
    return 0;

}
