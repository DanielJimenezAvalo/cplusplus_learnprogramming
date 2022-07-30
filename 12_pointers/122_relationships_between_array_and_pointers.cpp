#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int scores[]{100,95,89};

    cout<<"value of scores: "<<scores<<endl;

    int *score_ptr {scores}; //we don't put the & because scores is a matrix and for default the pointer goes to the first element
    cout<<"value of score_ptr: "<<score_ptr<<endl;

    cout<<"\nArray subscript notation ------- "<<endl;
    cout<<"scores[0]: "<<scores[0]<<endl;
    cout<<"scores[1]: "<<scores[1]<<endl;
    cout<<"scores[2]: "<<scores[2]<<endl;

    cout<<"\nPointer subscription notation ------- "<<endl;
    cout<<"score_ptr[0]: "<<score_ptr[0]<<endl;
    cout<<"score_ptr[1]: "<<score_ptr[1]<<endl;
    cout<<"score_ptr[2]: "<<score_ptr[2]<<endl;

    cout<<"\nPointer offset notation ------- "<<endl;
    cout<<"*score_ptr: "<<*score_ptr<<endl;
    cout<<"*(score_ptr+1): "<<*(score_ptr+1)<<endl;
    cout<<"*(score_ptr+2): "<<*(score_ptr+2)<<endl;

    cout<<"\nArray offset notation ------- "<<endl;
    cout<<"*scores: "<<*scores<<endl;
    cout<<"*(scores+1): "<<*(scores+1)<<endl;
    cout<<"*(scores+2): "<<*(scores+2)<<endl;

    cout<<endl;
    return 0;
}
