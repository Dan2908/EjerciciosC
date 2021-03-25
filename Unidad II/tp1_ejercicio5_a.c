/*
Ingresar un número a por teclado. Si a es mayor que 0 y divisible por 2,
calcular su triplo. Mostrar por pantalla el resultado de la suma 
y un mensaje en caso de no poder realizar la operación.
*/

#include <stdio.h>

int main() {
	int a;
	printf("Ingresar un numero: ");
	scanf("%d", &a);
	
	if(a > 0 && (a % 2 == 0))
		printf("El triplo de %d es %d", a, a*3);
	else
		printf("No se puede realizar la operación...\n");
	
	return 0;
}

