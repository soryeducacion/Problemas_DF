#include <stdio.h>

 int main () {
   int mes_numero;
   printf("Dame un numero del 1 - 12 ");
   scanf("%d", &mes_numero);

   if(mes_numero == 1){
     printf("Enero");
   }else if(mes_numero == 2){
     printf("Febrero");
   }else if(mes_numero == 3){
     printf("Marzo");
   }else if(mes_numero == 4){
     printf("Abril");
   }else if(mes_numero == 5){
     printf("Mayo");
   }else if(mes_numero == 6){
     printf("Junio");
   }else if(mes_numero == 7){
     printf("Julio");
   }else if(mes_numero == 8){
     printf("Agosto");
   }else if(mes_numero == 9){
     printf("Septiembre");
   }else if(mes_numero == 10){
     printf("Octubre");
   }else if(mes_numero == 11){
     printf("Noviembre");
   }else if(mes_numero == 12){
     printf("Diciembre");
   }else{
     printf("Valor incorrecto");
   }
 }
