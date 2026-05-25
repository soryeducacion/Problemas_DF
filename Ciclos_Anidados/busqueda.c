#include <stdio.h>

int main() {
	// Constante
	const int noPersonas = 5;

	// Declarar arreglo
	int edades[noPersonas];

	// Otras variables
	int i,edad,seHallo;

	// Llenar el arreglo de edades
	printf("Captura de edades:\n");
	for (i=0;i<noPersonas;i++) {
		printf("\tEscriba la edad %d: ",i);
		scanf("%d",&edades[i]);
	}

	// Mostrar el contenido del arreglo
	printf("\nElementos guardados en el arreglo:\n");
	for (i=0;i<noPersonas;i+=2) {
		printf("Edad %d = %d\tElemento %d = %d\n",i,edades[i],i+1,edades[i+1]);
	}

	// Buscar valores
	printf("\nBuscar valores.\n\tEdad a buscar: ");
	scanf("%d",&edad);
	for (i=0,seHallo=0;i<noPersonas;i++) {
		if (edades[i] == edad) {
			printf("\t%d se encontr%c en la posici%cn %d\n",edad,162,162,i);
			seHallo = 1;
		}
	}
	if (seHallo == 0) {
		printf("\tNo se encontr%c a %d en el arreglo\n",162,edad);
	}
}
