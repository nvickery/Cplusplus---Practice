// Demonstarting Scoping
// Note: a new scope is creating whenever {} are used. 

#include <iostream>

using namespace std;

void funct();

int main()
{
    int var = 5;
    cout << "In main() var is: " << var << "\n\n";
    
    funct();

    cout << "Back in main() var is: " << var << "\n\n";

    {
        cout << "In main() in a  new scope var is: " << var << "\n\n";

        cout << "Creating new var in the new scope.\n";
        int var = 10; 
        cout << "In main() in a new scope {} var is: " << var << "\n\n";
    }

    cout << "At the end of the main(), var created in scope {} no longer exists.\n";
    cout << "At the end of main() var is " << var << "\n\n";

    return 0;
}

void funct()
{
    int var = -5;
    cout << "In funct(), var is " << var << "\n\n";
}