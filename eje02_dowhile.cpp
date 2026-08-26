
#include <iostream> //Declaracion de la libreria
using namespace std; //Uso el std para poder ahorrar espacio

int main() {//Declaracion de funcion

    int contador = 1; //Declaración de variable para los saltos
    do { // El do while nos funciona que se esjute al menos una vez
        cout << "Contador: " << contador << endl; // Imprime lso mensajes de manera contada hasta llegar al limite
        contador++; // se va ir sumando uno en uno
    } 
    while(contador <= 5);

    return 0;
}