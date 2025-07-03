#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int nNumberofArgs, char* pszArgs[])
{
	int loopCount;
	cout<<"Ingrese loopCount: ";
	cin>>loopCount;
	while(loopCount>0)
	{
		loopCount=loopCount-1;
		cout<<"only "<< loopCount <<" loops to go\n";
		
	}
	system("PAUSE");
	return 0;
}
