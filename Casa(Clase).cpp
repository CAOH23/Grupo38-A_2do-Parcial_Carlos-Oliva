#include <string>
using namespace std;

int main() {
    return 0;
}


// Clase base
class Casa {
protected:
    string direccion;
    int numPisos;
    float superficieTotal;
    string colorExterior;
    bool tieneGarage;
};

// Clase derivada 1: Habitaciones
class Habitaciones : public Casa {
protected:
    int numHabitaciones;
    bool tieneCloset;
    string tipoPiso;
    bool aireAcondicionado;
    bool calefaccion;
};

// Clase derivada 2: Cocina
class Cocina : public Casa {
protected:
    bool estufaGas;
    bool refrigerador;
    bool microondas;
    string tipoEncimera;
    int numGabinetes;
};

// Clase derivada 3: Baños
class Banos : public Casa {
protected:
    int numBanos;
    bool tieneBanera;
    bool tieneRegadera;
    bool extractorAire;
    string tipoLavabo;
};

// Clase derivada 4: Jardín
class Jardin : public Casa {
protected:
    float tamanoJardin;
    bool tieneArboles;
    bool sistemaRiego;
    bool tienePiscina;
    bool iluminacionExterior;
};

// Clase derivada 5: Seguridad
class Seguridad : public Casa {
protected:
    bool camarasSeguridad;
    bool sistemaAlarma;
    bool cercaElectrica;
    bool sensoresMovimiento;
    bool puertaBlindada;
};

// Clase derivada 6: Servicios
class Servicios : public Casa {
protected:
    bool aguaPotable;
    bool luzElectrica;
    bool internet;
    bool cableTV;
    bool recoleccionBasura;
};

// Clase derivada 7: Mobiliario
class Mobiliario : public Casa {
protected:
    bool tieneSala;
    bool tieneComedor;
    bool camasIncluidas;
    int numSillas;
    string tipoMuebles;
};




