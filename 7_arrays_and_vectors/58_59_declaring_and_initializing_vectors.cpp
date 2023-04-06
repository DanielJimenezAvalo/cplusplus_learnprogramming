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

    //##########  vector sintax

    cout<<"\nTest scores using vector syntax: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    cout<<"\nThere are "<<test_scores.size()<<" scores in the vector"<<endl;

    //##########################

    cout<<"\nEnter 3 test scores: ";
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);

    cout<<"\nUpdated test scores: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    //#############################

    cout<<"\nEnter a test score to add to the vector: ";

    int score_to_add {0};
    cin>>score_to_add;

    test_scores.push_back(score_to_add);

    cout<<"\nEnter a test score to add to the vector: ";

    cin>>score_to_add;

    test_scores.push_back(score_to_add);

    cout<<"\nTest scores are now: "<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;

    //#### 2D vector

    vector <vector<int>> movie_rating {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout<<"\nHere are the movie rating for reviewer #1 using array sintax: "<<endl;
    cout<<movie_rating[0][0]<<endl;
    cout<<movie_rating[0][1]<<endl;
    cout<<movie_rating[0][2]<<endl;
    cout<<movie_rating[0][3]<<endl;

    cout<<"\nHere are the movie rating for reviewer #1 using vector sintax: "<<endl;
    cout<<movie_rating.at(0).at(0)<<endl;
    cout<<movie_rating.at(0).at(1)<<endl;
    cout<<movie_rating.at(0).at(2)<<endl;
    cout<<movie_rating.at(0).at(3)<<endl;

    cout<<endl;

    return 0;
}