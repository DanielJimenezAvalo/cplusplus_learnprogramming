/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%    What is a reference %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

& an alias for a variable

& must be initialized to a variable when declared

& cannot be null

& once initialized cannot de made to refer to a different variable

& very useful as function paramaters 

& might be helpful to think of a reference as a constant pointer that is automatically dereferenced

& using reference in range-based for loop

                vector<string> stooges {"larry","moe","curly"};

                for (auto str: stooges){
                    str = "Funny"   //change the copy
                }

                for (auto str: stooges){
                    cout<<str<<endl;    // larry,moe,curly
                }

& using reference in range-based for loop

                vector<string> stooges {"larry","moe","curly"};

                for (auto &str: stooges){
                    str = "Funny"   //change the copy
                }

                for (auto str: stooges){
                    cout<<str<<endl;    // Funny,Funny,Funny
                }

*/


#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    int num {100};
    int &ref {num};

    cout<<num<<endl;    //100
    cout<<ref<<endl;    //100

    num=200;
    cout<<"\n-----------------------"<<endl;
    cout<<num<<endl;    //200
    cout<<ref<<endl;    //200

    ref=300;
    cout<<"\n-----------------------"<<endl;
    cout<<num<<endl;    //300   
    cout<<ref<<endl;    //300

    cout<<"\n-----------------------"<<endl;
    vector<string> stooges {"curly","larry","moe"};

    for ( auto &str: stooges ){
        str="Funny";    // str is a reference to each vector element
    }
    
    for ( auto const &str: stooges ){   //  notice we are using const
        cout<<str<<endl;                //  now the vector elements have changed

    /*
        Funny
        Funny
        Funny
    */
    }


    cout<<endl;
    return 0;
}