//DisplayString-display an array of characters both using a pointer and an array index
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
    // Declare a string
    char* pszString = (char*)"Randy";

    cout << "Display the string as an array: ";
    for (int i = 0; i < 5; i++) {
        cout << pszString[i];
    }
    cout << endl;

    // Now using typical pointer arithmetic
    cout << "Display string using a pointer: ";
    char* pCurrentChar = pszString;  // nuevo puntero para iterar
    while (*pCurrentChar) {
        cout << *pCurrentChar;
        pCurrentChar++;
    }
    cout << endl;

    system("PAUSE");
    return 0;
}

