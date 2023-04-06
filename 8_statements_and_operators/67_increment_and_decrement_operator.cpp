#include <iostream>

using namespace std;

int main(){
    int counter {10};
    int result {0};

    // counter++ and ++counter do the same

    /*

    cout<<"counter: "<<counter<<endl;

    counter=counter+1;
    cout<<"counter: "<<counter<<endl;

    counter++;
    cout<<"counter: "<<counter<<endl;

    ++counter;
    cout<<"counter: "<<counter<<endl;

    

    cout<<"counter: "<<counter<<endl;

    result=++counter; //increment before

    cout<<"counter: "<<counter<<endl;

    cout<<"result: "<<result<<endl;

    

    cout<<"counter: "<<counter<<endl; //10

    result=counter++; //increment after // 10

    cout<<"counter: "<<counter<<endl; //11

    cout<<"result: "<<result<<endl;
    

    cout<<"counter: "<<counter<<endl; //10

    result=++counter +10 ; //increment before 

    cout<<"counter: "<<counter<<endl; //11

    cout<<"result: "<<result<<endl; //21

    */

    cout<<"counter: "<<counter<<endl; //10

    result=counter++ +10 ; //increment before 

    cout<<"counter: "<<counter<<endl; //11

    cout<<"result: "<<result<<endl; //20
    
    return 0;
}