#include <iostream>34
using namespace std;

// displayArray - muestra los elementos de un arreglo de tamaño nSize
void displayArray(int intArray[], int nSize)
{
    cout << "The value of the array is:\n";
    for (int n = 0; n < nSize; n++)
    {
        cout << n << ":" << intArray[n] << "\n";
    }
    cout << "\n";
}

// displayArray2 - muestra los elementos del arreglo usando punteros
void displayArray2(int intArray[], int nSize)
{
    cout << "The value of the array is:\n";
    int* pArray = intArray;
    for (int n = 0; n < nSize; n++, pArray++)
    {
        cout << n << ":" << *pArray << "\n";
    }
    cout << "\n";
}

int main()
{
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Introduce los caracteres: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Elemento " << i << ": ";
        cin >> arr[i];
    }

    displayArray(arr, size);
    displayArray2(arr, size);

    return 0;
}

