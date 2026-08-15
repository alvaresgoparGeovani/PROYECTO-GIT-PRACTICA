//Programa de un sistema de compras de una cafetería.

#include <iostream>
#include <iomanip> // Para dar formato decimal a los precios (mostrar ceros si es necesario)

using namespace std;

int main() {
    // Se usan constantes para que estos valores no cambien durante la ejecución del programa.
    const double PRECIO_CAFE = 35.0;
    const double PRECIO_SANDWICH = 65.0;
    const double PRECIO_JUGO = 40.0;
    const double UMBRAL_DESCUENTO = 150.0; // Monto a partir del cual se aplica descuento
    const double PORCENTAJE_DESCUENTO = 0.10; // 10% de descuento

    // ==========================================
    // 2. DECLARACIÓN DE VARIABLES
    // ==========================================
    int cantidadProductos = 0;
    double subtotal = 0.0; // Variable acumuladora para ir sumando las compras
    int opcion = 0;

    // Configuración para mostrar 2 decimales en los precios (ej. $135.00)
    cout << fixed << setprecision(2);

    // ==========================================
    // 3. ENTRADA DE DATOS PRINCIPAL
    // ==========================================
    cout << "=== SISTEMA DE COMPRAS DE LA CAFETERIA ===" << endl << endl;
    cout << "¿Cuantos productos deseas comprar? ";
    cin >> cantidadProductos;
    cout << endl;

    // ==========================================
    // 4. CICLO FOR PARA REGISTRAR CADA PRODUCTO
    // ==========================================
    // El ciclo se repite la cantidad de veces que el usuario indicó.
    for (int i = 1; i <= cantidadProductos; i++) {
        
        // Ciclo do-while (RETO OPCIONAL): 
        // Vuelve a pedir la opción si el usuario ingresa un número distinto de 1, 2 o 3.
        bool opcionValida = false;
        
        do {
            cout << "-----------------------------------" << endl;
            cout << "Producto " << i << " de " << cantidadProductos << endl;
            cout << "1. Cafe     $" << PRECIO_CAFE << endl;
            cout << "2. Sandwich $" << PRECIO_SANDWICH << endl;
            cout << "3. Jugo     $" << PRECIO_JUGO << endl;
            cout << "Selecciona una opcion (1-3): ";
            cin >> opcion;

            // EVALUACIÓN DE LA OPCIÓN CON SWITCH
            switch (opcion) {
                case 1:
                    subtotal += PRECIO_CAFE; // Acumula el precio del café (subtotal = subtotal + PRECIO_CAFE)
                    opcionValida = true;
                    break;
                case 2:
                    subtotal += PRECIO_SANDWICH; // Acumula el precio del sándwich
                    opcionValida = true;
                    break;
                case 3:
                    subtotal += PRECIO_JUGO; // Acumula el precio del jugo
                    opcionValida = true;
                    break;
                default:
                    // Si escribe un número que no es 1, 2 o 3
                    cout << "\n[!] Opcion no valida. Por favor, intenta de nuevo.\n" << endl;
                    opcionValida = false;
                    break;
            }

        } while (!opcionValida); // Se repite hasta que elija una opción válida

        cout << endl;
    }

    // ==========================================
    // 5. CÁLCULO DE DESCUENTO Y TOTAL FINAL
    // ==========================================
    double descuento = 0.0;

    // Si la compra supera los $150, se calcula el 10% de descuento
    if (subtotal > UMBRAL_DESCUENTO) {
        descuento = subtotal * PORCENTAJE_DESCUENTO;
    }

    double totalFinal = subtotal - descuento;

    // ==========================================
    // 6. MOSTRAR RESULTADOS
    // ==========================================
    cout << "===================================" << endl;
    cout << "RESUMEN DE COMPRA" << endl;
    cout << "===================================" << endl;
    cout << "Subtotal:        $" << subtotal << endl;

    // Solo se muestra la línea de descuento si realmente se aplicó uno
    if (descuento > 0.0) {
        cout << "Descuento (10%): -$" << descuento << endl;
    } else {
        cout << "Descuento:        $0.00 (Requiere compra mayor a $150)" << endl;
    }

    cout << "Total a pagar:   $" << totalFinal << endl;
    cout << "===================================" << endl;

    return 0;
}