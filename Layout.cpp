#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main (int nNumberofArgs, char* pszArgs[])
{
	int end;
	int n;
	long l;
	float f;
	double d;
	cout.setf(ios::hex);
	cout.unsetf(ios::dec);
	cout<<"--- = 0x"<< &end <<"\n";
	cout<<"&n = 0x"<< &n <<"\n";
	cout<<"&l = 0x"<< &l <<"\n";
	cout<<"&f = 0x"<< &f <<"\n";
	cout<<"&d = 0x"<< &d <<"\n";
	
	system("PAUSE");
	return 0;
}
