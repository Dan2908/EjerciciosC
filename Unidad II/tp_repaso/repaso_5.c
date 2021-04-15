/*Ejercicio N° 5:Crear la siguiente estructura usando sentencias repetitivas:
	*
	**
	...
	**********
 */
#include <stdio.h>
#include <conio.h>

int main() {
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}

