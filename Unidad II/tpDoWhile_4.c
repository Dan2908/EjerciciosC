/*Ejercicio N° 4:Escribir un programa que solicite la carga de un valor positivo
 y nos muestre desde 1 hasta el valor ingresado de uno en uno.
 Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.*/
#include <stdio.h>
#include <conio.h>

int main() {
	int n;
		//Pedimos valor al usuario
	printf("Ingrese un número mayor a 1 para generar la serie: ");
	scanf("%i", &n);
		//Si el valor es menor o igual a 1, se lo solicita
		//Hasta que el usuario ingrese entero válido;
	while(n < 1){
		printf("El valor debe ser mayor que 1!\n");
		scanf("%d", &n);
	}
		//Se imprimen enteros i desde 1 a n
	int i = 1;
	do{
		printf("%d\n", i);
		i++;
	}while(i < n);
	
	getch();
	return 0;
}

