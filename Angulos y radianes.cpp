#include <iostream>
#include <cmath> // Para usar sin() y cos()
using namespace std;

int main() {
    double radianes;

    // Leer el valor del �ngulo en radianes
    cout << "Ingresa el tama�o del �ngulo en radianes: ";
    cin >> radianes;

    // Calcular seno y coseno
    double seno = sin(radianes);
    double coseno = cos(radianes);

    // Imprimir resultados
    cout << "El seno del �ngulo es: " << seno << endl;
    cout << "El coseno del �ngulo es: " << coseno << endl;

    return 0;
}
