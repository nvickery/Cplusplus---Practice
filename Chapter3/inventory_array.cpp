//Learning Arrays with inventory example

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 12; // constants are CAPOTILIZED!!!
    string inventory[MAX_ITEMS];
    // Alternatives to starting lists
    //string inventory[10] = {"sword", "sheild", "staff"}; //initializes an array of size 10 with 3 items
    //string inventory[] = {"sword", "sheild", "staff"}; //initializes an array of size 3 with 3 items

    int numItems = 0; // number of items in current inventory...

    inventory[numItems++] = "sword"; //indexing an element and iterating it as needed
    inventory[numItems++] = "sheild";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "jewelry";

    cout << "Your Items include: \n";
    for (int i = 0; i < numItems; i++)
    {
        cout << inventory[i] << endl;
    }
    
    cout << "\nYour switch your sword for a mace. \n";
    inventory[0] = "mace";

    cout << "Your Items include: \n";
    for (int i = 0; i < numItems; i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nThe item, " << inventory[0] << ", has ";
    cout << inventory[0].size() << " letters in it's name.\n";

    cout << "\nYou find a bottle of poison...\n";
    if (numItems < MAX_ITEMS)
    {
        inventory[numItems++] = "poison";
    }
    else
    {
        cout << "Your are overburdened and can carry no more...\n";
    }
    cout << "Your Items include: \n";
    for (int i = 0; i < numItems; i++)
    {
        cout << inventory[i] << endl;
    }

    return 0;
}
