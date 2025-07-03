// LayoutError - demonstrate the results of a messing up a pointer usage
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberOfArgs, char* pszArgs[])
{
    int upper = 0;
    double n = 0;
    int lower = 0;

    // Output the values of the three variables before ...
    cout << "The initial values are:" << endl;
    cout << "upper = " << upper << endl;
    cout << "n     = " << n << endl;
    cout << "lower = " << lower << endl;

    // Now store a double into the space allocated for an int
    cout << "\nStoring 13.0 into the location &n" << endl;
    double* pD = (double*)&n;
    *pD = 13.0;

    // Display the results
    cout << "\nThe final results are:" << endl;
    cout << "upper = " << upper << endl;
    cout << "n     = " << n << endl;
    cout << "lower = " << lower << endl;

    // Wait until user is ready before terminating program
    // Allow the user to see the program results
    system("PAUSE");
    return 0;
}

