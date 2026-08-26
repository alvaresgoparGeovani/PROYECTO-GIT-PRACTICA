
// 1. Operadores Aritméticos
function probarAritmeticos() {
    console.log("--- 1. Aritméticos ---");
    let a = 10, b = 3;
    console.log("Suma (10+3):", a + b);
     console.log("Resta (10-3):", a - b);
      console.log("Multiplicación (10*3):", a * b);
       console.log("División (10/3):", a / b);
    console.log("Potencia (10^3):", a ** b);
    console.log("Módulo (residuo):", a % b);
}

// 2. Operadores de Comparación
function probarComparacion() {
    console.log("\n--- 2. Comparación ---");
    let a = 10, b = 20;
    console.log("¿Es 10 menor que 20?:", a < b);
    console.log("¿Es 10 mayor que 20?:", a > b);
    console.log("¿Es 10 mayor o igual que 10?:", a >= 10);
    console.log("¿Es 20 menor o igual que 10?:", b <= 10);
    console.log("¿Es 10 igual que 10?:", a == 10);
    console.log("¿Es 10 igual que 10?:", a != 10);

}

// 3. Identidad (Estricta)
function probarIdentidad() {
    console.log("\n--- 3. Identidad (===) ---");
    let valor = 5;
    let texto = "5";
    console.log("¿Es 5 idéntico a '5' (valor y tipo)?:", valor === texto);
    console.log("¿Es 5 igual a 5?:", valor === 5);
}

// 4. Operadores Lógicos
function probarLogicos() {
    console.log("\n--- 4. Lógicos ---");
    let esVerdad = true;
    let esFalso = false;
    console.log("AND (true && false):", esVerdad && esFalso);
    console.log("OR (true || false):", esVerdad || esFalso);
}

// 5. Pertenencia
function probarPertenencia() {
    console.log("\n--- 5. Pertenencia (in) ---");
    let coche = { marca: "Toyota", modelo: "Corolla" };
    console.log("¿Existe la propiedad 'marca' en el objeto?:", "marca" in coche);
}

// 6. Operadores de Bits
function probarBits() {
    console.log("\n--- 6. Bits ---");
    let a = 5; // 0101 en binario
    let b = 1; // 0001 en binario
    console.log("AND de bits (5 & 1):", a & b);
}

// 7. Condicionales
function probarCondicionales() {
    console.log("\n--- 7. Condicionales ---");
    let clima = "soleado";
    // Usamos el operador ternario
    let actividad = (clima === "soleado") ? "Ir al parque" : "Quedarse en casa";
    console.log("Actividad sugerida:", actividad);
}

// 8. Iterativas (Bucles)
function probarIterativas() {
    console.log("\n--- 8. Iterativas ---");
    for (let i = 1; i <= 3; i++) {
        console.log("Vuelta número:", i);
    }
}

function probarIterativas01() {
   let contador = 0;
   while (contador < 2) {
    console.log("8.1  Contando...\n");
    contador++; // Incremento para evitar bucle infinito
}
}

function probarIterativas02() {
  let contador = 1; // 1. Inicializamos la variable que controlará el bucle

do {
    // 2. Este bloque se ejecuta SIEMPRE al menos una vez
    console.log("8.2  El contador vale: " + contador); 
    
    contador++; // 3. Aumentamos el contador en cada vuelta para que la condición cambie
    
} while (contador <= 3); // 4. Evaluamos la condición después de ejecutar el bloque
// Si contador <= 3 es true, el bucle vuelve a subir al 'do'. Si es false, termina.
}

// 9. Excepciones
function probarExcepciones() {
    console.log("\n--- 9. Excepciones ---");
    try {
        let x = 10;
        // Simulamos un error llamando a una función que no existe
        noExiste(); 
    } catch (e) {
        console.log("Error capturado correctamente:", e.name);
    }
}

// --- EJECUCIÓN TOTAL ---
// Llamamos a cada función en orden
probarAritmeticos();
probarComparacion();
probarIdentidad();
probarLogicos();
probarPertenencia();
probarBits();
probarCondicionales();
probarIterativas();
probarIterativas01();
probarIterativas02();
probarExcepciones();