#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double angulo, seno;
	long coseno;
	
	cout << "Ingresa el valor del angulo en radianes: ";
	cin >> angulo;
	
	seno = sin(angulo);
	coseno = cos(angulo);
	
	cout << "Seno del angulo: " << seno << endl;
	cout << "Coseno del angulo: " << coseno << endl;
	
	return 0;
}
