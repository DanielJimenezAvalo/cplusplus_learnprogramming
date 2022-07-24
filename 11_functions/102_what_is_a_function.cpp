#include <iostream>
#include <cmath>

using  namespace std;

int main() {
    double num {};

    cout<<"enter a number (double): ";
    cin>>num;

    cout<<"the sqrt of "<<num<<" is: "<<sqrt(num)<<endl;
    cout<<"the cubed root of "<<num<<" is: "<<cbrt(num)<<endl;

    double power {};
    cout<<"\nEnter a power to raise "<<num<<" to: ";
    cin>>power;
    cout<<num<<" raised to the "<<power<<" power is: "<<pow(num,power)<<endl;

    cout<<endl;
    return 0;
}