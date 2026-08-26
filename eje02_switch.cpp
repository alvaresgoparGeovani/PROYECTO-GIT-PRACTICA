
/*
Crea ejemplos utilizando todos los tipos de operadores : Aritméticos, lógicos, de comparación, asignación,
 identidad, pertenencia, bits...(Ten en cuenta que cada lenguaje puede poseer unos diferentes) 
- Utilizando las operaciones con operadores que tú quieras, crea ejemplos que representen todos los tipos
 de estructuras de control que existan en el lenguaje: Condicionales, iterativas, excepciones... 
- Debes hacer print por consola del resultado de todos los ejemplos.
*/

#include <iostream>
using namespace std;

int main() {
// El switch nos funciona en como podemos mandar a llamar x o y caso que queremos escoger 
    int opcion = 2;// Declaracion de la vasriable a escoger

    switch(opcion) // Declaracon del switch y ademas agregamos la variable que se toma para mandar el caso 
    {

        case 1: 
            cout << "Seleccionaste la opcion 1";
            break;

        case 2:
            cout << "Seleccionaste la opcion 2";
            break;

        case 3:
            cout << "Seleccionaste la opcion 3";
            break;

        default:
            cout << "Opcion invalida";
    }

    return 0;
}