// Lost Fortune - Chapter 1 Game
// A personalized adventure

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const int GOLD = 900;
    int adventurers, dead, survivors;
    string leader;

    // User Inputs
    cout << "\nWelcome to Lost Fortune\n\n";
    cout << "Let's get your Party registered with the guild...\n";

    cout << "How many adventurers are in your party? ";
    cin >> adventurers;

    cout << "And how many of you have ventured from here before? ";
    cin >> dead;
    dead--;

    survivors = adventurers - dead; // at least one must survive
    cout << "And what is the last name of your Leader? "; 
    cin >> leader;

    // The story begins
    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "in search of the lost treasure within the ancient Dwarven Mines. ";
    cout << "The party of adventurers was lead by the reknowned rogue, " << leader << ".\n";

    cout << "\nAlong the way, the party stumbled upon a brood of poisonous drakes.";
    cout << "The adventurers fought bravely under the command of " << leader;
    cout << ", and the drakes were finally vanquished, but, at a cost...";
    cout << " Of the brave adventurers, " << dead << " lost their lives, ";
    cout << "leaving the party's numbers at " << survivors << ".\n\n";

    cout << "With hope fading, the party's remant teetered on the edge of failure.";
    cout << " Resting but for a moment, the remnant happened upon the treasure with a joyous shout!";
    cout << " With victory in hand, the party split the " << GOLD << " gold pieces. ";
    cout << leader << " held on to the extra " << (GOLD%survivors);
    cout << " pieces to honor the fallen comrades.\n\n";


    return 0;

}