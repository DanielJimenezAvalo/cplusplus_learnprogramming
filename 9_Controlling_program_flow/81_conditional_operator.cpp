#include <iostream>

using namespace std;

int main(){

    /*

    int num {};

    cout<<"enter an integer: ";
    cin>>num;
    if (num%2==0){
        cout<<num<<" is even "<<endl;
    }else {
       cout<<num<<" is odd "<<endl;
    }

    cout<<num<<" is "<< ( (num % 2 == 0)? " even " : " odd " )<<endl;

    */

    int num1{},num2{};


    cout<<"enter 2 integers separeted by spaces: ";
    cin>>num1>>num2;

    if(num1 != num2){
        cout<<" largest: "<< ( (num1>num2)? num1:num2 )<<endl;
        cout<<" smallest: "<< ( (num1<num2)? num1:num2 )<<endl;
    }else{
        cout<<"the number are teh same "<<endl;
    }
    
    cout<<endl;
    return 0;
}