// Demonstratign Functions with return values and parameters

#include <iostream>
#include <string>

using namespace std;

char yesOrNo1();
char yesOrNo2(string question);

int main(){
    char answer1 = yesOrNo1();
    cout << "Thanks for answering: " << answer1 << "\n\n";
    
    char answer2 = yesOrNo2("Do you wish to save your game?");
    cout << "Thanks for answering: " << answer2 << "\n\n";

    return 0;
}

char yesOrNo1()
{
    char responce1;
    do
    {
        cout << "Please enter 'y' for yes or 'n' for no: ";
        cin >> responce1;
    } while (responce1 != 'y' && responce1 != 'n');

    return responce1;
}

char yesOrNo2(string question)
{
    char responce2;
    do
    {
        cout << question << " (y/n): ";
        cin >> responce2;
    } while (responce2 != 'y' && responce2 != 'n');
    
    return responce2;
}