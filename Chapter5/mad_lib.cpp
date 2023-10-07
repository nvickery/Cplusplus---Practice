// Mad Lib - demonstration for Chapter 5

// Setup
#include <iostream> //avoid spaces when you cin something
#include <string>

using namespace std;

// Declare Functions
string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

// Main Function
int main()
{
    cout << "Welcome to Mad Lib's Storytelling Extravanganza!!\n\n";
    cout << "Please, before we begin, answer the following: \n";

    string name = askText("Please tell me a single-worded name: ");
    string noun = askText("Please tell me a plural noun: ");
    int number = askNumber("Please tell me a number: ");
    string bodyPart = askText("Pick a body part: ");
    string verb = askText("Please tell me a verb: ");

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

// Function Definitions
string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << "Let me tell you a story...\n";
    cout << "The weary adventurer, " << name << ",";
    cout << " had spent many years searching for the Ancient Dwelling of ";
    cout << noun;
    cout << ". One day, while wandering through a forest, " << noun << " appeared before him! ";
    cout << " Before he could scarce take it in, a horde of dragons, " << number << " strong, crashed upon him. ";
    cout << "Immediately, one of the dragons lashed out at " << name << " taking his " << bodyPart << " and gulping it down.";
    cout << " With that, " << name << " met his final end. ";
    cout << "The moral of the story is this: Be careful what you " << verb << " for.";
}