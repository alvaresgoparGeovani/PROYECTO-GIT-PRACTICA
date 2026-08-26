
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
// El if else nos funciona cuando si la decion si es veradera nos manda cierto mensaje y cuando no
// nos manda un nuevo mensaje
    int edad = 15; // declaracion de la variable tipo entero

    if (edad >= 18) // Declaracion si se cumple la condicion
    {
        cout << "Mayor de edad"; //Mensaje a mandar si se cumple la condicion
    }
    else {
        cout << "Menor de edad"; // Mensaje qeu manda si no se cumplela condicion
    }
    return 0;
}