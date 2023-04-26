// Game Stats 3.0
// Doemonstrating Constants

#include <iostream>
using namespace std;

int main()
{
    const int ALIEN_POINTS = 150; // Constant variables are capatilized (Common Convention)
    int aliensKilled = 10; 
    int score = aliensKilled*ALIEN_POINTS;
    cout << "Score: " << score << endl;
    // Enumeration: starts by giving a value of "0" and increases 1 for each variable in set
    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATBLE}; // so NOVICE = 0, EASY = 1, NORMAL = ...
    // Set a variable with enumerator type and variable "myDifficulty" is limited to the 5 (0-4) difficulty options
    difficulty myDifficulty = EASY;

    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50}; // BOMBER_COST defaults to 26 (FIGHTER_COST + 1)
    shipCost myShipCost = BOMBER_COST;
    cout << "\nUpgrading my ship to a Cruiser will cost: " << (CRUISER_COST-myShipCost) << " Resource Points.\n";

    return 0;
}