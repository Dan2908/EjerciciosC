/*Calcularla superficie de un círculo. La operación se realizará una vez comprobado 
 que los valores ingresados sean correctos.*/
#include <stdio.h>
#include <conio.h>

#define PI 3.1416
int main() {
	int r;
	
	printf("ingrese radio del circulo: ");
	scanf("%d", &r);
	
	while(r<0){
		printf("el radio no puede ser negativo!\n");
		scanf("%d", &r);
	}
	
	printf("\nLa superficie del circulo con radio %d es %.2lf", r, PI*r*r);
	getch();
	return 0;
}

