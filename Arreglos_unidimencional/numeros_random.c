#include <stdio.h>
#include <stdlib.h> // libreria para la función rand() y srand()
#include <time.h>   // libreria para la función time()

int main() {
    // la función srand sirve para que inicie los valores aleatorios sin esta nunca nos va afuncionar la funcion rand()
    srand(time(NULL)); //time inicia el tiempo en segundo valor que necesita srand para iniciar.

    // Generar un número aleatorio entre 0 y RAND_MAX
    int numero = rand();

    // Generar un número aleatorio entre 1 y 100
    int num_1_100 = (rand() % 100) + 1;

    printf("Numero aleatorio grande: %d\n", numero);
    printf("Numero entre 1 y 100: %d\n", num_1_100);

    return 0;
}
