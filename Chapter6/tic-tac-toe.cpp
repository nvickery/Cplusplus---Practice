// Tic-Tac-Toe Game
// Man vs Machine

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Global Constants;
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// Function Pototypes
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);

// Main Function
int main()
{
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY); // creates vector the size of board and fills with EMPTY

    instructions();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);

    // Game loop
    while (winner(board) == NO_ONE)
    {
        if (turn == human)
        {
            move = humanMove(board, human);
            board[move] = human;
        }
        else
        {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    
    announceWinner(winner(board), computer, human);

    return 0;
}

// Function Definitions
void instructions()
{
    cout << "Welcome to Ultimate Man-Machine Face-off: Tic-Tac-Toe!\n";
    
    cout << "Make your move by entering a number, 0-8. The number \n";
    cout << "corresponds to the desired board postion, as illustrated below: \n\n";

    cout << "0 | 1 | 2\n";
    cout << "---------\n";
    cout << "3 | 4 | 5\n";
    cout << "---------\n";
    cout << "6 | 7 | 8\n\n";

    cout << "Prepare yourself, human. The battle is about to begin.\n\n";
}

char askYesNo(string question)
{
    char responce;
    do
    {
        cout << question << " (y/n): ";
        cin >> responce;
    } while (responce != 'y' && responce != 'n');   

    return responce;
}

int askNumber(string question, int high, int low)
{
    int number;
    do
    {
        cout << question << " (" << low << " - " << high << "): ";
        cin >> number;
    } while (number > high || number < low);  

    return number;
}

char humanPiece()
{
    char go_first = askYesNo("Do you want first move?");
    if (go_first == 'y')
    {
        cout << "\nThen take the first move.\n";
        return X;
    }
    else
    {
        cout << "\nSubmitting already? Fine then. I will go first.\n";
        return O;
    }
}

char opponent(char piece)
{
    if (piece == X)
    {
        return O;
    }
    else
    {
        return X;
    }
}

void displayBoard(const vector<char>& board)
{
    cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t" << "---------";
    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\n";
}

char winner(const vector<char>& board)
{
    // all possible winning rows 
    const int WINNING_ROWS[8][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };

    const int TOTAL_ROWS =8;
    // if any row has three values that are the same (and NOT Empty)
    // then we have a winner
    for (int row = 0; row < TOTAL_ROWS; ++row)
    {
        if ((board[WINNING_ROWS[row][0]] != EMPTY) &&
            (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
            (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]) )
        {
            return board[WINNING_ROWS[row][0]];
        }
    }
    // if nobody won, check for tie (no empty squares)
    if (count(board.begin(),board.end(), EMPTY) == 0)
    {
        return TIE; 
    }
    // since no one has one and it is not a tie, the game is still going
    return NO_ONE;
}
    
    

inline bool isLegal(const vector<char>& board, int move) //inline because it is one line
{
    return(board[move] == EMPTY);
}

int humanMove(const vector<char>& board, char human)
{
    int move = askNumber("Where will you move?", board.size()-1);
    while (!isLegal(board, move))
    {
        cout << "\nSquare is already occupied. For shame.\n";
        move = askNumber("Where will you move?", board.size()-1);
    }
    cout << "Well done. You made a move...\n";

    return move;
}

int computerMove(vector<char> board, char computer)
{
    unsigned int move = 0;
    bool found = false;

    // if computer can win on next move, computer will take
    while (!found && move < board.size())
    {
        if (isLegal(board,move))
        {
            board[move] = computer;
            found = winner(board) == computer;
            board[move] = EMPTY;
        }

        if (!found)
        {
            ++move;
        }
    }

    //otherwise if human can win next move, steal their move
    if (!found)
    {
        move = 0;
        char human = opponent(computer);

        while (!found && move < board.size())
        {
            if (isLegal(board,move))
            {
                board[move] = human;
                found = winner(board) == human;
                board[move] = EMPTY;
            }
            if (!found)
            {
                ++move;
            }
        }
    }
    
    // other wise move to best square
    if (!found)
    {
        move = 0;
        unsigned int i = 0;

        const int BEST_MOVES[] = {4,0,2,6,8,1,3,5,7};
        // pick best open square 
        while (!found && i < board.size())
        {
            move = BEST_MOVES[i];
            if (isLegal(board, move))
            {
                found = true;
            }

            ++i;
        }
    }

    cout << "I shall take Square Number " << move << endl;
    return move;
}

void announceWinner(char winner, char computer, char human)
{
    if (winner == computer)
    {
        cout << winner << " has won!!!\n";
        cout << "As predicted, machines reign supreme.\n";
    }
    else if (winner == human)
    {
        cout << winner << " has won!!!\n";
        cout << "Humanity withholds the title the Greater Intelligence. Congradulations...\n";
    }
    else
    {
        cout << "It's a tie!\n";
        cout << "A draw is... adequate...\n";
    }
    
}
