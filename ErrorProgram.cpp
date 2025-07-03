// ErrorProgram - this program averages a series of numbers except that it contains at least one fatal bug
#include <cstdio>
#include <cstdlib> 
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
	cout << "This program is designed to crash!"
		 << endl;
	int nSum;
	int nNums;
	
	// accumulate input nunmbers until the 
	// user enters a negative number, then 
	// return the average
	nNums = 0;
	while(true)
	{
		// enter another number to add
		int nValue; 
		cout << "Enter another number: ";
		cin  >> nValue;
		cout << endl;
		
		// if the input number is negative...
		if (nValue < 0)
		{
			//...then output the average 
			cout << "Average is: "
				 << nSum/nNums
				 << endl;
		    break;
		}
		// not negative, add the value to 
		// the accumulator 
		nSum += nValue;
	}
	
	// wait until user is ready before terminating program 
	// to allow the user to see the program results 
	system("PAUSE");
	return 0;
}
