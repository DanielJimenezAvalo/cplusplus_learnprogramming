#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    int num {100};
    int &ref {num};

    cout<<num<<endl;
    cout<<ref<<endl;

    num=200;
    cout<<"\n-----------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    ref=300;
    cout<<"\n-----------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;

    cout<<"\n-----------------------"<<endl;
    vector<string> stooges {"curly","larry","moe"};

    for ( auto &str: stooges ){
        str="Funny";
    }

    for ( auto const &str: stooges ){
        cout<<str<<endl;
    }


    cout<<endl;
    return 0;
}