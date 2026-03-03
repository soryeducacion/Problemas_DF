#include <stdio.h>

int main() {
    int edad;
    float promedio;
    char inicial;
    char nombre[20];

    printf("Nombre: ");
    scanf("%s", nombre);

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Promedio: ");
    scanf("%f", &promedio);

    printf("Inicial: ");
    scanf(" %c", &inicial);

    printf("\nDatos del alumno\n");
    printf("Nombre:\t%s\n", nombre);
    printf("Edad:\t%d\n", edad);
    printf("Promedio:\t%.2f\n", promedio);
    printf("Inicial:\t%c\n", inicial);

    return 0;
}
