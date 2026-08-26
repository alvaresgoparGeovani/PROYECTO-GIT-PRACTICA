
/*
Crea ejemplos utilizando todos los tipos de operadores : Aritméticos, lógicos, de comparación, asignación,
 identidad, pertenencia, bits...(Ten en cuenta que cada lenguaje puede poseer unos diferentes) 
- Utilizando las operaciones con operadores que tú quieras, crea ejemplos que representen todos los tipos
 de estructuras de control que existan en el lenguaje: Condicionales, iterativas, excepciones... 
- Debes hacer print por consola del resultado de todos los ejemplos.
*/

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
// El if nos funciona para poder tomar decisiones del si se cumple manda cierto resultado 
    int edad = 18; // Declaracion de variable
    if (edad >= 18) // condicion a cumplir que la persona tenga 18 o mas para ser mayor de edad 
    {
        cout<< "Eres mayor de edad"; // Mensaje a imprimir
    }
return 0;
}