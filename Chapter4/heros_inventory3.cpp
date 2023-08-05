// Inventory example using iterators

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("sheild");

    vector<string>::iterator myIterator; // iterator that references an element in vector
    vector<string>::const_iterator iter; // an iterator that restricts user from changing what is in the element

    cout << "Your items: \n";
    // vector.begin() = creates iterator for first element 
    // vector.end() = created iterator for one past the last element
    for ( iter = inventory.begin(); iter != inventory.end(); iter++) 
    {
        cout << *iter << endl; // * dereferences an iterator and just refers to the info in the element the iterator refers to
    }
    
    cout << "\nYour trade your sword for a battle axe.";
    myIterator = inventory.begin();
    *myIterator = "battleaxe";
    cout << "\nYour items: \n";
    for ( iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    
    // two ways to call functions with iterators:
    //  (*myIterator).size()
    //  myIterator->size()       "looks nicer"
    cout << "\nThe item name '"<< *myIterator << "' has ";
    cout << (*myIterator).size() << " letters in it.\n";

    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n";

    // inserting into vectors with Iterators
    // INVALIDATES ANY PREVIOUSLY SET ITERATORS!!!!
    cout << "\nYou find a crossbow on a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow"); // vector.insert(iterator, data)
    cout << "\nour items: \n";
    for ( iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    // erasing elements in vectors with Iterators
    // INVALIDATES ANY PREVIOUSLY SET ITERATORS!!!!
    cout << "\nYour armor is destroyed in battle...";
    inventory.erase((inventory.begin()+2)); // vector.erase(iterator)  //iterators can be refered as (iter+#)
    cout << "\nYour items: \n";
    for ( iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    return 0;
}