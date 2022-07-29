#include <iostream>
#include <string>
#include <vector>
//## overloading function is use the same name of the funtion for a different inputs
using  namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num){
    cout<<" printing int: "<<num<<endl;
}

void print(double num){
    cout<<" printing double: "<<num<<endl;
}

void print(string s){
    cout<<" printing string: "<<s<<endl;
}

void print(string s, string t){
    cout<<" printing 2 string: "<<s<<" and "<<t<<endl;
}

void print(vector<string> v){
    cout<<"Printing vector of strings: ";
    for (auto s: v){
        cout<<s + " ";
    }
    cout<<endl;
}

int main(){
    print(100);
    print('A'); //character is always promoted to int should print 65 ASCII (A)
    print(123.5);
    print(123.3F); //float is promoted to a double
    print("C-style string");

    string s {"C++ string"};
    print(s);

    print("C-style string",s);

    vector<string> three_stooges {"larry", "moe", "curly"};
    print(three_stooges);

    cout<<endl;
    return 0;
}