// Simple Critter 
// Demonstrates creating a new type of class

#include <iostream>

using namespace std;

class Critter       // class definition - defines a new type, Critter
{
public:
    int m_hunger;   // Data member
    void Greet();   // member function prototype
};

void Critter::Greet()   // Member function Definition
{
    cout << "Hi, I'm a critter. My hunger is " << m_hunger << ".\n";
}

int main()
{
    Critter crit1;
    Critter crit2;

    crit1.m_hunger = 9;
    cout << "Critter 1's hunger level is " << crit1.m_hunger << ".\n";

    crit2.m_hunger = 3;
    cout << "Critter 2's hunger level is " << crit2.m_hunger << ".\n";

    crit1.Greet();
    crit2.Greet();

    return 0;
}
