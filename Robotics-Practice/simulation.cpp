// Simulation of Workspace for Robot

#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    cout << "Simulation Start: " << time(0) << endl;

    cout << "Enter Desired State: ";
    int state;
    cin >> state;
    cout << "Desired State: " << state << endl;

    cout << "Simulation End: " << time(0) << endl;

    return 0;
}