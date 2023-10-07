// Demostrate the use of references to alter argument variables
// Kinda allows you to create a function for your primary varibles without redefining w/ function outputs...

#include <iostream> 

using namespace std;

void badSwap(int x, int y); //copies input arguments
void goodSwap(int& x, int& y); //creates reference to inout arguments and changes original variables
// int badSwapRedef(int x, int y); //how to output 2 values?? only in python!!! ARGHH but that's okay

int main()
{
    int myScore = 500;
    int yourScore = 2000;
    cout << "Original Scores:\n";
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";

    cout << "Calling badSwap()\n";
    badSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    
    cout << "Calling goodSwap()\n";
    goodSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
/*
    myScore = 500;
    yourScore = 2000;
    
    cout << "Original Scores:\n";
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";

    cout << "Calling badSwapRedef()\n";
    myScore, yourScore = badSwapRedef(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
*/
    return 0;
}

void badSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
/*
int badSwapRedef(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    
    return x, y;
}
*/