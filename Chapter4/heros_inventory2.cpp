// Inventory example with Vectors

#include <iostream>
#include <string>
#include <vector> // "dynamic arrays"

using namespace std;

int main()
{
    vector<string> inventory; //initiate vectory object of string type called "inventory"

    inventory.push_back("sword"); // add an item to the vector
    inventory.push_back("sheild");
    inventory.push_back("armor");
    inventory.push_back("jewelry");

    cout << "Your inventory has " << inventory.size() << " items in it.\n";

    cout << "Your Items include: \n";
    for (unsigned int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }
    
    cout << "\nYour switch your sword for a mace. \n";
    inventory[0] = "mace";

    cout << "\nYour Items include: \n";
    for (int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nThe item '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it's name.\n";

    cout << "\nYou lost your jewelry...\n";
    inventory.pop_back(); //Remove from list
    cout << "\nYour Items include: \n";
    for (int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nYour were beaten by bandits and robbed of all your possesions..." << endl;
    inventory.clear();
    if (inventory.empty())
    {
        cout << "You have lost everything!!\n";
    }
    else
    {
        cout << "You retain one item...";
    }

    return 0;
}