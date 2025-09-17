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