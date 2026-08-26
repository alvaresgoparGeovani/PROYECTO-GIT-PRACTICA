// Ejemplo de Matrices

// ESte programa muestra el funcionamiento básico
// de una mtriz en c++
// la matriz tendrá:
//2 filas
// 3 columnas

#include<iostream> // Librería para entrada y salida
using namespace std; // Permite utilizar el cout y cin directamente

int main()
    {
        //Creamos una mtriz de 2 filas y de 3 columnas
        int numeros[2][3];

        //Guardamos los valores de la primera fila.
        numeros[0][0] = 10;
        numeros[0][1] = 20;
        numeros[0][2] = 30;

        //GUardamos los vlaores de la segunda fila.
        numeros[1][0] = 40;
        numeros[1][1] = 50;
        numeros[1][2] = 60;

        //Mostramos un titulo
        cout<<"======MATRICES======"<<endl;
            for (int fila = 0; fila < 2; fila++)
            {
                /* Este ciclo controla las columnas */
                for(int columna = 0; columna < 3; columna++)
                {
                    //MOstramos cada elemneto de la matriz
                    cout<<numeros[fila][columna]<<" ";
                }
                //Salto de linea al terminar cada fila
                cout<<endl;
            }
            
            return 0;


    }
