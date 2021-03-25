/*
Ingresar un número a por teclado. Si a es mayor que cero 
calcular la potencia de 2 de a. Mostrar por pantalla el resultado y un mensaje
en caso de no poder realizar la operación. Usar la función predefinida de C 
para realizar el cálculo
*/
#include <stdio.h>
#include <math.h>

int main() {
	int a, potencia;
	printf("Ingresar un numero: ");
	scanf("%d", &a);
	
	if(a > 0)
		printf("La potencia 2 de %d es: %.lf", a, pow(a, 2));
	else
		printf("%d NO es mayor que 0...", a);
	
	return 0;
}

