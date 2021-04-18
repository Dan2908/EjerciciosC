/*
 *Al programa anterior realizar las siguientes modificaciones:
 * Solo se pueden ingresar valores múltiplos de tres. En el casode que se ingrese
 * un valor que no cumple con la condición se debe pedir nuevamente que ingrese
 * otro número hasta que se cumpla la condición
 */

#include <stdio.h>
#include <conio.h>
#define N 5			// Se define el numero de iteraciones

int main() {
	int entrada, total = 0, c = 0; 
		//Datos de entrada
	printf("Ingrese números múltiplos de 3:\n"); 
	while(c < N){
		scanf("%d", &entrada);
		while( entrada%3 ){ 		//*** Si entrada%3 == 0; 0 es "false"
			printf("\t¡Debe ser pultiplo de tres(3)!\n");
			scanf("%d", &entrada);
		}
		total += entrada;		
		c++;					
	}
	
	printf("La suma total es: %d\n", total);
	printf("El promedio es: %d\n", total/N);
	
	getch();;
	return 0;
}

