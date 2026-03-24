#include <stdio.h>

int main() {
    int N;

    do {
        printf("Escriba el numero mayor (debe ser positivo): ");
        scanf("%d", &N);
    } while (N < 0);

    return 0;
}
