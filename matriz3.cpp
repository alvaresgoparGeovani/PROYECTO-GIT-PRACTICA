
#include<iostream> // Funciona para poder utilizar el cout y cin
#include<iomanip> // Para dar formato de decimales en el promedio

using namespace std;

int main()
    {
        double calificaciones [3][3];
        double sumaTotal = 0.0;

        //Lectura de calificaiones
        cout << "---Registro de calificaciones---" << endl;
        for (int i = 0; i < 3; i++) //Esto funci
        {
            cout<<"\n Estudiante"<<(i + 1) <<":"<<endl;
            for (int j = 0; j < 3; j++)
            {
                cout<<"Materia" <<(j + 1) <<":";
                cin >> calificaciones [i][j];

                //Suma para el total general
                sumaTotal += calificaciones[i][j];
            }
        }

        //Muestra de la matriz completa
        cout << "\n---Tabla de calificaciones---" <<endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
            cout << calificaciones[i][j] << "\t";
            }
            cout << endl;
        }
        
        // Calculo y muestra de suma total y promedio general
        double promedioGeneral = sumaTotal / 9.0;
        cout << fixed << setprecision(2);
        cout << "\nSuma total de calificaciones: "<<sumaTotal << endl;
        cout << "Promedio general del grupo: "<<promedioGeneral << endl;

        //RETO ADICIONAL: Promedio individual de cada estudiante
        cout << "\n--Promedio por estudiante---" << endl;
        for (int i = 0; i < 3; i++)
        {
            double sumaEstudiante = 0.0;
            for (int j = 0; j < 3; j++)
            {
                sumaEstudiante += calificaciones[i][j];
            }
            cout << "Estudiante" << (i + 1) <<" : " <<(sumaEstudiante / 3.0) << endl;
            
        }
        
        return 0;

    }   