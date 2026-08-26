
# ======================================
# OPERADORES EN PYTHON
# ======================================

print("===== OPERADORES =====")

# Declaración de variables
a = 10
b = 5

# ======================================
# OPERADORES ARITMÉTICOS
# ======================================

print("\nOPERADORES ARITMÉTICOS")

print("Suma:", a + b) #Se suman las variables para poder sumar
print("Resta:", a - b) #Se usan las variables para restar
print("Multiplicación:", a * b) #Se usan las variables para poder multiplicar
print("División:", a / b) #Se usan las variables par poder dividir
print("División entera:", a // b) #Se uasn las variables para poder dividir con variables enteras
print("Módulo:", a % b) #Se usan para poder sacar el modulo
print("Potencia:", a ** b) #Se usan para poder sacar la potencia 

# ======================================
# OPERADORES DE COMPARACIÓN
# ======================================

print("\n-----OPERADORES DE COMPARACIÓN-----")

print("a) a == b:", a == b) #a y b son iguales ? la respuesta es no
print("b) a != b:", a != b) #a y b no son iguales ? La respuesta es TRUE
print("c) a > b:", a > b) #a es mayor que b ? SI
print("d) a < b:", a < b) #a es menor que b? no
print("e) a >= b:", a >= b) #a es mayor oigual que b? si
print("f) a <= b:", a <= b) #a es mayot o igual que b? no

# ======================================
# OPERADORES LÓGICOS
# ======================================

print("\n-----OPERADORES LÓGICOS-----")

x = True
y = False

print("x and y:", x and y) # La condicion se debe de cumplir en ambos ladsos
print("x or y:", x or y) #La conicion soo se deb de cumplir en un lado
print("not x:", not x) 

# ======================================
# OPERADORES DE ASIGNACIÓN
# ======================================

print("\n-----OPERADORES DE ASIGNACIÓN-----")

c = 10
print("Valor inicial:", c) #Se imprime el valor de c

c += 5
print("c += 5:", c) # Se imprime el valos de c + 5 = 15

c -= 3
print("c -= 3:", c) #Se imprime el valor de c - 3 = 12

c *= 2
print("c *= 2:", c) #Se imprime el valor de c * 2 = 24

c /= 4
print("c /= 4:", c) #Se imprime el valor de c / 4 = 6

# ======================================
# OPERADORES DE IDENTIDAD
# ======================================

print("\nOPERADORES DE IDENTIDAD") #TENEMOS DUDAS   ||

lista1 = [1, 2, 3]
lista2 = lista1
lista3 = [1, 2, 3]

print("lista1 is lista2:", lista1 is lista2)
print("lista1 is lista3:", lista1 is lista3)
print("lista1 is not lista3:", lista1 is not lista3)

# ======================================
# OPERADORES DE PERTENENCIA
# ======================================

print("\n-----OPERADORES DE PERTENENCIA-----")

numeros = [10, 20, 30, 40, 50] #eEsta es la lista de pertenencia que se nos muestra

print("30 in numeros:", 30 in numeros) #Imprime si el numero esta dentro de la lista TRUE
print("100 in numeros:", 100 in numeros) #Imprime si el numero esta dentro de la lista FALSE
print("100 not in numeros:", 100 not in numeros) #Imprime si el numero NO esta dentro de la lista TRUE

# ======================================
# OPERADORES A NIVEL DE BITS
# ======================================

print("\nOPERADORES DE BITS") #DUDAS

m = 6
n = 3

print("m & n =", m & n)
print("m | n =", m | n)
print("m ^ n =", m ^ n)
print("~m =", ~m)
print("m << 1 =", m << 1)
print("m >> 1 =", m >> 1)

# ======================================
# ESTRUCTURAS DE CONTROL
# ======================================

print("\n===== ESTRUCTURAS DE CONTROL =====")

# ======================================
# CONDICIONAL IF - ELIF - ELSE
# ======================================

print("\n-----CONDICIONAL IF-----") # Permite tomar decisiones

edad = 20 #Variable dada para las condiciones

if edad >= 18: # Si se cumple la condicion... 
    print("Es mayor de edad") # Se muestra este mensaje
elif edad == 17: # Si se iguala esta condición...
    print("Está por cumplir la mayoría de edad") # Se muestra esta otra condicion
else: # Si ninguna se cumple...
    print("Es menor de edad") #Se muestra esta ultima respuesta

# ======================================
# CICLO FOR
# ======================================

print("\n-----CICLO FOR-----") # Permite repetir instrucciones

for i in range(1, 6): # Muestra de que numero empieza y en que numero termina
    print("Iteración:", i) #Imprime los resultados en donde el 6 ya no se imprime

# ======================================
# CICLO WHILE
# ======================================

print("\n------CICLO WHILE------") # Repite instrucciones a ocupar

contador = 1 # Variable a ocupar 

while contador <= 5: # Nos funcioona para poder imprimir los resultados de manera que comience por el 1 hasta el 5
    print("Contador:", contador) #Valores a imprimir
    contador += 1 # Valor que se va imprimiendo y a la vez validando hasta que llegue a su respectivo limite

# ======================================
# MANEJO DE EXCEPCIONES
# ======================================

print("\n-----MANEJO DE EXCEPCIONES-----")

try: # Controlan errores durante la ejecucion
    numero1 = 10 # Variable 1
    numero2 = 0 # Variable 2

    resultado = numero1 / numero2 # Operacion a ocupar

    print("Resultado:", resultado) # Valor a imprimir si el resultado es valido

except ZeroDivisionError: # DUDAAAAAAAAAAAAAAAAAAAAAS
    print("Error: No se puede dividir entre cero.") #Valor a imprimir si no coincide el resultado

finally:
    print("Finalizó el bloque de excepción.") #Finalizacion de la información 
