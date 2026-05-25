#include <stdio.h>

int main() {
    // arreglo inicializado con valores
    float precios[5] = {22,10,5,6,7};

    //arreglo vacio
    int edades[7];

    int i = 0, j=0;
    int k;
    printf("-----Listado de precios-----\n");
    for(int x = 0; x < 5; x++){
       // printf("Precio: %f\n", precios[x] + precios[x+1]);
        /*if(precios[x] >= 15){
            printf("Precio: %f\n", precios[x]);
        }*/
        if(x==1){
            k = precios[x];
        }

        if(x==4){
            precios[1] = precios[x];
            precios[x] = k;
            break;
        }
    }

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
