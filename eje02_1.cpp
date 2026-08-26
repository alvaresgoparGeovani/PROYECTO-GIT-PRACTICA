
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

int main ()
{
//operadores aritmeticos
//sirve para poder operaciones aritmerticas
int a = 10; // Declaracion de variable tipo entero
int b = 2; // Declaraciond de variable tipo entero
cout<< "OPERACIONES ARITMETICAS" << endl;
cout<< a + b << endl; //Suma
cout<< a - b << endl; //resta
cout<< a * b << endl; //multplicacion
cout<< a / b << endl; // division
cout<< a % b << endl; // residuo

cout<< "Operaciones de comparación" << endl;
// Aqui los resultados son verdadero y falso en donde verdadero es 1 y falso es 0
cout<< (10 > 5) << endl; //Mayor que
cout<< (10 < 8) << endl; //Menor que
cout<< (10 <= 8) << endl; //Menor o igual que
cout<< (10 >= 8) << endl; // Mayor o igual que
cout<< (10 == 10) << endl; // Igual que
cout<< (10 != 8) <<endl; // Diferente de

cout <<"Operaciones lógicos" << endl;
// Se usan para combinar conndiciones
cout<< (10 > 5 && 8 > 3) << endl; // Las dos condiciones deben de cumplirse
cout<< (10 > 5 || 8 > 3) << endl; // Una condicion debe de cumplirse
cout<< !(10 > 5) << endl; //invierte el resultado

cout<<"Operadores de asignacion" << endl; //Sirve para guardar valores
int x = 10;
cout<< (x += 5 ) << endl; // Suma y asignacion
cout << (x -=5) << endl; // Resta y asignacion
cout<< (x *= 5 ) << endl; // multiplicacion y asignacion
cout<< (x /= 5 ) << endl; // division y asignacion
cout<< (x %= 5 ) << endl; // residuo y asignacion

return 0;
}
