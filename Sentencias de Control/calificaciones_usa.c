/* ***
 * califica.c - calcula la equivalencia de una calificación de Estados Unidos (letras A, B, C, D y F) a
 *				su equivalente (que yo me imaginé) en México.
 * ***/
#include <stdio.h>
int main() {
	char calUSA;
	int calMex;
	
	// Pedir calificación gringa
	printf("Escriba una letra con la calificaci%cn en Estados Unidos: ",162);
	scanf("%c",&calUSA);
	
	// Condición
	if (calUSA == 'A' || calUSA == 'a') {
		calMex = 10;
	} else if (calUSA == 'B' || calUSA == 'b') {
		calMex = 9;
	} else if (calUSA == 'C' || calUSA == 'c') {
		calMex = 8;
	} else if (calUSA == 'D' || calUSA == 'd') {
		calMex = 7;
	} else if (calUSA == 'F' || calUSA == 'f') {
		calMex = 5;
	} else {
		calMex = -1;
		printf("Hubo un error.");
	}
	
	// Muestro la calificación mexicana
	// Si hubo error, calMex == -1, así que muestro resultados si no hubo error
	if (calMex != -1) {
		printf("La calificaci%cn \'%c\' en Estados Unidos = %d en M%cxico\n",162,calUSA,calMex,130);
	}
}
