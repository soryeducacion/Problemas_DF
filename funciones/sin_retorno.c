#include <stdio.h>

void tablaMultiplicar(int numero)
{
    int i;

    printf("Tabla del %d\n", numero);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main()
{
    int num;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    tablaMultiplicar(num);

    return 0;
}
