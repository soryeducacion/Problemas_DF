#include <stdio.h>

int main(){
	
	int a, b = 10, c = 3;
	
	a = b + c;
	
	printf("**************** Operadores aritmeticos ****************\n");
	printf("La suma es: %d\n", a);
	printf("La resta es: %d\n", b - c);
	printf("La multiplicacion es: %d\n", b * c);
	printf("La division es: %d\n", b / c);
	printf("El residuo es: %d\n", b % c);

	int z = 5;
 
	printf("\n**************** Operadores de Incremento ****************\n");
	++z;
	printf("%d\n", z); // 6
	--z;
	printf("%d\n", z); // 5
	
	return 0;
}
