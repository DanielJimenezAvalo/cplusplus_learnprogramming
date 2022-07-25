#include <iostream>

using namespace std;

//Function prototypes: definition of the functions
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();
////

const double pi {3.141519}; //define constant

double calc_area_circle(double radius){  //input double with double return
    return pi*radius*radius;
}

double calc_volume_cylinder(double radius, double height){
    return calc_area_circle(radius)*height;
}

void area_circle(){ //function for display cicle area

    double radius {};

    cout<<"\nEnter the radius of the circle: ";
    cin>>radius;

    cout<<"the area of the circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}

void volume_cylinder(){
    
    double radius {};
    double height {};

    cout<<"\nEnter the radius of the cylinder: ";
    cin>>radius;

    cout<<"\nEnter the height of the cylinder: ";
    cin>>height;

    cout<<"volume of the cylinder with radius "<<radius<<"  and height "<<height<<  " is "<<calc_volume_cylinder(radius,height)<<endl;    

}

int main(){

    area_circle();
    volume_cylinder();

    return 0;

}