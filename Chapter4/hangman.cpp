// Hangman Game - demonstartes the use of vectors, gameloops, user i/o, game logic

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main(){
    // Setup
    const int MAX_WRONG = 8;

    vector<string> words; // Create our dictionary of words
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");
    words.push_back("INVICTUS");
    words.push_back("XYLOPHONE");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(),words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string currentState(THE_WORD.size(),'-');
    string used = "";

    // Begin Game
    cout << "Hello and Welcome to Hangman!!" << endl;
    //Main Loop
    while ((wrong < MAX_WRONG) && (currentState != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nThe word is: \n" << currentState << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); // turns all char to UPPERCASE
        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;
        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That is correct!! " << guess << " is in the word.\n";
            // update currentState to include newly guessed letter
            for (int i = 0; i < THE_WORD.length(); i++)
            {
                if (THE_WORD[i] == guess)
                {
                    currentState[i] = guess;
                }
                
            }
            
        }
        else
        {
            cout << "Sorry, " << guess << " is NOT in the word.\n";
            ++wrong;
        }
    }
    
    // Shutdown Phase
    if (wrong == MAX_WRONG)
    {
        cout << "\nYou've been hanged!" << endl;
    }
    else
    {
        cout << "\nYou have correctly guessed the word!";
    }

    cout << "\nThe word was: " << THE_WORD << endl;

    return 0;
}