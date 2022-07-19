/*

prueba para github

*/

#include <iostream>

using namespace std;

int main(){
    
    int total {};

    int num1 {}, num2 {}, num3 {};

    const int count {3};

    cout<<"enter 3 integer separed by spaces: ";

    cin>>num1>>num2>>num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average=static_cast<double>(total)/count;

    cout<<"the 3 numbers were: "<<num1<<","<<num2<<","<<num3<<endl;

    cout<<"the sum of the numbers is: "<<total<<endl;

    cout<<"the average of the numbers is: "<<average<<endl;

    cout<<endl;

    return 0;
}
