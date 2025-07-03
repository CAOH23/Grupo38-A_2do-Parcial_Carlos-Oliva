#include <iostream>
#include <cmath>
using namespace std;

// Clase para manejar operaciones con �ngulos
class Angulo {
private:
    double radianes;

public:
    // Constructor
    Angulo(double valor = 0.0) {
        radianes = valor;
    }

    // M�todo para establecer el valor del �ngulo
    void establecerRadianes(double valor) {
        radianes = valor;
    }

    // M�todo para obtener el seno del �ngulo
    double obtenerSeno() {
        return sin(radianes);
    }

    // M�todo para obtener el coseno del �ngulo
    double obtenerCoseno() {
        return cos(radianes);
    }
};

int main() {
    double valorRadianes;

    cout << "Ingresa el valor del �ngulo en radianes: ";
    cin >> valorRadianes;

    Angulo miAngulo;  // Crear objeto de la clase
    miAngulo.establecerRadianes(valorRadianes);

    cout << "Seno del �ngulo: " << miAngulo.obtenerSeno() << endl;
    cout << "Coseno del �ngulo: " << miAngulo.obtenerCoseno() << endl;

    return 0;
}

