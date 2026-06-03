#include <stdio.h>

void muestraDatos(float num, int pot, float res)
{
    printf("\n\nLos datos son:\n\t* Número: %.2f", num);
    printf("\n\t* Potencia: %d\n\t* Resultado: ", pot);
    printf("%.2f\n", res);
}

float Potencia(float num, int pot)
{
    float res = 1;
    int i;

    for (i = 0; i < pot; i++)
    {
        res *= num;
    }

    return res;
}

int main()
{
    float numero, resultado = 0;
    int potencia;

    printf("Escriba un número: ");
    scanf("%f", &numero);

    printf("Escriba la potencia: ");
    scanf("%d", &potencia);

    muestraDatos(numero, potencia, resultado);
    resultado = Potencia(numero, potencia);
    muestraDatos(numero, potencia, resultado);

    return 0;
}
