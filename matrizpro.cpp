
//EJERCICIO INTEGRADOR: SISTEMA DE CALIFICACIONES

#include<iostream> // Libreria para utilizar el cout y cin
#include<string> //Libreria para trabajar con cadenas de caracteres

using namespace std; // Permite utilizar el cout y el cin sin necesidad de agregarl el std

// Creamos una constante con el numero maximo de alumnos
const int MAX_ALUMNOS = 5 ;

//Creamso una funcion llamada calcularPromedio.
//La funcion recibe un arreglo de calificaciones
//y la cantidad de alumnos registrados.

float calcularPromedio (float calificaciones[], int cantidadAlumnos)
    {
        //Creamos unas variables para acumular la suma de las calificaciones.
        float  suma = 0;
        //Recorremos todas las calificaciones registradas.

        for(int i = 0; i < cantidadAlumnos; i++)
        {
            //sumamos la cada calificacion
            suma = suma + calificaciones[i]; 
        }
        //Calculamos el promedio
        float promedio = suma / cantidadAlumnos;

        //Regresamos el resultado
        return promedio;
    }

    //Funcion principal
    int main()
        {
            //Creamos un arreglo para el programa principal
        string nombres [MAX_ALUMNOS];
            //Creamos un arreglo para guardar las calificaciones
            float calificaciones [MAX_ALUMNOS];
            //Esta variable contara cuantos alumnos hemos registrado.
            int cantidadAlumnos = 0;
            //Esta variable guardara la opcion seleccionada en el menu
            int opcion;

            //Comenzamos un ciclo do while.
            //Este ciclo permitia repetir el menu 
            do
            {
                /* MOstramos el titulo del programa */
                cout<<"\n ====== Sistema de calificaiones ======" << endl;

                //Mostramos la primera opcion.
                cout<< "1. Registrar alumno" << endl;

                //Mostramo sla seh=gunda opcion.
                cout<<"2. Mostrar alumnos" <<endl;

                //Mostramos la segunda opcion.
                cout << "3.Calcular promedio"<< endl;

                //Mostramos la cuarta opcion
                cout<<"4. Buscar alumno" << endl;

                //Mostramos la quinta opcion 
                cout<<"5. Salir" << endl;

                //PEDIMOS AL USUARIO SELECIIONAR UNA OPCION
                cout<< "Selecciona un opcion: ";
                
                //Guardamos la opcion seleccionada 
                cin >> opcion;

                //Utilizamos switch para decidir que opercaion realizar.

                    switch (opcion)
                    {
                        //OPCION 1: REGISTRAR ALUMNO.
                    case 1:
                        /* VERIFICAMOS QUE TODAVIA EXISTA ESPACIO*/
                        if (cantidadAlumnos < MAX_ALUMNOS)
                        {
                            /* Pedimos el nombre del alumno */
                            cout<<"Nombre del alumno: ";

                            //Guardamos el nombre en la posicion disponible
                            cin>> nombres[cantidadAlumnos];

                            //Pedimos la calificacion
                            cout<< "Calificacion: ";
                            
                            //GUardamos temporalmente la calificacion.
                            cin>> calificaciones[cantidadAlumnos];

                            //Validamos que la calificacion este entre o y 10
                            if (calificaciones[cantidadAlumnos] >= 0 &&
                            calificaciones[cantidadAlumnos] <=10)
                            {
                                /* Aumnetamos el contador de alumnos */
                                cantidadAlumnos++;

                                //Mostramos mensaje de confirmacion
                                cout<<"Alumno registrado  correctamente." << endl;



                            }
                            else
                            {
                                /* Mostramos un mensaje si la calificaion es incorrecta */
                                cout<<"La calificacion debe estar entre 0 y 10"<<endl;

                            }
                            

                        }
                        else
                        {
                            /* Este mensaje aparece si ya tenemos cinco alumnos */
                            cout<<"Ya no se puede registrar mas alumnos." << endl;
                        }
                        //Terminamos este case 1
                        break;

                    case 2:

                        //Verificamos si existen alumnos rgistrados.
                        if (cantidadAlumnos == 0)
                        {
                            /* Informamos que todavia no hay datos */
                            cout<<"No existen alumnos registrados."<<endl;
                        }
                        else
                        {
                            /* Mostramos un encabezado */
                            cout<<"======Alumnos registrados======" <<endl;

                            //Recorremos los alumnos registrados
                            for (int i = 1; i < cantidadAlumnos; i++)
                            {
                                /* Mostramos el nomnbre */
                                cout<<nombres[i];

                                //MOstramos la calificaon.
                                cout<<"-"<<calificaciones[i];

                                //Evaluamos si el alumno aprobo
                                if (calificaciones[i] >= 6)
                                {
                                    /* Mostramos que aprobo */
                                    cout<<"- APROBADO" << endl;
                                }
                                else
                                {
                                    /* Mostramos que reprobo */
                                    cout<<"Reprobado"<<endl;
                                }
                            }
                        }
                            //Terminamos este case
                            break;

                    case 3:
                            //Verificamos si existen alumnos.
                            if (cantidadAlumnos == 0)
                            {
                                /* Si no existen no podemos calcular promedio */
                                cout<<"No existen alumnos registrados." << endl;
                            }
                            else
                            {
                                /* Llamamos a la funcion calulcar el promedio */
                                float promedio = calcularPromedio 
                                (
                                    calificaciones,cantidadAlumnos
                                );
                                //Mostramos el resultado.
                                cout<< "Promedio del grupo: " <<promedio<<endl;
                            }
                            //Terminamos este case
                            break;

                            //Opcion 4:Buscar Alumno
                    case 4:
                            {
                                //Vericamos si existen alumnos registrados
                                if (cantidadAlumnos == 0)
                                {
                                    /* Informamos que no hay alumnos */
                                    cout<<"No existen alumnos registrados."<<endl;
                                }
                                else
                                {
                                    /* Creamos una variable para guardar el nombre buscado */
                                    string nombreBuscado;

                                    //Creamos una variable para saber si encnontramos al alumno
                                    bool encontrado = false;

                                    //Pedimos el nombre del alumno
                                    cout<<"Nombre del alumno que deseas buscar: ";

                                    //Guardamos el nombre escrito
                                    cin>> nombreBuscado;

                                    //Recorremos el arreglo de nombre
                                    for (int i = 0; i < cantidadAlumnos; i++)
                                    {
                                        /* comparamos el nombre almacenado con el nombre buscado */
                                        if (nombres[i] == nombreBuscado)
                                        {
                                            /* Informas que encontramos al alumno */
                                            cout<<"\n Alumno encontrado." <<endl;

                                            //Mostramos su nombre
                                            cout<<"Nombre: "<<nombres[i] << calificaciones;

                                            //Mostramos su calificacion
                                            cout<<"Calificacion: " << calificaciones[i]<<endl;

                                            if (calificaciones[i] >= 6)
                                            {
                                                //Mostramos que aprobo.
                                                cout<<"Estado: Aprobado" <<endl;
                                            }

                                            else
                                            {
                                                //Mostramos que reprobo
                                                cout<<"Estado: REPROBADO";
                                            }
                                            //Indicamos que encontramos al alumno
                                            encontrado = true;
                                            

                                        }
                                        
                                    }
                                    
                                    //verificamos si despues del recorrido no encontramos nada

                                    if (encontrado == false)
                                    {
                                        //Mostramos el mensaje correspondiente.
                                        cout<<"Alumno nno encontrado." << endl;
                                    }
                                    
                                }
                                
                                //Terminamos este case
                                break;
                                
                            }
                    //OPCION 5: SALIR
                    case 5:
                    //Mostramos un mensaje de despedida.
                    cout<<"Gracias por utilizar el sistema." << endl;

                    //Terminamos este case
                    break;

                    //Esta opcion se ejecutara si el usuario escribe otro numero
                    default:

                    //Mostramos un mensaje de error
                    cout << "Opcion no valida." <<endl;

                    //Terminamos este case.
                    break;
                            
                    }

                    

            } while (opcion != 5);
            
        //Indicamos que el programa termino correctamente
        return 0;
        
        }
