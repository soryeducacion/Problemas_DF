#include <stdio.h>

int main(){
    int a = 5, b = 3, resultado;
    /*
    resultado = (a<b);
    si es verdadero el resultado es 1 sino es 0
    */
    resultado = (a!=b);
    printf("%d\n", resultado);// 1

    resultado = (a==b);
    printf("%d\n", resultado); // 0

    resultado = (a>=b);
    printf("%d\n", resultado);// 1

    resultado = (a<=b);
    printf("%d\n", resultado);// 0

}
