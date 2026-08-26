
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
// El if, if else y else nos funciona cuando si la decion si es veradera nos manda cierto mensaje y como tenemos una segunda opcion
// nos manda un nuevo mensaje pero sino se cumple ni una ni otra nos manda otro mensaje 
    int calificacion = 85; // Declaracion de variable tipo entero

    if (calificacion >= 90) // Declaración de la condicion si se cumple 
    {
        cout << "Excelente"; // Mensaje si se cumple
    }
    else if (calificacion >= 70) // Declaracion si se cumple 
    {
        cout << "Aprobado"; // Mensaje si se cumple la condicion
    }
    else // Condicionsi no se cumple
    {
        cout << "Reprobado"; //Mensaje si no se cumple
    }

    return 0;
}