// Heap Program
// Demonstrates dynamically allocating memory 
// "new" creates an allocation in the Heap
// "delete" releases the data stored on the heap and frees the memory

// EVERY "NEW" SHOULD HAVE ITS OWN "DELETE" WHEN DOING THIS!!!!
// MUST REASSIGN ANY DANGLING POINTERS SO THEY DON'T REFERENCE SOME UNRELATED DATA MEMORY
// do not dereference the pointers, just reassign them to 0 or something like that...

#include <iostream>

using namespace std;

int* intOnHeap(); // returns an int on the heap
void leak1(); // creates a memory leak
void leak2(); // creates another memory leak

int main()
{
    int* pHeap = new int; // allocated memory in heap and creating a pointer to it
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n\n";

    int* pHeap2 = intOnHeap();
    cout << "*pHeap2: " << *pHeap2 << "\n\n";

    cout << "Freeing memory pointed to by pHeap. \n\n";
    delete pHeap;
    
    cout << "Freeing memory pointed to by pHeap2. \n\n";
    delete pHeap2;

    // Get rid of dangling pointers
    pHeap = 0; // MUST REASSIGN THESE POINTERS SO THEY DON'T REFERENCE SOME UNRELATED DATA MEMORY
    pHeap2 = 0;

    return 0;
}

int* intOnHeap()
{
    int* pTemp = new int(20); //allocate room in heap for "20" and then pass on the pointer
    return pTemp;
}

void leak1() // THIS IS A EXAMPLE OF WHAT NOT TO DO
{
    int* drip1 = new int(30);
}

void leak2() // THIS IS A EXAMPLE OF WHAT NOT TO DO
{
    int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
}