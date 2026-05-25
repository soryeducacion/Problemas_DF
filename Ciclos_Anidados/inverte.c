#include <stdio.h>
/*
Este programa ejemplifica el uso de arreglos en C. Llena el arreglo con números enteros y luego invierte los valores:
 el de la posición 0 lo intercambia con el de la última posición, el de la posición 1 con el penúltimo y así sucesivamente.

En el ciclo que invierte, en i guardo el elemento "de la izquierda" y en k el de la "derecha".
CANT_NUM-i-1 me da del último elemento, le resto 1 (porque inician los valores en 0) y también le resto lo que tenga i.
De esa manera, cuando i=0, el del a derecha es 10-0-1=9. Cuando i=1, lo intercambia con la posición 10-1-1=8,
cuando i=2 se intercambia con 7 y así hasta llegar a la mitad del arreglo.

Se termina a la mitad porque si sigue hasta el final, lo vuelve a dejar en el orden original.
*/
int main() {
	const int CANT_NUM = 10;			// Constante con la cantidad de elementos
	int nums[CANT_NUM];					// Declaro mi arreglo para guardar los pesos
	int i,k;

	// Lleno mi arreglo
	for (i=0;i<CANT_NUM;i++) {
		printf("Escriba el n%cmero %d: ",163,i+1);
		scanf("%d",&nums[i]);
	}

	// Muestro el arreglo en el orden dado
	printf("\nEl arreglo \"original\"\n");
	for (i=0;i<CANT_NUM;i++) {
		printf("%d\t",nums[i]);
	}
	printf("\n");

	// Invierto el orden de los elementos:
	// El de la posición 0 se intercambia con el último
	// El de la posición 1 con el penúltimo y así
	for (i=0;i<CANT_NUM/2;i++) {			// El ciclo se termina cuando llega a la mitad
		k = nums[CANT_NUM-i-1];
		/*
		i    = 0, 1, 2, 3, 4, 5
		indice 9, 8, 7, 6, 5, 4
		*/
		//printf("%d\n",CANT_NUM-i-1);
		nums[CANT_NUM-i-1] = nums[i];
		nums[i] = k;

	}

	// Muestro el arreglo invertido
	printf("\nEl arreglo invertido\n");
	for (i=0;i<CANT_NUM;i++) {
		printf("%d\t",nums[i]);
	}
}
