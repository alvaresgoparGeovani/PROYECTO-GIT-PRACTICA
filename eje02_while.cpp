
#include <iostream> // Se manda a llamar una librería
using namespace std; //Se usa el using STD para que al momento de imprimir las salidas sea más facil

int main() { //funcion
    int contador = 1; //Declaracion de variable para el contador

    while (contador <= 5) { //condicion que verifica y hace lo que se l esat pidiendo
        cout << "Numero: " << contador << endl; //Imprime los mensajes de uno a uno 
        contador++; // Es la repeticion que se va haciendo hasta que llegue el limite
    }
    return 0;
}