// High Scores - demonstrate algorithms

#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    // Generate vector and const_iterator (because no changes are required)
    vector<int>::const_iterator iter;
    cout << "Creating List of scores... please hold\n";
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(7500);
    scores.push_back(3500);

    cout << "High Scores: \n";
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    // Finding an element in vector
    cout << "\nFinding a score.";
    int score;
    cout << "\nPlease enter desired score to search: ";
    cin >> score;
    iter = find(scores.begin(), scores.end(), score);
    if (iter != scores.end())
    {
        cout << "Score found!!\n";
    }
    else 
    {
        cout << "Error 4o4: Score not found\n";
    }
    
    // Randomizing elements
    cout << "\nRandomizing Scores...";
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(), scores.end()); //random seed
    cout << "High Scores: \n";
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    // Sorting Elements ()
    cout << "\nSorting Elements...\n";
    sort(scores.begin(),scores.end());
    cout << "High Scores: \n";
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    return 0;
}