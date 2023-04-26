// Dice Roller and random number generator (seeds)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Initializes Random Number Seed 

    int randomNumber = rand(); //generates random number from seed

    int die = (randomNumber % 6) + 1; // generates number between 1 and 6
    // Not a balanced method for generating random numbers... but that's ok

    cout << "You rolled a " << die << endl;

    cout << "The max value for random numbers in seed is " << RAND_MAX << endl;
    cout << "The current time is " << time(0) << " seconds" << endl;

    return 0;
}