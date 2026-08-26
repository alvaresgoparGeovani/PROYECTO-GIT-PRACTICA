
public class operadores_java { // Define una clase llamada OperadoresJava

    public static void main(String[]args){ // Método principal donde inicia el programa

//**********************************
//OPERADORES ARITMÉICOS
//**********************************

// Declaración de variables enteras con valores numericos
int a = 10;
int b = 3 ;

// Imprime el texto "Suma:" seguido del resultado de sumar a y b
System.out.println("Suma:" + (a+b));

// Muestra en consola el resultado de restar a - b
        System.out.println("Resta: " + (a - b));

        // Muestra en consola el resultado de multiplicar a * b
        System.out.println("Multiplicación: " + (a * b));

        // Muestra en consola el resultado de dividir a / b
        System.out.println("División: " + (a / b));

        // Muestra en consola el residuo de dividir a entre b
        System.out.println("Módulo: " + (a % b));

        //*****************************************
        //OPERADORES DE COMPARACION
        //*****************************************

        // Compara si a es igual a b
        System.out.println("a == b: " + (a == b));

        // Compara si a es diferente de b
        System.out.println("a != b: " + (a != b));

        // Compara si a es mayor que b
        System.out.println("a > b: " + (a > b));

        // Compara si a es menor que b
        System.out.println("a < b: " + (a < b));

        // Compara si a es mayor o igual que b
        System.out.println("a >= b: " + (a >= b));

        // Compara si a es menor o igual que b
        System.out.println("a <= b: " + (a <= b));

        //**********************************************
        //OPERADORES LÓGICOS
        //**********************************************

         // Variable booleana con valor verdadero
        boolean x = true;

        // Variable booleana con valor falso
        boolean y = false;

        // Devuelve true solamente si ambas variables son true
        System.out.println("x && y: " + (x && y));

        // Devuelve true si al menos una variable es true
        System.out.println("x || y: " + (x || y));

        // Invierte el valor lógico de x
        System.out.println("!x: " + (!x));

        //*********************************************
        //OPERADORES DE ASIGNACION
        //********************************************

        // Declara una variable c con valor inicial 5
        int c = 5;

        // Suma 2 al valor actual de c
        c += 2;

        // Muestra el nuevo valor de c
        System.out.println("c += 2: " + c);

        // Resta 1 al valor actual de c
        c -= 1;

        // Muestra el nuevo valor de c
        System.out.println("c -= 1: " + c);

        // Multiplica el valor actual de c por 3
        c *= 3;

        // Muestra el nuevo valor de c
        System.out.println("c *= 3: " + c);

        // Divide el valor actual de c entre 2
        c /= 2;

        // Muestra el nuevo valor de c
        System.out.println("c /= 2: " + c);

        //*******************************************
        //CONDICIONAL iF- ELSE IF - ELSE
        //*******************************************

         // Declara una variable edad con valor 18
        int edad = 18;

        // Comprueba si edad es mayor que 18
        if (edad > 18) {

            // Se ejecuta si la condición anterior es verdadera
            System.out.println("Mayor de edad");

        }
        // Comprueba si edad es exactamente igual a 18
        else if (edad == 18) {

            // Se ejecuta si edad vale exactamente 18
            System.out.println("Tienes exactamente 18 años");

        }
        // Se ejecuta cuando ninguna condición anterior se cumple
        else {

            // Muestra el mensaje de menor de edad
            System.out.println("Menor de edad");

        }

        //********************************************
        //BUCLE FOR
        //Repite instrucciones un numero determinado de veces
        //********************************************

         // Variable i inicia en 1, se repite mientras i <= 5
        // y aumenta de uno en uno
        for (int i = 1; i <= 5; i++) {

            // Muestra el valor actual de i
            System.out.println("Iteración: " + i);

        }

        //********************************************
        //BUCLE WHILE
        //se ejecuta mientras la condicion sea verdadera
        //********************************************

        // Variable contador con valor inicial 1
        int contador = 1;

        // El ciclo continuará mientras contador sea menor o igual a 3
        while (contador <= 3) {

            // Muestra el valor actual del contador
            System.out.println("Contador: " + contador);

            // Incrementa el contador en una unidad
            contador++;

        }

        //**************************************************
        //MANEJO DE EXCEPCIONES
        //permite controlar errores sin detener el programa
        //**************************************************

        try {
            // Provoca una división entre cero
            int resultado = 10 / 0;

            // Esta línea no se ejecutará porque ocurre un error antes
            System.out.println(resultado);

        }
        // Captura el error de división entre cero
        catch (ArithmeticException e) {

            // Muestra un mensaje de error
            System.out.println("Error: División entre cero.");

        }
        // Siempre se ejecuta exista o no un error
        finally {

            // Mensaje final del bloque try-catch
            System.out.println("Bloque finally ejecutado.");

         }

        // Muestra un mensaje indicando que el programa terminó
        System.out.println("Programa terminado.");

    } // Fin del método main

} // Fin de la clase OperadoresJava








//OPERADORES EN JavaScript

let a = 10;
let b = 3;

//Muestra en la pantalla la suma de a y b
console.log("Suma",a+b);

//Muestra en pantalla la resta de a y b
console.log("Resta",a-b);

//Muestra en consola la multiplicación de a y b
console.log("Multiplicacion",a * b);

//Muestra en consola la división de a entre b
console.log("Dvision", a / b);

//Muestra el residuo de dividir a entre b
console.log("Residuo:",a % b);

// Eleva a a la potencia de b
console.log("Potencia:",a ** b);

//********************************** 
//OPERADORES DE COMPARACION
//********************************** 

//cOMPRUEBA SI A ES IGUAL a b
console.log("a == b:", a == b);

// Comprueba si a es estrictamente igual a b 
//(mismo valor y mismo tipo de dato)

console.log("a === b:", a === b);

// Comprueba si a es diferente de b
console.log("a != b:", a != b);

// Comprueba si a es mayor que b
console.log("a > b:", a > b);

// Comprueba si a es menor que b
console.log("a < b:", a < b);

// Comprueba si a es mayor o igual que b
console.log("a >= b:", a >= b);

// Comprueba si a es menor o igual que b
console.log("a <= b:", a <= b);

//******************************* 
//OPERADORES LÓGICOS
//******************************* 

//vARIABLES BOOLEANOS

let x = true;
let y = false ;

//Devuelve true solamente si ambas condiciones son true (&&)
console.log("x && y:", x && y);

//Devuelve true si al menos una condicion es true (||)
console.log ("x || y:", x || y);

// Invierte el valor lógico (!)
console.log("!x:", !x);

//*********************************** 
//OPERADORES DE ASIGNACION
//***********************************

// Se crea una variable con valor inicial de 5
let c = 5;

// Muestra el valor inicial
console.log("Valor inicial:", c);

// Suma 2 al valor actual de c
c += 2;
console.log("c += 2:", c);

// Resta 1 al valor actual de c
c -= 1;
console.log("c -= 1:", c);

// Multiplica el valor actual por 3
c *= 3;
console.log("c *= 3:", c);

// Divide el valor actual entre 2
c /= 2;
console.log("c /= 2:", c);

//*************************************
//ESTRUCTURA CONDICIONAL IF
//Tomar decisiones
//*************************************

// Variable con una edad
let edad = 18;

// Si la edad es mayor que 18
if (edad > 18) {

    console.log("Mayor de edad");

}
// Si la edad es exactamente 18
else if (edad === 18) {

    console.log("Tienes exactamente 18 años");

}
// Si ninguna condición anterior se cumple
else {

    console.log("Menor de edad");

}

//*********************************
//ESTRUCTURA SWITCH
//**********************************

// Variable que representa un día
let dia = 3;

// Comienza 
switch (dia) {

    // Si dia vale 1
    case 1:
        console.log("Lunes");
        break;

    // Si dia vale 2
    case 2:
        console.log("Martes");
        break;

    // Si dia vale 3
    case 3:
        console.log("Miércoles");
        break;

    // Si no coincide ningún caso
    default:
        console.log("Otro día");
}

//*********************************
//BUCLE FOR
//se utiliza cuando ya sabemos cuantas veces repetir
//*********************************

for (let i = 1; i <= 5; i++) {

    console.log("Iteraccion",i);

}

//*************************************
//BUCLE WHILE
//mientras la condicion sea verdadera
//*************************************

let contador = 1;

while (contador <= 3) {

    console.log("Contador:", contador);

    // Incrementa el contador
    contador++;
}

//*********************************
//BREAK Y CONTINUE
//*********************************

for (let numero = 1; numero <= 5; numero++) {
       //El operador === compara tanto el valor como el tipo de dato

    // Omite la iteración cuando numero vale 2
    if (numero === 2) {
        continue;
    }

    // Termina el ciclo cuando numero vale 5
    if (numero === 5) {
        break;
    }

    console.log(numero);

}

//*********************************
//EXCEPCIONES
//permite controlar errores
//*********************************

try {

    // Genera un error manualmente
    throw new Error("Ejemplo de error");

}
catch (error) {

    // Captura y muestra el error
    console.log("Error detectado:", error.message);

}
finally {

    // Siempre se ejecuta
    console.log("Bloque finally ejecutado");

}

//*********************************
//OPERADOR TERNARIO
//forma abreviada de in if
//************************************

// Si edad es mayor o igual a 18 devuelve un texto,
// en caso contrario devuelve otro.
let resultado = edad >= 18
    ? "Mayor de edad"
    : "Menor de edad";

// Muestra el resultado
console.log(resultado);