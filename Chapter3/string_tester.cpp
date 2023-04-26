// String Tester script

#include <iostream>
#include <string>

using namespace std;

int main()
{
string word1 = "Game";
string word2("Over");
string word3(3,'!');

string phrase = word1 + " " + word2 + word3;

cout << "The phrase is: " << phrase << "\n\n";

cout << "the Phrase has " << phrase.size() << " characters in it.\n\n";

cout << "The character in position 0 is " << phrase[0] << "\n\n";

cout << "changing the character in position 0...\n";
phrase[0] = 'L';
cout << "The phrase is now: " << phrase << "\n\n";

for (unsigned int i = 0; i < phrase.size(); ++i)
{
    cout << "character at position " << i << " is: " << phrase[i] << endl;
}

//cout << "\nThe sequence 'Over' begins in location " << phrase.find("Oer") << " which is " << string::npos << endl;
cout << "\nThe sequence 'Over' begins in location " << phrase.find("Over") << " which is not " << string::npos << endl;

if (phrase.find("eggplant") == string::npos)
{
    cout << "'eggplant' is not in the phrase.\n\n";
}

phrase.erase(4,5); //.erase(starting position, length of erasure)
cout << "The phrase is now: " << phrase << endl;

phrase.erase(4); //.eras(starting position) and erases everything from that point onward
cout << "The phrase is now: " << phrase << endl;

phrase.erase();
cout << "The phrase is now: " << phrase << endl;

if (phrase.empty())
{
    cout << "\nThe phrase is no more.\n";
}

    return 0;
}