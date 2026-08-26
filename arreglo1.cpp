
//Programa de practica de arreglos de lista de edades

#include<iostream>

using namespace std;

int main()
    {
        int edad[5];
     
        cout<<"===================="<<endl;
        cout<<" Lista de alumnos "<<endl;
        cout<<"===================="<<endl;

        for (int i = 0; i < 5; i++){

            cout<<"Ingresa la edad " <<(i + 1) << ":" ;
            cin>>edad[i];
        }

        cout<<"\n--Edades registradas--"<<endl;
        for( int i = 0; i < 5; i++){
            cout<<"Edad " <<(i + 1) << ":" << edad[i] << "anos" <<endl;
        }

        return 0;
    }
