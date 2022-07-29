#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//we must define default values in all the parameters
double calc_cost( double base_cost=100, double tax_rate = 0.06, double shipping = 3.50 );

void greeting(string name, string prefix="Mr.", string suffix = "");


//##########################

double calc_cost( double base_cost, double tax_rate, double shipping ){
    return base_cost += base_cost*tax_rate +shipping;
}

void greeting(string name, string prefix, string suffix){
    cout<<"Hello "<<prefix + " "+name+" "+suffix<<endl;
}

int main(){
    
    double cost {0};
    cost = calc_cost(100.0,0.08,4.25);

    cout<<fixed<<setprecision(2);
    cout<<"cost is: "<<cost<<endl;

    cost = calc_cost(100.0,0.08);
    cout<<"cost is: "<<cost<<endl;

    cost=calc_cost(200.0);
    cout<<"cost is "<<cost<<endl;

    cost=calc_cost();
    cout<<"cost is "<<cost<<endl;

    greeting("daniel jimenez","MSC","Ing");
    greeting("frank miller","MD");

    cout<<endl;
    return 0;

}