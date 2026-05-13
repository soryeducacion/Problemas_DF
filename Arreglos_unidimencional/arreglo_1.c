#include <stdio.h>

int main() {
    // arreglo inicializado con valores
    float precios[5] = {93.2,91.5,82,77.95,80.9902};

    //arreglo vacio
    int edades[7];

    int i = 0, j=0;

    printf("-----Listado de precios-----\n");
    for(int x = 0; x < 5; x++){
        printf("Precio: %f\n", precios[x]);

    }

    printf("\n-----Captura de edades-----\n");
    while(i < 7){

        printf("\nIngresa edad %d: ",i);
        scanf("%d", &edades[i]);
        i++;
    }

    printf("\n-----Listado de edades-----\n");
    while(j < 7){
        printf("Edad: %d\n", edades[j]);

        j++;
    }

    return 0;
}

