#include <iostream>
#include <cmath>
using namespace std;

// ClasePrincipal
class Figura { //Es la clase principal
public:
    string nombre; //Tiene un atributo "nombre" que guarda el nombre de la figura
    virtual double volumen() = 0; //Es una función virtual que hace el calculo del volumen de las subclases
};

// Subclases
class Cubo : public Figura {
public:
    double lado; //Tiene un tributo que es lado
    double volumen() override {
        return lado * lado * lado; //Se implementó volumen 
    }
};

class Cilindro : public Figura {
public:
    double radio, altura;
    double volumen() override {
        return 3.1416 * radio * radio * altura;
    }
};

class Cono : public Figura {
public:
    double radio, altura;
    double volumen() override {
        return (3.1416 * radio * radio * altura) / 3;
    }
};

class Esfera : public Figura {
public:
    double radio;
    double volumen() override {
        return (4.0 / 3) * 3.1416 * pow(radio, 3);
    }
};

// Función principal
int main() {
    int opcion;

    do {
        cout << "\n1. Cubo\n2. Cilindro\n3. Cono\n4. Esfera\n5. Salir\nOpción: ";
        cin >> opcion;

        if (opcion == 1) {
            Cubo c;
            cout << "Lado: "; cin >> c.lado;
            c.nombre = "Cubo";
            cout << c.nombre << " volumen: " << c.volumen() << endl;
        }
        else if (opcion == 2) {
            Cilindro c;
            cout << "Radio: "; cin >> c.radio;
            cout << "Altura: "; cin >> c.altura;
            c.nombre = "Cilindro";
            cout << c.nombre << " volumen: " << c.volumen() << endl;
        }
        else if (opcion == 3) {
            Cono c;
            cout << "Radio: "; cin >> c.radio;
            cout << "Altura: "; cin >> c.altura;
            c.nombre = "Cono";
            cout << c.nombre << " volumen: " << c.volumen() << endl;
        }
        else if (opcion == 4) {
            Esfera e;
            cout << "Radio: "; cin >> e.radio;
            e.nombre = "Esfera";
            cout << e.nombre << " volumen: " << e.volumen() << endl;
        }
        else if (opcion == 5) {
            cout << "Fin del programa.\n";
        }
        else {
            cout << "Opción no válida.\n";
        }

    } while (opcion != 5);

    return 0;
}
