
#include <iostream>//Se manda a llamar la libereria
using namespace std; // Se usa el STD para poder liberar espacio

int main() { //Funcion a utilizar
//exepciones que permiten manejar errores sin que el programa termine abruptuamente
    try {
        throw 404;
    }
    catch(int error) {
        cout << "Error encontrado: " << error;
    }

    return 0;
}
