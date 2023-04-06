#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int lenght {}, width {}, height{};
    double base_cost {2.50};

    const int tier1_threshold {100}; //volume
    const int tier2_threshold {500};

    int max_dimension_lenght {10};

    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};

    int package_volume{};

    cout<<"Welcome to the package cost calculator"<<endl;
    cout<<"Enter lenght, width, and height of the package separated by space: ";
    cin>>lenght>>width>>height;

    if (lenght>max_dimension_lenght || width>max_dimension_lenght || lenght>max_dimension_lenght){
        cout<<"sorry package rejected - dimension exceeded "<<endl;
    }else{
        double package_cost {};
        package_volume=lenght*width*height;
        package_cost=base_cost;

        if(package_volume>tier2_threshold){
            package_cost += package_cost * tier2_surcharge;
            cout<<" adding tier2 surcharge "<<endl;
        }else if(package_volume>tier1_threshold){
            package_cost += package_cost*tier1_surcharge;
            cout<<" adding tier1 surcharge "<<endl;
        }

        cout<<fixed<<setprecision(2); //prints dollares nicely
        cout<<"the volume of your package is: "<<package_volume<<endl;
        cout<<"your package will cost $"<<package_cost<<" to_ship "<<endl;

    }

    return 0;

}