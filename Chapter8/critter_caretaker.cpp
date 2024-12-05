// Criter Caretacker Game

#include <iostream>

using namespace std;

// Class Definition
class Critter
{
private:
    int m_Hunger;
    int m_Boredom;

    int GetMood() const;
    void PassTime(int time = 1);
public:
    Critter(int hunger = 0, int boredom = 0);
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void Scan();

};

// Class Constructor
Critter::Critter(int hunger, int boredom):
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

// Private Functions
inline int Critter::GetMood() const
{
    return(m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}

//Public Functions
void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();
    if (mood > 15)
    {
        cout << "mad.\n";
    }
    else if (mood > 10)
    {
        cout << "frustrated.\n";
    }
    else if (mood > 5)
    {
        cout << "okay.\n";
    }
    else
    {
        cout << "happy.\n";
    }
    
    PassTime();
}

void Critter::Eat(int food)
{
    cout << "Brrupp.\n";
    m_Hunger -= food;

    if (m_Hunger < 0)       
    {
        m_Hunger = 0;
    }

    PassTime();
}

void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }

    PassTime();
}

void Critter::Scan()
{
    cout << "Your Critter has " << m_Hunger << " hunger\n";
    cout << "YOur Critter has " << m_Boredom << " boredom\n";

    PassTime();
}

/********** MAIN LOOP ***************/

int main()
{
    Critter crit1;
    crit1.Talk();

    int choice;
    
    do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your Critter\n";
        cout << "2 - Feed your Critter\n";
        cout << "3 - Play with your Critter\n";
        cout << "4 - Scan your Critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Good-bye!\n";
            break;
        case 1:
            crit1.Talk();
            break;
        case 2:
            crit1.Eat();
            break;
        case 3:
            crit1.Play();
            break;
        case 4:
            crit1.Scan();
            break;
        default:
            cout << "\nSorry, but " << choice << " is not a valid choice.\n";
        }
    } while (choice != 0);
    
    return 0;
}