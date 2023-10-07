// Simulation of Workspace for Robot

#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

void envSetup();
void controller();
void envClose();

int main()
{
    cout << "Simulation Start: " << time(0) << endl;
    envSetup();
    cout << "Enter Desired State: ";
    int state;
    cin >> state;
    cout << "Desired State: " << state << endl;
    controller();
    envClose();
    cout << "Simulation End: " << time(0) << endl;

    return 0;
}

void envSetup()
{
    cout << "Environment Setup Complete.\n";
}

void controller()
{    
    cout << "Kinematic Computations Complete.\n";
}

void envClose()
{
    cout << "Environment Closed.\n";
}