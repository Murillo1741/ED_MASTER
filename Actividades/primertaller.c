#include <stdio.h>

#define TAM 10

void llenarArray(int a[], int n) {
    int i = 0, temp;
    while (i < n) {
        printf("Ingrese el tiempo %d (en minutos, entero positivo): ", i + 1);
        if (scanf("%d", &temp) == 1 && temp > 0) {
            a[i] = temp;
            i++;
        } else {
            printf("Entrada invalida. Por favor ingrese un numero entero positivo.\n");
            while(getchar() != '\n');
        }
    }
}

void mostrarArray(int a[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

void ordenarSelectionAscendente(int a[], int n) {
    int i, j, min, temp, paso = 1;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        printf("Paso %d: ", paso++);
        mostrarArray(a, n);
    }
}

void ordenarInsertionDescendente(int a[], int n) {
    int i, j, key, paso = 1;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        printf("Paso %d: ", paso++);
        mostrarArray(a, n);
    }
}

int main() {
    int tiempos[TAM], original[TAM];
    int opcion, datosIngresados = 0;

    do {
        printf("\nMENU\n");
        printf("1. Registrar tiempos\n");
        printf("2. Mostrar arreglo original\n");
        printf("3. Ordenar ascendente (Selection Sort)\n");
        printf("4. Ordenar descendente (Insertion Sort)\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                llenarArray(tiempos, TAM);
                for (int i = 0; i < TAM; i++) original[i] = tiempos[i];
                datosIngresados = 1;
                break;
            case 2:
                if (datosIngresados) {
                    printf("Arreglo original: ");
                    mostrarArray(original, TAM);
                } else {
                    printf("Primero registre los tiempos.\n");
                }
                break;
            case 3:
                if (datosIngresados) {
                    for (int i = 0; i < TAM; i++) tiempos[i] = original[i];
                    printf("Proceso Selection Sort (ascendente):\n");
                    ordenarSelectionAscendente(tiempos, TAM);
                    printf("Resultado final: ");
                    mostrarArray(tiempos, TAM);
                } else {
                    printf("Primero registre los tiempos.\n");
                }
                break;
            case 4:
                if (datosIngresados) {
                    for (int i = 0; i < TAM; i++) tiempos[i] = original[i];
                    printf("Proceso Insertion Sort (descendente):\n");
                    ordenarInsertionDescendente(tiempos, TAM);
                    printf("Resultado final: ");
                    mostrarArray(tiempos, TAM);
                } else {
                    printf("Primero registre los tiempos.\n");
                }
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 5);

    return 0;
}