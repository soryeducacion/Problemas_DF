#include <stdio.h>

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

