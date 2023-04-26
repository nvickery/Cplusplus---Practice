// Demonstrates the Game Loop Process

// SETUP
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Initializes Random Number Seed 

    int secretNumber = (rand() % 100) + 1;
    int tries = 0;
    int guess;

    cout << "\tWelcome to Number Guessing\n\n" << endl;
    // SETUP END

    // GAMELOOP START
    do
    {
        // PLAYER INPUT
        cout << "Make a guess: ";
        cin >> guess;

        // UPDATE INTERNALS
        tries++;

        // UPDATE DISPLAY / GAME OVER?
        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low...\n\n";
        }
        else
        {
            cout << "NIce Job!! that's it. It took you " << tries << " guesses.\n" << endl;
        }

        // END GAME LOOP
    } while (guess != secretNumber);
    
    // SHUT DOWN (EXIT)
    return 0;
}