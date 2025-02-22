#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num {300};

void global_example(){
    cout<<"\nGlobal num is: "<<num<<" in global_example - start "<<endl;
    num*=2;
    cout<<"Global num is: "<<num<<" in global_example - end"<<endl;
}

void local_example( int x ){
    int num {1000}; //local to local_example
    cout<<"\nLocal num is: "<<num<<" in local_example - start "<<endl;
    num=x;
    cout<<" local num is "<<num<<" in local_example -end"<<endl;
}

void static_local_example(){
    static int num {5000}; //define locally
    cout<<"\nLocal static num is "<<num<<" in static_local_example - start"<<endl;
    num+=1000;
    cout<<"local static num is: "<<num<<" in static_local_example - end "<<endl;
}

int main(){

    int num {100}; //local to main
    int num1 {500}; //local to main

    cout<<"local num is: "<<num<<" in main "<<endl;

    {
        int num {200};
        cout<<"local num is: "<<num<<" in inner block in main "<<endl;
        cout<<"inner block in main can see out - num1 is: "<<num1<<endl;
    }

    cout<<"local num is: "<<num<<" in main "<<endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();

    cout<<endl;
    return 0;

}