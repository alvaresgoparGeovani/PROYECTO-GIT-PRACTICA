
#include <iostream> // Se manda a llamar una libreria
using namespace std; // Se unas el etd para liberar espacio

int main() { // Se manda a llamar la funion

    int edad = -5; //Variabe tipo entero

    try {
        if(edad < 0) {
            throw "La edad no puede ser negativa";
        }

        cout << "Edad valida";
    }
    catch(const char* mensaje) {
        cout << mensaje;
    }

    return 0;
}