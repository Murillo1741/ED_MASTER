# Primer taller (Algoritmos de ordenamiento)

Este programa nos permite analizar los tiempos de resolución de problemas de soporte. Para ello utilizamos los arreglos (o arrays), y algoritmos de ordenamiento como el Selection Sort y Bubble Sort.

## Menú del programa.

1. Registrar tiempos
2. Mostrar arreglo original
3. Ordenar ascendente (Selection Sort)
4. Ordenar descendente (Bubble Sort)
5. Salir

## Ejemplo de salida

```
MENU
1. Registrar tiempos
2. Mostrar arreglo original
3. Ordenar ascendente (Selection Sort)
4. Ordenar descendente (Insertion Sort)
5. Salir
Seleccione una opcion: 1
Ingrese el tiempo 1 (en minutos, entero positivo): 12
Ingrese el tiempo 2 (en minutos, entero positivo): 8
Ingrese el tiempo 3 (en minutos, entero positivo): 15
Ingrese el tiempo 4 (en minutos, entero positivo): 7
Ingrese el tiempo 5 (en minutos, entero positivo): 10
Ingrese el tiempo 6 (en minutos, entero positivo): 9
Ingrese el tiempo 7 (en minutos, entero positivo): 18
Ingrese el tiempo 8 (en minutos, entero positivo): 11
Ingrese el tiempo 9 (en minutos, entero positivo): 14
Ingrese el tiempo 10 (en minutos, entero positivo): 20

Seleccione una opcion: 2
Arreglo original: [12, 8, 15, 7, 10, 9, 18, 11, 14, 20]

Seleccione una opcion: 3
Proceso Selection Sort (ascendente):
Paso 1: [7, 8, 15, 12, 10, 9, 18, 11, 14, 20]
Paso 2: [7, 8, 15, 12, 10, 9, 18, 11, 14, 20]
Paso 3: [7, 8, 9, 12, 10, 15, 18, 11, 14, 20]
Paso 4: [7, 8, 9, 10, 12, 15, 18, 11, 14, 20]
Paso 5: [7, 8, 9, 10, 11, 15, 18, 12, 14, 20]
Paso 6: [7, 8, 9, 10, 11, 12, 18, 15, 14, 20]
Paso 7: [7, 8, 9, 10, 11, 12, 14, 15, 18, 20]
Paso 8: [7, 8, 9, 10, 11, 12, 14, 15, 18, 20]
Paso 9: [7, 8, 9, 10, 11, 12, 14, 15, 18, 20]
Resultado final: [7, 8, 9, 10, 11, 12, 14, 15, 18, 20]

Seleccione una opcion: 4
Proceso Insertion Sort (descendente):
Paso 1: [12, 8, 15, 7, 10, 9, 18, 11, 14, 20]
Paso 2: [15, 12, 8, 7, 10, 9, 18, 11, 14, 20]
Paso 3: [15, 12, 8, 7, 10, 9, 18, 11, 14, 20]
Paso 4: [15, 12, 10, 8, 7, 9, 18, 11, 14, 20]
Paso 5: [15, 12, 10, 9, 8, 7, 18, 11, 14, 20]
Paso 6: [18, 15, 12, 10, 9, 8, 7, 11, 14, 20]
Paso 7: [18, 15, 12, 11, 10, 9, 8, 7, 14, 20]
Paso 8: [18, 15, 14, 12, 11, 10, 9, 8, 7, 20]
Paso 9: [20, 18, 15, 14, 12, 11, 10, 9, 8, 7]
Resultado final: [20, 18, 15, 14, 12, 11, 10, 9, 8, 7]
```

## ¿Cómo compilar y ejecutar?

Abre una terminal en la carpeta [actividades](http://_vscodecontentref_/0) y ejecuta:

```sh
gcc primertaller.c -o primertaller
./primertaller

##Créditos
Autor: Murillo Valencia Diver Andrés
Universidad del Pacífico
Materia: Estructura de datos
Diurno