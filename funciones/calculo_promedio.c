#include <stdio.h>

float calcularPromedio(float c1, float c2, float c3)
{
    return (c1 + c2 + c3) / 3;
}

void mostrarResultado(float promedio)
{
    printf("\nPromedio: %.2f", promedio);

    if (promedio >= 70)
        printf("\nEstado: Aprobado");
    else
        printf("\nEstado: Reprobado");
}

int main()
{
    float cal1, cal2, cal3, promedio;

    printf("Ingrese la calificacion 1: ");
    scanf("%f", &cal1);

    printf("Ingrese la calificacion 2: ");
    scanf("%f", &cal2);

    printf("Ingrese la calificacion 3: ");
    scanf("%f", &cal3);

    promedio = calcularPromedio(cal1, cal2, cal3); //funcion que retorna el promedio
    mostrarResultado(promedio); // funcion que no retorna nada

    return 0;
}
