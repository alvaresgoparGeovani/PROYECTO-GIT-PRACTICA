
//Tabla de numeros

#include<iostream>

using namespace std;

int main()
    {
        int matriz[2][3];

        //Lectura de datos usando ciclos for anidados
        cout << "---Ingreso de numeros para matriz 2x3---" << endl;

        for (int fila = 0; fila < 2; fila++)
        {
            for (int columna = 0; columna < 3; columna++)
            {
                /* code */
                cout << "Ingresa el numero para la posicion [" << fila << "]["<< columna << "]: ";
                cin >> matriz[fila][columna];
            }            
        }

         cout << "\nMatriz resultante: " << endl;
            for (int fila = 0; fila < 2; fila++)
            {
                /* code */
                for (int columna = 0; columna < 3; columna++)
                {
                    /* code */
                    cout << matriz[fila][columna] << "\t";
                }
                cout << endl; //Salto de linea al terminar cada fila
            }

        return 0;
    }
