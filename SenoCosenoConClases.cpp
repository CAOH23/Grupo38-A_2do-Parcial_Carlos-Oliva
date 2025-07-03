#include <iostream>
#include <cmath>
using namespace std;

// Clase para manejar operaciones con ángulos
class Angulo {
private:
    double radianes;

public:
    // Constructor
    Angulo(double valor = 0.0) {
        radianes = valor;
    }

    // Método para establecer el valor del ángulo
    void establecerRadianes(double valor) {
        radianes = valor;
    }

    // Método para obtener el seno del ángulo
    double obtenerSeno() {
        return sin(radianes);
    }

    // Método para obtener el coseno del ángulo
    double obtenerCoseno() {
        return cos(radianes);
    }
};

int main() {
    double valorRadianes;

    cout << "Ingresa el valor del ángulo en radianes: ";
    cin >> valorRadianes;

    Angulo miAngulo;  // Crear objeto de la clase
    miAngulo.establecerRadianes(valorRadianes);

    cout << "Seno del ángulo: " << miAngulo.obtenerSeno() << endl;
    cout << "Coseno del ángulo: " << miAngulo.obtenerCoseno() << endl;

    return 0;
}

