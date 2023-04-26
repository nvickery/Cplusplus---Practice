// Game Stats
// Declaring and intializig Variables

#include <iostream>
using namespace std;

int main()
{
    // Declare Variables
    int score;
    double distance;
    char playAgain; // "char" type is for single 
    bool shieldup;

    short lives, alienskilled;

    // Initialize Variables
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldup = true;
    lives = 3;
    alienskilled = 10;

    double enginetemp = 6572.89;

    // Display Values

    cout << "\nScore: " << score << endl;
    cout << "Distance: " << distance << endl;
    cout << "shieldup?: " << shieldup << endl; // Boolean Value cout's as "1"
    cout << "lives: " << lives << endl;
    cout << "enginetemp: " << enginetemp << endl;
    cout << "alienskilled: " << alienskilled << endl;

    // User-initialized variable
    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "Fuel: " << fuel << endl;

    // Defining a new variable type
    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\tBonus: " << bonus << endl;

    score += 100;
    cout << "Score: " << score << endl;

    lives = 3;
    ++lives;
    cout << "Lives: " << lives << endl;

    lives = 3;
    lives++;
    cout << "Lives: " << lives << endl;    

    // Increment Operators
    lives = 3;
    bonus = ++lives*10;
    cout << "Lives, Bonus: " << lives << "," << bonus << endl;
    
    lives = 3;
    bonus = lives++*10;
    cout << "Lives, Bonus: " << lives << "," << bonus << endl;

    // Wrap - around for integers
    score = 4294967295;
    ++score;
    cout << "Score: " << score << endl;


    return 0;
}