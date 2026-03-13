#include <stdio.h>

int main(){
    int opcion;

    printf("###########################\n");
    printf("1. El guardia del castillo\n");
    printf("2. El oro del rey\n");
    printf("###########################\n\n");

    printf("Dame una opcion del menu: ");
    scanf("%d", &opcion);

    //codigo de El guardia del castillo
    if(opcion == 1){
        int edad, invitacion_real;

        /*
        Pide la edad y si la persona tiene invitación real (sí/no, 1 o 0).
        */
        printf("\nDime tu edad: ");
        scanf("%d", &edad);
        printf("Tienes invitacion real 1 = Si 0 =No:");
        scanf("%d", &invitacion_real);

        /*
         Si es menor de 12, no entra nunca
        */
        if(edad < 12){
            printf("No puedes entrar, eres menor de 12");
        }

         /*
         Si tiene entre 12 y 17 y sí tiene invitación, entra como escudero
        */
        if(edad >= 12 && edad <=17 && invitacion_real == 1){
            printf("Entra como escudero");
        }

        /*
        Si tiene entre 12 y 17 y no tiene invitación, no entra
        */
        if(edad >= 12 && edad <=17 && invitacion_real == 0){
            printf("No puedes entrar");
        }

        /*
        **************************************************************************************
        Si tiene 18 o más, entra siempre, pero si además tiene invitación, entra al banquete real
        */
        // if 1
        if(edad >= 18){
            printf("Puedes entrar\n");
            if(invitacion_real == 1){
                printf("\tEntrar al banquete\n");
            }
        }
        //puedes usar el if 1 o este
        /*if(edad >= 18){
            printf("puedes entrar");
        }else if(edad >= && invitacion_real == 1){
            printf("Puedes entrar al banquete");
        }*/
    }
    //fin guardia del castillo


    if(opcion == 2){
        //pagina del libro 46
        //aqui va el codigo del oro del rey
    }



}
