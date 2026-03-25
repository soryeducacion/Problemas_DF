#include <stdio.h>
/*
clasificacion de numeros
pedir al usuario que capture x cantidad de numeros positivos y negativos
*/
int main(){
  int numeros;
  int c =1;
  int x;
  int suma_positivos =0;
  int contador_negativos=0;

  printf("Cantidad de numeros a capturar? ");
  scanf("%d", &numeros);
  //    1     7
  while(c <= numeros){
    printf("Dame el numero %d :", c);
    scanf("%d", &x);
    //sumar los numeros positivos
    if(x > 0){
        //   3           3                2
        suma_positivos = suma_positivos + x;
    }
    //printf("suma_positivos: %d\n", suma_positivos);
    //contar los numeros negativos
    if(x < 0){
       // contador_negativos = contador_negativos + 1;
        contador_negativos ++;
    }
    //printf("contador_negativos: %d\n", contador_negativos);

    c++;
  }
    printf("Total suma: %d\n", suma_positivos);
    printf("Total numeros negativos: %d\n", contador_negativos);

}
