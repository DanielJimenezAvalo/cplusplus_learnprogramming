#include <iostream>

using namespace std;

int main(){
    int counter {10};
    int result {0};

    cout<<"counter: "<<counter<<endl;

    counter=counter+1;
    cout<<"counter: "<<counter<<endl;

    counter++;
    cout<<"counter: "<<counter<<endl;

    ++counter;
    cout<<"counter: "<<counter<<endl;

    return 0;
}