// Demonstrates Constant References
// Using a Const type reference to avoid changing anything within that object

// Returning a reference of an object is a lot cheaper then returning a whole copy of the object
// except for single variable data types (e.g. float, bool, int)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Parameter Vector is a constant reference to a vector of strings
void display(const vector<string>& inventory);

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("crossbow");
    inventory.push_back("poisoned dagger");

    display(inventory);

    return 0;
}

// Parameter Vector is a constant reference to a vector of strings
void display(const vector<string>& vec)
{
    cout << "Your items: \n";
    for (vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << *iter << endl;
    }
}