// Programación 
// Geovani Alvares Gopar PROGRAMACIÓN Jaciel Luna
/* 
EJERCICIO 1 
- Crea un comentario en el código y coloca el nombre de la asignatura 
- Representa las diferentes sintaxis que existen de crear comentarios en el lenguaje (en una línea, varias...). Escribe el nombre del profesor y tus datos generales
- Crea una variable (y una constante si el lenguaje lo soporta). 
- Crea variables representando todos los tipos de datos primitivos del lenguaje (cadenas de texto, enteros, booleanos...).  
- Imprime por terminal el texto: "¡Hola, [y el nombre del lenguaje]!"
*/
#include <iostream> // permite usar cout y cin para imprimir o leer datos en la computadora
#include <string> // permite trabajar con cadenas de texto 
#include <stdexcept> // trabaja execpicones con try, catch
using namespace std;
int main () //declaracion de variable 
 {
    //declaracion de una constante y una variable
    int variable = 25; //descripcion de variable
    const float constante = 3.1416; // declaracion de una variable 

    /*delcaracion de tipo de datos*/
    int entero = 5; // tipo de dato entero no acepta decimales
    float decimales = 9.81; // tipo de dato que acepta enteros y decimales
    double  decimaldoble = 10.080808; // almacena mas dcimales 
    char caracter = '='; // admite una sola letra
    bool boleano = true; // Almacena vlaores de verdero o falso
    string cadenadecaracteres = "Geovani Alvares Gopar";

    //imprimir saludo y nombre del lenguaje

    cout<<"hola c++";// imprime el mensaje 

}
