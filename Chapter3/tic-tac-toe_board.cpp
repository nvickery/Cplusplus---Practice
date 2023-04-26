// Tic Tac Toe Board for demonstrating arrays

#include <iostream>
//#include <string>

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = {{'0','X','0'},{' ','X','X'},{'X','0','0'}};

    cout << "Here's the tic-tac-toe board:\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    
    cout << "\n'X' Moves to the empty location.\n\n";
    board[1][0] = 'X';

    cout << "The Current board is: \n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\n'X' Wins!!";

    return 0;
}