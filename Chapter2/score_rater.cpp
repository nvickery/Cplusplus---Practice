// Score rater
// If statements

#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        cout << "\nThis should always display!\n\n" << endl;
    
    }
    if (false)
    {
        cout << "This should never display\n\n" << endl;
    }

    int score;
    cout << "Please enter desired score: " << endl;
    cin >> score;

    if (score)
    {
        cout << "at least a score exists\n\n" << endl;
    }
    if (score >= 250)
    {
        cout << "Score: 250+. Nice Job!!\n\n" << endl;
    }
    if (score >= 50)
    {
        cout << "Score: 50+. Nice Job!!\n\n" << endl;
        if (score >= 1000)
        {
            cout << "Score: 1000+. Nice Job!!\n" << endl;
        }
        else if (score >= 500)
        {
            cout << "WAhh wahh. You scored more then 500...\n" << endl;
        }
        else if (score >= 250)
        {
            cout << "Just over 250? You suck\n" << endl;
        }
        else
        {
            cout << "Less then 250? just give up already\n" << endl;;
        }
    }

    return 0;
}