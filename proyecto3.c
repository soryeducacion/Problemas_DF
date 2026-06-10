#include <stdio.h>

void consultarSaldo(int usuarioActivo,float *saldoActual){

    printf("Su saldo actual es: $%.2f\n", *saldoActual);
}

float retiroSaldo(int usuarioActivo, float *saldoActual){
    float retirar;
    printf("Ingresa el monto a retirar: ");
    scanf("%f", &retirar);
    if(retirar > 0){

        //ESTA LINEA YA NO ES NECESARIA PUES DESDE QUE SE LOGEA AL SISTEMA SE LE PASAN LOS DATOS.
       // saldoActual = (usuarioActivo == 1) ? &salarioactual1 : &salarioactual2;
        if(retirar <= *saldoActual){
            *saldoActual -= retirar;
            printf("Retiro exitoso. Nuevo saldo: $%.2f\n", *saldoActual);

        } else {
            printf("ERROR: Saldo insuficiente. Su saldo es: $%.2f\n", *saldoActual);
        }
    }

    return *saldoActual;

}



int main (){
    int menu = 1;
    float Dineroadepositar;
    float *saldoActual ;

    // Usuarios predefinidos
    int cuenta1 = 100111, nip1 = 4321;
    float salarioactual1 = 1500;
    int cuenta2 = 100222, nip2 = 8765;
    float salarioactual2 = 3200;

    // Variables de control de flujo
    int usuarioActivo = 0;
    int cuentaIngresada, nipIngresado;
    int intentos = 0;
    int accesoConcedido = 0;
    int movimientos = 0;
    int nuevoNIP, confirmadorNIP;
    int nipValidacion;

        // 1. Inicio de sesión y validación de NIP
    while(intentos < 3 && accesoConcedido == 0){
        printf("--- Inicio de Sesi%cn ---\n", 162);
        printf("Numero de cuenta (6 digitos): ");
        scanf("%d", &cuentaIngresada);
        printf("NIP: ");
        scanf("%d", &nipIngresado);

        if(cuentaIngresada == cuenta1 && nipIngresado == nip1){
            printf("\nBienvenido Carlos. Acceso concedido.\n");
            accesoConcedido = 1;
            usuarioActivo = 1;
            *saldoActual = salarioactual1;
        }
        else if(cuentaIngresada == cuenta2 && nipIngresado == nip2){
            printf("\nBienvenida Maria. Acceso concedido.\n");
            accesoConcedido = 1;
            usuarioActivo = 2;
            *saldoActual = salarioactual2;
        }
        else{
            intentos++;
            if(intentos < 3) printf("\nDatos incorrectos. Intentos restantes: %d\n", 3 - intentos);
        }
    }

    if(accesoConcedido == 0){
        printf("Cuenta bloqueada. Demasiados intentos fallidos.\n");
        return 0;
    }

     // 2. Menú principal
    while (accesoConcedido == 1){
        printf("\n      Bienvenidos a BancoTec      \n");
        printf("1. Consultar saldo\n2. Depositar dinero\n3. Retirar dinero\n4. Cambiar NIP\n0. Cerrar sesi%cn\n", 162);
        printf("Elige una opci%cn: ", 162);
        scanf("%d", &menu);

        switch(menu){
            case 1: // Consultar saldo
                consultarSaldo(usuarioActivo, saldoActual);
                break;

            case 2:
                break;

            case 3:
                *saldoActual = retiroSaldo(usuarioActivo, saldoActual);
                break;

            case 4:
                break;

            case 0: // Cerrar sesión
                printf("\nHasta luego, %s.\n", (usuarioActivo == 1) ? "Carlos" : "Maria");
                printf("Movimientos realizados en esta sesi%cn: %d\n", 162, movimientos);
                printf("Gracias por usar BancoTec.\n");
                accesoConcedido = 0;
                break;

            default:
                printf("Opci%cn no valida, intenta de nuevo.\n", 162);
                break;

        }

    }


}
