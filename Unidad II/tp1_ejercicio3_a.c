/*
Indicar si un número ingresado por pantalla es mayor que 10 y emitir 
un mensaje en caso de que no se cumpla con la condición
*/
#include <stdio.h>
#include <conio.h>

int main() {
	int a;
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	
	if(a > 10) printf("El numero ingresado es mayor a 10");
	else printf("El numero ingresado NO es mayor a 10");
	
	getch();
	return 0;
}

