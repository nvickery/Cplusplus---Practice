// Demonstrating Parameters in functions

#include <iostream>

using namespace std;
// Default parameters 
double askNumber(int high, int low = 1); // default parameters mist always be listed last

int main()
{
    double number = askNumber(5);
    cout << "Thanks for choosing: " << number << "\n\n";

    number = askNumber(10,5);
    cout << "Thanks for choosing: " << number << "\n\n";

    return 0;
}

double askNumber(int high, int low)
{
    double num;

    do
    {
        cout << "Please enter a number (" << low << " - " << high << "): ";
        cin >> num;
    } while (num > high || num < low);

    return num;
}