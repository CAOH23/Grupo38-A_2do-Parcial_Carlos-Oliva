#include <iostream>
#include <cmath> // Para usar sin() y cos()
using namespace std;

int main() {
    double radianes;

    // Leer el valor del ángulo en radianes
    cout << "Ingresa el tamaño del ángulo en radianes: ";
    cin >> radianes;

    // Calcular seno y coseno
    double seno = sin(radianes);
    double coseno = cos(radianes);

    // Imprimir resultados
    cout << "El seno del ángulo es: " << seno << endl;
    cout << "El coseno del ángulo es: " << coseno << endl;

    return 0;
}
