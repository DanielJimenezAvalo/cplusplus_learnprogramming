#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num){
    num=1000;
}

void pass_by_value2(string s){
    s="changed";
}

void pass_by_value3(vector<string> v){
    v.clear();
}

void print_vector(vector<string> v){
    for (auto s: v){
        cout<<s<<" ";
    }
    cout<<endl;
}

int main(){
    int num {10};
    int another_num {10};

    cout<<"num before calling pass by value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass by value1: "<<num<<endl;

    cout<<"\nanother_num before calling pass_by_value1: "<<another_num<<endl;
    pass_by_value1(another_num);
    cout<<"another_num after calling pass_by_value1: "<<another_num<<endl;

    string name {"Daniel"};
    cout<<"\nname before calling pass_by_value2: "<<name<<endl;
    pass_by_value2(name);
    cout<<"name after calling pass_by_value2: "<<name<<endl;

    vector<string> stooges{"larry","moe","curly"};
    cout<<"\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout<<"stooges before calling pass_by_value3: ";
    print_vector(stooges);

    cout<<endl;
    return 0;



}