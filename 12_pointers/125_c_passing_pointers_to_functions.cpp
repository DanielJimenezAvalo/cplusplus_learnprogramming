#include<iostream>
#include<string>
#include<vector>

using namespace std;

void display( vector<string> *v){ //type of pointer
    //(*v).at(0) = "Funny";

    for ( auto str: *v){
        cout<<str<<" ";
    }
    cout<<endl;
    
    //v = nullptr;
}


void display( int *array, int sentinel){
    while ( *array != sentinel){
        cout<<*array++<<" ";
    }
    cout<<endl;

}


int main(){

    int x {100}, y {200};
    
    cout<<"------------------"<<endl;
    vector<string> stooges {"curly","larry","moe"};
    display(&stooges);

    cout<<"------------------"<<endl;
    int scores[]{100,98,97,79,85,-1};
    display(scores,-1);

    cout<<endl;
    return 0;
}