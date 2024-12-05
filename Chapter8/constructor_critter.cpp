// Constructor Critter
// Demonstrates Constructors

#include <iostream> 

using namespace std; 

class Critter
{
public:
    int m_hunger;

    Critter(int hunger = 0);        // Constructor Prototype
    void Greet();
};

Critter::Critter(int hunger = 0)    // constructor definition
{
    cout << "A new critter has been born!" << endl;
    m_hunger = hunger;
}

void Critter::Greet()
{
    cout << "Hi, I'm a critter. My hunger level is " << m_hunger << ".\n\n";
}

int main()
{
    Critter crit(7);
    crit.Greet();

    //Critter crit2();
    //crit2.Greet();

    return 0;
}
