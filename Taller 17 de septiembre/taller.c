#include <stdio.h>

#define N 5 // Número de estudiantes

typedef struct {
    int codigo;
    float nota;
} Estudiante;

// Arreglo predefinido de estudiantes
Estudiante estudiantes[N] = {
    {2024101, 4.5},
    {2024102, 3.2},
    {2024103, 2.5},
    {2024104, 4.0},
    {2024105, 3.8}
};

//Función para mostrar estudiantes aprobados

void mostrarEstudiantesAprobados(Estudiante arr[], int size) {
    printf("Estudiantes aprobados:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i].nota >= 3.0) {
            printf("Codigo: %d, Nota: %.2f\n", arr[i].codigo, arr[i].nota);
        }
    }
}

int main () {
    mostrarEstudiantesAprobados(estudiantes, N);
    return 0;
}

//Menú interactivo
int main() {
    int opcion;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Mostrar estudiantes aprobados\n");
        printf("2. Buscar la Nota Máxima del Curso (Recursivo)\n");
        printf("3. Calcular el Promedio del Curso (Recursivo)\n");
        printf("4. Ordenar Códigos de Estudiantes (Selection Sort Recursivo)\n");
        printf("5. Mostrar todos los estudiantes\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarEstudiantesAprobados(estudiantes, N);
                break;
            case 2:
                // función recursiva para nota máxima
                break;
            case 3:
                // función recursiva para promedio
                break;
            case 4:
                // función recursiva para ordenar
                break;
            case 5:
                // función para mostrar todos los estudiantes
                break;
            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 6);

    return 0;
}