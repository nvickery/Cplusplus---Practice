// Demonstrates global variables

#include <iostream>

using namespace std;

int glob = 10; // global variable

// Sometime using constants on a global scale are helpful 
// Example: const int MAX_ENEMIES = 10 
// As opposed to globel variables. 

void access_global();
void hide_global();
void change_global();

int main()
{
    cout << "In main(), glob is " << glob << "\n\n";
    access_global();

    hide_global();
    cout << "In main(), glob is " << glob << "\n\n";

    change_global();
    cout << "In main(), glob is " << glob << "\n\n";

    return 0;
}

void access_global()
{
    cout << "In access_global(), glob is: " << glob << "\n\n";
}

void hide_global()
{
    int glob = 0; //hide global variable behind a local glob variable
    cout << "In hide_global(), glob is " << glob << "\n\n";
}

void change_global()
{
    glob = -10; //Change global variabel to -10
    cout << "In change_globe(), glob is " << glob << "\n\n";
}