// using References

#include <iostream>

using namespace std;

int main()
{
    int myScore = 1000;
    int& mikesScore = myScore; // type& declares and initializes the reference (= value must follow to initialize)
    // sometimes use of "r" for reference variable (e.g. "rScore")

    cout << "mikesScore is: " << mikesScore << "\n";
    cout << "myScore is: " << myScore << "\n";

    cout << "Adding 500 to myScore\n";
    myScore += 500;

    cout << "mikesScore is: " << mikesScore << "\n";
    cout << "myScore is: " << myScore << "\n";

    cout << "Adding 500 to mikesScore\n";
    mikesScore += 500;

    cout << "mikesScore is: " << mikesScore << "\n";
    cout << "myScore is: " << myScore << "\n";

    return 0;
}