//Programa de unsistema de compras de un cine


#include <iostream>
using namespace std;
 
//constante 
// El descuento es de 10% y no cambia durante el programa
const float por_descuento = 0.10;

//funcion :
//Su unica tarea es mostrar las opciones disponibles. 
void mostrarMenu() 
{
    cout << "=== SISTEMA DE COMPRAS DEL CINE ===" << endl;
    cout << "1. Niño - $50" << endl;
    cout << "2. Adulto - $80" << endl;
    cout << "3. Adulto mayor - $60" << endl;
    cout << "Selecciona una opcion (1-3): ";
}

int main() 
{
    int cantidadProductos = 0;
    float subtotal = 0.0; // Variable acumuladora para ir sumando las compras
    int opcion = 0;

    cout << "¿Cuantos boletos deseas comprar? ";
    cin >> cantidadProductos;
    cout << endl;

    for (int i = 1; i <= cantidadProductos; i++) 
    {
        bool opcionValida = false;
        
        do 
        {
            mostrarMenu();
            cin >> opcion;

            switch (opcion) 
            {
                case 1:
                    subtotal += 50.0; // Acumula el precio del boleto de niño
                    opcionValida = true;
                    break;
                case 2:
                    subtotal += 80.0; // Acumula el precio del boleto de adulto
                    opcionValida = true;
                    break;
                case 3:
                    subtotal += 60.0; // Acumula el precio del boleto de adulto mayor
                    opcionValida = true;
                    break;
                default:
                    cout << "Opcion invalida. Por favor, selecciona una opcion valida." << endl;
            }
        } while (!opcionValida);
    }
    cout <<"Total de la compra"<< endl;
    cout << "Subtotal: $" << subtotal << endl;

    // Aplicar descuento si el subtotal supera los $200
    if (subtotal > 200.0) 
    {
        float descuento = subtotal * por_descuento;
        subtotal -= descuento;
        cout << "Se aplico un descuento del 10%. Nuevo total: $" << subtotal << endl;
    } 
    else 
    {
        cout << "Total a pagar: $" << subtotal << endl;
    }

    return 0;
}
