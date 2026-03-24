#include <stdio.h>

int main() {
    int experiencia = 0;

    // El caballero entrena hasta llegar a 5 puntos de experiencia
    while (experiencia < 5) {
        printf("Entrenando con la espada: ");
        printf("experiencia = %d\n", experiencia);
        experiencia++;
    }

    printf("¡El caballero está listo para la ");
    printf("batalla!\n");

    return 0;
}
