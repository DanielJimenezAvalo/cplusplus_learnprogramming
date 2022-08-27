#include <iostream>
#include "Account.h"

using namespace std;

int main(){

    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0)){
        cout<<"deposit ok"<<endl;
    }else{
        cout<<"deposit not allowed"<<endl;
    }

    if(frank_account.withdraw(500)){
        cout<<"withdraw ok"<<endl;
    }else{
        cout<<"not sufficient funds"<<endl;
    }

    if(frank_account.withdraw(1500)){
        cout<<"withdraw ok"<<endl;
    }else{
        cout<<"not sufficient funds"<<endl;
    }

    cout<<endl;
    return 0;
}