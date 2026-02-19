#include <stdio.h>
int main(){
    int a = 10;
    int b = 15;
    int c = 7;
    int resultado;

    // Escribe el resultado antes de imprimirlo en pantalla.

    // Operador AND (&&)
    resultado = (a > b) && (c > a);
    // resultado
    printf("Resultado operador AND: %d\n");

    // Operador OR (||)
    resultado = (a < b) || (c > a);
    // resultado =
    printf("Resultado operador OR: %d\n");

    // Operador NOT (!)
    resultado = !(a < b);
    // resultado =
    printf("Resultado operador NOT: %d\n");

}
