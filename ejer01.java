
// Programación 
// Geovani Alvares Gopar PROGRAMACIÓN Jaciel Luna
/* 
EJERCICIO 1 
- Representa las diferentes sintaxis que existen de crear comentarios en el lenguaje (en una línea, varias...). Escribe el nombre del profesor y tus datos generales
- Crea una variable (y una constante si el lenguaje lo soporta). 
- Crea variables representando todos los tipos de datos primitivos del lenguaje (cadenas de texto, enteros, booleanos...).  
- Imprime por terminal el texto: "¡Hola, [y el nombre del lenguaje]!"

/* Ejemplo de la creacion de comentarios */

public class main  { // creacion de la función
    public static void (String [] args){
        // empezaremos con las variables primitivas
        byte edadGeovani = 22; // La varible de byte permite la entrada de numeros desde -128 a 127
        int ahorro = 123456789; // Variable de tipo entero que permite la entrada numeros grandes 
        long ahorroTotal = 323456789324234L; // variable utilizada para numeros aun mas extensos y ademas debemos de agregar
        // la letra L al final para poder mencinarle al codigo que es mas extenso el numero

        float peso = 1.32;//Variable de tipo flotante pero el ultimo numero colocarle la F para mencionar que
        // no se ocapan tantos decimales
        double masaAtomica = 270.92923115; // Variable para decimal pero con mas decimales para resultados mas precisos

        boolean verdadero = true; // Variable booleana para la decison verdadero 
        boolean falso = false; // Variable booleana para declarar falso.

        char letra = 'S'; //Variable de tipo caracter con una sola letra

        final float GRAVEDAD = 9.81 // Creacion de una constante colocando al inicio la palabra FINAL

        //variables no primitivas o por referencia

        Float f = null; // Variable tipo flotante que puede aceptar nulos
        Double d = null; // Variable tipo doble que tambien puede aceptar tipos nulos
        Boolean b = null // Variable booleana que tambien acepta nulos
        Character c = null // Variante de la variable char el cual tambien acepta nulos
        Integer i = null // Variante de la avariable int que de igual manera acepta nulos
        String cadena = null // Variable que permite un cadena de caracteres

        // Mensaje en pantalla
        cadena = "Hola JAVA" // Mensaje que se va a imnprimir
        
        System.out.println(cadena); //Mandamos a llamar la variable cadena para poder imprimir el mensaje

    }
}