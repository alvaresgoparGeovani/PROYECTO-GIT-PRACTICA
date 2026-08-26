
"""
Crea ejemplos utilizando todos los tipos de operadores : Aritméticos, lógicos, de comparación, asignación,
 identidad, pertenencia, bits...(Ten en cuenta que cada lenguaje puede poseer unos diferentes) 
- Utilizando las operaciones con operadores que tú quieras, crea ejemplos que representen todos los tipos de
 estructuras de control que existan en el lenguaje: Condicionales, iterativas, excepciones... 
- Debes hacer print por consola del resultado de todos los ejemplos.
"""

# Operadores en phyton 
# SUMA
x = 5 #Asignacion de variable
x += 10 # Asignacion de variable para sumar
print(x) # Print de resultado de la suma

# RESTA
x = 5 #Asignacion de variable
x -= 10 #Asignacion de variable con resta
print(x) # Print de la resta 

#Multiplicacion 
x = 5 #Asignacion de variable 
x *= 3 #Asignacion de variable de la multiplicacion
print(x) # print de multiplicacion

#Divison 
x = 10 # Asignacion de variable
x /= 2 # Asignacion de variable con division
print(x) # print de division

# Operadores de comparacion comparan valores y los devuelven
#igual que
print (5 == 5)

#diferente de
print (5 != 5)

#mayor que
print (10 > 5)

#menor que
print (5 < 10)

#mayor o igual 
print (5 >= 5)

#menor o igual
print (4 <= 7)

# Operadores logicos. sirven para combinar condiciones

#and: las dos condiciones deben de cumplirse 
print(5 > 2 and 10 > 3)

#or: funciona si se cumple una de las condicione
print(5 < 2 or 10 > 3)

#not: invierte el resultado
print( not True)

#CONDICIONES: Permite la toma de decisiones si o sino.

#if
edad = 18
if edad >=18: #si se cumple la condicion 
    print("Usted es mayor de edad") # se imprime el resultado

#if else
edad = 15
if edad >=18: #condicion
    print("Usted es mayor de edad") #si se cumple manda el mensaje
else:
    print("Usted es menor de edad") # y si no se cumple se manda un mensaje diferente

#elif 
calificacion = 80 #Declaracion de la variable
if calificacion >= 90: #i se cumple con esta condicion
    print("Excelente") # aparece este mensaje
elif calificacion >= 70: #Si se cumple este mensaje
    print("Aprobado") # Aprace este mensaje
else: #Sino se cumple ninguna
    print("REPROBADO") #Aparece este mensaje

#ITERATIVAS: Sirven para repetir un  codigo

#ciclo while
contador = 1
while contador <=5:
    print(contador)
    contador += 1

#ciclo for
for i in range(5):
    print(i)

#ciclo range
for i in range(1, 7):
    print(i)

#Execpciones 

#Uso de try y except: Si una opcion no es valida envia un mensaje de regreso 
try:
    print(10 / 0)
except:
    print("ERROR")
    
