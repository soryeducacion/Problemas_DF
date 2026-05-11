#include <stdio.h>
/*
Desarrolla un programa en lenguaje C que realice lo siguiente:
1. Solicite al usuario dos valores enteros:
• N y B
2. Mientras el valor de N sea menor que 50, el programa debe:
    • Imprimir los números del 1 hasta N
    • Calcular un valor auxiliar:
    T = N + 5
    • Utilizar un ciclo para aumentar el valor de N de B en B, hasta que N sea
    mayor o igual que T
    • Imprimir el nuevo valor de N

    */
int main() {
    int N, B, T=0;

    printf("Ingresa N: ");
    scanf("%d", &N);

    printf("Ingresa B: ");
    scanf("%d",&B);

    while (N < 50) {

       for(int i = 1; i <= N; i++){
         printf(" %d ",i);
       }

       T = N +5;
       while(N < T){
          N = N + B;
       }

       printf("Nuevo valor N : %d\n", N);

    }
    return 0;
}

