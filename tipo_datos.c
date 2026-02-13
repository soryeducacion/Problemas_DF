#include <stdio.h>

int main() {
  int x;
  int edad_alumno;
  int edad_maestros,edad1, edad_1;
  int numero = 5;            // numeros enteros positivos o negativos
  float Decimales = 4.99;     // numeros decimales despues del punto
  char L = 'q';
  char l = 'q';
  char nombre[] = "Sofia hola";        // solo almacena caracteres
  const double PI = 3.1415956214;  //

  numero = -5;
  edad_alumno = 88;

  // impresion de variables
  printf("%d\n", numero);
  printf("%f\n", Decimales);
  printf("%c\n", l);
  printf("%lf\n", PI);

  return 0;
}
