#include <stdio.h>

#define N 5 // Número de estudiantes

typedef struct {
    int codigo;
    float nota;
} Estudiante;

// Arreglo predefinido de estudiantes
Estudiante estudiantes[N] = {
    {2025101, 4.5},
    {2025102, 3.2},
    {2025103, 2.5},
    {2025104, 4.0},
    {2025105, 3.8}
};

// Función para mostrar estudiantes aprobados
void mostrarEstudiantesAprobados(Estudiante arr[], int size) {
    printf("Estudiantes aprobados:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i].nota >= 3.0) {
            printf("Codigo: %d, Nota: %.2f\n", arr[i].codigo, arr[i].nota);
        }
    }
}

// Función para mostrar todos los estudiantes
void mostrarEstudiantes(Estudiante arr[], int n) {
    printf("Codigo\tNota\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\n", arr[i].codigo, arr[i].nota);
    }
}

// Función recursiva para encontrar la nota máxima
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

// Ordenar estudiantes por código (Selection Sort recursivo)
void selectionSortRecursivo(Estudiante arr[], int n, int idx) {
    if (idx == n - 1) return; // Caso base
    int minIdx = idx;
    for (int j = idx + 1; j < n; j++) {
        if (arr[j].codigo < arr[minIdx].codigo) {
            minIdx = j;
        }
    }
    if (minIdx != idx) {
        Estudiante temp = arr[idx];
        arr[idx] = arr[minIdx];
        arr[minIdx] = temp;
    }
    selectionSortRecursivo(arr, n, idx + 1); // Llamado recursivo
}

int main() {
    int opcion;
    do {
        printf("\nMENU\n");
        printf("1. Mostrar estudiantes aprobados\n");
        printf("2. Buscar la nota Maxima del Curso (Recursivo)\n");
        printf("3. Calcular el promedio del Curso (Recursivo)\n");
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
                break;
            }
            case 4:
                selectionSortRecursivo(estudiantes, N, 0);
                printf("Estudiantes ordenados por código:\n");
                mostrarEstudiantes(estudiantes, N);
                break;
            case 5:
                mostrarEstudiantes(estudiantes, N);
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
