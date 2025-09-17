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
    {2024103, 2.8},
    {2024104, 4.0},
    {2024105, 3.9}
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