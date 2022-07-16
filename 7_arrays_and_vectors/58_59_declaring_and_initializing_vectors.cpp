/*

#include <vector>

using namespace std;

vector <char> vowels;

vector <int> test_scores;

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> vowels {'a','e','i','o','u'};

    cout<<vowels[0]<<endl;
    cout<<vowels[4]<<endl;

    //##############################

    vector <int> test_scores {100,98,89}; //initializing a vector

    cout<<"\nTest scores using array syntax: "<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;

    return 0;
}