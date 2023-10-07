// demonstartes function inlining
//Inlining a function can (possibly) improve performance

#include <iostream>

int radiation(int health);

using namespace std;

int main()
{
    int health = 80;
    cout << "Your Health is " << health << "\n";

    health = radiation(health);
    cout << "fallout wave!! Your health is now " << health << "\n";

    health = radiation(health);
    cout << "fallout wave!! Your health is now " << health << "\n";

    health = radiation(health);
    cout << "fallout wave!! Your health is now " << health << "\n";

    return 0;
}

inline int radiation(int health)
{
    return (health/2);
}