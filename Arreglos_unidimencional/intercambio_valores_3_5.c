#include <stdio.h>

int main() {

    int a[20];
    int i, j, aux;

    for(i = 0; i < 20; i++) {
        a[i] = i + 1;
    }

    printf("Arreglo original:\n");

    for(i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    for(i = 0; i < 20; i++) {

        // si es multiplo de 3
        if(i % 3 == 0 && i != 0) {

            // buscar siguiente multiplo de 5
            for(j = i + 1; j < 20; j++) {

                if(j % 5 == 0) {

                    // intercambio
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;

                    break;
                }
            }
        }
    }


    printf("\nArreglo final:\n");

    for(i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
