#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("Menu de opciones\n\t1. Saludar\n");
        printf("\t2. Despedir\n\t3. Sorpresa\n");
        printf("\t4. Salir\n\nEscribe la opcion ");
        printf("deseada: ");
        scanf("%d", &opcion);

        // Muestro mensaje
        switch(opcion) {
            case 1:
                printf("Quihubo\n");
                break;
            case 2:
                printf("Nos vemos\n");
                break;
            case 3:
                printf("¡Bu!\n");
                break;
            case 4:
                printf("Me voy\n");
                break;
            default:
                printf("Opcion invalida\n");
        }

    } while (opcion != 4);

    return 0;
}
