// Menu Select
// Game Menu

#include <iostream>
using namespace std;

int main()
{
    bool gameStart = true;

    cout << "Game Initializing..." << endl;

    do
    {
        // Difficulty Set-up
        cout << "Difficulty Selection" << endl;

        bool difficultySet;
        difficultySet = false;

        while (difficultySet != true)
        {
            cout << "Select Difficulty\n\n";
            cout << "1 - Easy\n";
            cout << "2 - Medium\n";
            cout << "3 - Hard\n";
            cout << "4 - Diabolical\n\n";

            int choice;
            cout << "Choose Wisely: ";
            cin >> choice;
            cout << "\n";

            switch (choice)
            {
            case 1:
                cout << "You have selected 'Easy'\n";
                difficultySet = true;
                break;
            case 2:
                cout << "You have selected 'Medium'\n";
                difficultySet = true;
                break;
            case 3:
                cout << "You have selected 'Hard'\n";
                difficultySet = true;
                break;
            case 4:
                cout << "You have chosen... death.\n";
                difficultySet = true;
                break;
            default:
                cout << "User Error: Please re-read the question and answer appropriately\n\n";
            }
        }
        
        cout << "Thank you for selecting a difficulty. Please enjoy!" << endl;

        gameStart = false;
        
    } while (gameStart == true);



    cout << "Game closing... Goodbye." << endl;
    cout << "WAIT!!! I almost forgot..." << endl;

    bool difficultySet;
    difficultySet = false;

    do
    {
        cout << "Select Difficulty\n\n";
            cout << "1 - Easy\n";
            cout << "2 - Medium\n";
            cout << "3 - Hard\n";
            cout << "4 - Diabolical\n\n";

            int choice;
            cout << "Choose Wisely: ";
            cin >> choice;
            cout << "\n";

            switch (choice)
            {
            case 1:
                cout << "You have selected 'Easy'\n";
                difficultySet = true;
                break;
            case 2:
                cout << "You have selected 'Medium'\n";
                difficultySet = true;
                break;
            case 3:
                cout << "You have selected 'Hard'\n";
                difficultySet = true;
                break;
            case 4:
                cout << "You have chosen... death.\n";
                difficultySet = true;
                break;
            default:
                cout << "User Error: Please re-read the question and answer appropriately\n\n";
            }


    } while (difficultySet == false);
    
    cout << "Thank you for selecting a difficulty again. Please enjoy!" << endl;

    return 0;
}