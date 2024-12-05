// How to use Pointers

#include <iostream>
#include <string> 

 using namespace std;
 
 int main()
 {
    int* pAPointer; // declaring a misc pointer

    int* pScore = 0; // declare and initialize a pointer
    // any pointer intialized to zero is a "null pointer"
    // Never dereference a null operator!!

    int score = 1000;
    pScore = &score; // assign a pointer pScore the address  (or "reference") variable score

    cout << "Assigning &score to *pScore\n";
    cout << "&score is " << &score << "\n"; // address of score variable
    cout << "pscore is " << pScore << "\n"; // address stored in pointer
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; // value pointed to be pointer

    cout << "adding 500 to score...\n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; // Dereferencing: value pointed to by the pointer (denoted by "*pScore" not "pScore")

    
    cout << "adding 500 to pScore...\n";
    *pScore += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; // value pointed to by the pointer

    cout << "Assigning &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n"; // dereferenced
   

    cout << "Assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str; // pointer to string object
    cout << "str is: " << str << "\n";
    cout << "pStr is: " << pStr << "\n";
    cout << "*pStr is: " << *pStr << "\n";
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
    cout << "*pStr->size() is: " << pStr->size() << "\n";

    // To write constant pointers:
    // int *  const pScore = &score // a constant pointer

    // Note: a constant pointer and a reference work the same, although references are cleaner for constant use case scenarios

    return 0;
 }