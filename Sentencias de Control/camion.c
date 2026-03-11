/* ***
 * camion.c - calcula el precio del camión. Ejemplo de condiciones.
 * El precio es de 15 pesos normalmente, pero hay los siguientes descuentos:
 *     A los niños menores de 3 y las personas de 60+ años viajan gratis
 *     A los estudiantes se les hace el 50% de descuento.
 *** */
#include <stdio.h>
int main() {
    // Declarar variables
    int edad,estudiante;          
    float descuento = 1;
    float const precio = 15;
    // Pedir edad
    printf("Edad: ");
    scanf("%d",&edad);
    // Ver si tiene descuento por edad
    if (edad <= 3 || edad >= 60) {
        descuento = 0;            // 100% de descuento si es bebé o anciano
    } else {
        // Si no hay descuento por edad, veo si es estudiante
        printf("Estudiante (1 si s%c, 0 en caso contrario): ",161);
        scanf("%d",&estudiante);
        // Si es estudiante, 50% de descuento
        if (estudiante) {       // Recuerda que si es 0 es falso
            descuento = 0.5;
        }
    }
    // Mostrar total a pagar
    // Nota: %.2f muestra el float con solo 2 decimales
    printf("Total a pagar: $ %.2f\n\n",precio * descuento);
}
