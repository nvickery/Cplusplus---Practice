// Friend Critter - Friend Functions and Overloading Operators
// hint:
// Overloading the Operator << allows for displaying m_Name of a Critter when the object is sent to ostream

#include <iostream>
#include <string>

using namespace std;

class Critter
{
//Make the following Global Friend Functions within Critter Class
friend void Peek(const Critter& aCritter);
friend ostream& operator<<(ostream& os, const Critter& aCritter); //Function Name is "operator<<"

private:
    string m_Name;
public:
    Critter(const string& name = "");
};

Critter::Critter(const string& name):
    m_Name(name)
{}

//Initiate Friend Functions
void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter); //Function Name is "operator<<"

int main()
{
    Critter crit("Poochie");

    cout << "Calling Peek() to access crit's private data member, m_Name: \n";
    Peek(crit);

    cout << "\nSending crit object to cout with the << operator: \n";
    cout << crit;

    return 0;
}


// Function Definitions

//Global Friend Fucntion definition which can access all of the Critter object's members
void Peek(const Critter& aCritter)
{
    cout << aCritter.m_Name << endl;
}

//Overloads the << operator so you can send a Critter object to cout
ostream& operator<<(ostream& os, const Critter& aCritter) //Function Name is "operator<<"
{
    os << "Critter Object - ";
    os << "m_Name: " << aCritter.m_Name;
    return os;
}