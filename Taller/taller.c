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

// función recursiva para encontrar la nota máxima
float notaMaximaRecursiva(Estudiante arr[], int n, int idx, float max) {
    if (idx == n) return max; // Caso base
    if (arr[idx].nota > max) max = arr[idx].nota;
    return notaMaximaRecursiva(arr, n, idx + 1, max); // Llamado recursivo
}

// Suma recursiva de notas
float sumaNotasRecursiva(Estudiante arr[], int n, int idx) {
    if (idx == n) return 0; // Caso base
    return arr[idx].nota + sumaNotasRecursiva(arr, n, idx + 1); // Llamado recursivo
}

int main() {
    int opcion;
    do {
        printf("\nMENU\n");
        printf("1. Mostrar estudiantes aprobados\n");
        printf("2. Buscar la Nota Máxima del Curso (Recursivo)\n");
        printf("3. Calcular el Promedio del Curso (Recursivo)\n");
        printf("4. Ordenar Codigos de Estudiantes (Selection Sort Recursivo)\n");
        printf("5. Mostrar todos los estudiantes\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarEstudiantesAprobados(estudiantes, N);
                break;
            case 2: {
                float max = notaMaximaRecursiva(estudiantes, N, 0, estudiantes[0].nota);
                printf("La nota maxima del curso es: %.2f\n", max);
                break;
            }
            case 3: {
    float suma = sumaNotasRecursiva(estudiantes, N, 0);
    printf("El promedio del curso es: %.2f\n", suma / N);
    } 
 break;
            case 4: {
                selectionSortRecursivo(estudiantes, N, 0);
    printf("Estudiantes ordenados por código:\n");
    mostrarEstudiantes(estudiantes, N);
            }
    break;
            case 5:
            void mostrarEstudiantes(Estudiante arr[], int n) {
    printf("Codigo\tNota\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\n", arr[i].codigo, arr[i].nota);
    }
}
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
