#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int num {10};

    cout<<"value of num is: "<<num<<endl;
    cout<<"sizeof of num is: "<<sizeof(num)<<endl;
    cout<<"address of num is: "<<&num<<endl;

    //#########################

    int *p;
    cout<<"\nValue of p is "<<p<<endl; //garbage because is not initialized
    cout<<"Address of p is "<<&p<<endl;
    cout<<"sizeof of p is "<<sizeof(p)<<endl;

    p=nullptr;
    cout<<"\nValue of p is "<<p<<endl;

    //#########################

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4{nullptr};
    string *p5 {nullptr};

    cout<<"\nsizeof of p1 is "<<sizeof(p1)<<endl;
    cout<<"sizeof of p2 is "<<sizeof(p2)<<endl;
    cout<<"sizeof of p3 is "<<sizeof(p3)<<endl;
    cout<<"sizeof of p4 is "<<sizeof(p4)<<endl;
    cout<<"sizeof of p5 is "<<sizeof(p5)<<endl;

    //#########################

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr=&score;

    cout<<"\nvalue of score is "<<score<<endl;
    cout<<"address of score is "<<&score<<endl;
    cout<<"value of score_ptr is "<<score_ptr<<endl;
    cout<<"address of score_ptr is "<<&score_ptr<<endl;


    cout<<endl;
    return 0;
}