#include <stdio.h>

float calcularPromedio(float c1, float c2, float c3)
{
    float promedio = (c1 + c2 + c3) / 3;
    return promedio;
}

void mostrarResultado(float promedio)
{
    printf("\nPromedio: %.2f", promedio);

    if (promedio >= 70)
        printf("\nEstado: Aprobado\n");
    else
        printf("\nEstado: Reprobado\n");
}

int main()
{
    int opcion;
    float cal1, cal2, cal3, promedio = 0;

    do
    {
        printf("\n===== SISTEMA DE CALIFICACIONES =====");
        printf("\n1. Capturar calificaciones");
        printf("\n2. Calcular promedio");
        printf("\n3. Mostrar resultado");
        printf("\n4. Salir");
        printf("\nOpcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("\nCalificacion 1: ");
                scanf("%f", &cal1);

                printf("Calificacion 2: ");
                scanf("%f", &cal2);

                printf("Calificacion 3: ");
                scanf("%f", &cal3);
                break;

            case 2:
                promedio = calcularPromedio(cal1, cal2, cal3);
                printf("\nPromedio calculado correctamente.\n");
                break;

            case 3:
                mostrarResultado(promedio);
                break;

            case 4:
                printf("\nFin del programa.\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while(opcion != 4);

    return 0;
}
