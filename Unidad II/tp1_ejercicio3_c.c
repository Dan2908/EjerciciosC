/*
Ingresar dos números por teclado a y b. Si b es menor que a indicar
si a es divisible por b. Mostrar por pantalla el resultado y un mensaje
en caso de no poder realizar la operación
*/
#include <stdio.h>

int main() {
	int a, b;
	printf("Ingresar dos valores:\n");
	scanf("%d %d", &a, &b);
	
	if(b < a)
	{
		//Caso b es menor que a; compruebo si es divisible y muestro
		if(a % b == 0) printf("%d es divisible por %d", a, b);
		else printf("%d NO es divisible por %d", a, b);
	}
	else{
		//Caso contrario, si a es mayor o es igual a b
		printf("%d No es menor a %d", b, a);
	}
	return 0;
}

