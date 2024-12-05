// Static Critter Program
// How to Static Member exist once for entire class so you can have data from the entire class of objects

#include <iostream>

using namespace std;

class Critter
{
private:
    int m_Hunger;
public:
    static int s_Total; //static memebr declaration
                        //total number of critter objects
    Critter(int hunger = 0);
    static int GetTotal(); // static member call function
};

int Critter::s_Total = 0; //static member variable initialization

Critter::Critter(int hunger):
    m_Hunger(hunger)
{
    cout << "A new critter has been born" << endl;
    ++s_Total;
}

int Critter::GetTotal() // static member function definition
{
    return s_Total;
}

int main()
{
    cout << "The total number of Critters is: ";
    cout << Critter::s_Total << "\n\n";

    Critter crit1, crit2, crit3;

    cout << "\nThe total number of Critters is: ";
    cout << Critter::GetTotal() << "\n";

    return 0;

}