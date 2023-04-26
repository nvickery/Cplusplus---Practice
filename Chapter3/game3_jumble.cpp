// Word Jumble Game - Chapter 3
// You have to guess the word from the jumble w/ a few hints...

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // initiate your word, hint, and array variables for referencing array WORDS[X][word or hint]
    enum fields {WORD, HINT, NUM_FIELDS}; // [0,1,2], could expand to [word, hint1, hint2, num_fields]
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
        {"serendipity", "the state of peace"},
        {"cube", "geometric 3-dimensional shape"},
        {"emerald", "a gem of natural color"},
        {"lamp", "'Light the Way!!'"},
        {"notepad", "I need to jot something down..."}
    };

    // Random pick!!
    srand(static_cast<unsigned int>(time(0))); // generate random seed
    int choice = (rand() % NUM_WORDS); // generate random choice from our limited choices
    // Selected Word and hint
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];

    // Now to jumble the word
    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i < length; i++)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }
    
    // Prep work is done, Begin Introductions!!!
    cout << "\t\t\tWelcome to the Word jumble jam!!\n\n";
    cout << "Decipher the word to win!\n";
    cout << "Enter 'hint' for a hint\n";
    cout << "Enter 'quit' to quit the game (lol you lost the game, and I am not talking about this one...)\n\n";
    cout << "The jumbled word is: " << jumble;

    string guess;
    cout << "\n\nCare to try? What is your guess?\n";
    cin >> guess;
    cout << "Your guess is " << guess << "\n";

    // Game loop
    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
        {
            cout << theHint << "\n";
        }
        else
        {
            cout << "Ehh... no. Try again.\n";
        }

        cout << "Your next guess: ";
        cin >> guess;
    }
    
    if (guess == theWord)
    {
        cout << "congrats!! you did it...\n";
    }

    cout << "\nThanks for playing!!\n";

    return 0;
}