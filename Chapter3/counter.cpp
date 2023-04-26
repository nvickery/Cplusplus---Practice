// Counter example on for loops

#include <iostream>

using namespace std;

int main()
{
    cout << "Counting forward:\n" << endl;
    for (int i = 0; i < 10; ++i)
    {
        cout << i << " ";
    }
    
    cout << "\n\nCounting backward:\n" << endl;
    for (int i = 9; i >= 0; --i)
    {
        cout << i << " ";
    }

    cout << "\n\nCounting by 5's:\n" << endl;
    for (int i = 0; i <= 50; i +=5)
    {
        cout << i << " ";
    }

    cout << "\n\nCounting with null statements:\n" << endl;
    int count = 0;
    for ( ; count < 10; )
    {
        cout << count << " ";
        ++count;
    }

    cout << "\n\nCounting with nested loops: \n";
    const int ROWS = 5;
    const int COLUMNS = 3;
    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            cout << i  << "," << j << "  ";
        }
        cout << endl;
    }

    return 0;
}