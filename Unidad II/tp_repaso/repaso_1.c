/*Ejercicio N°1: Calcular las raíces de una ecuación cuadrática.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int a, b, c;		//Coeficientes
	double x0, x1;		//Raíces
	double radicando;	//Radicando de la resolvente
	
		//***Pedir valores al usuario
	printf("\t>>> ax^2 + bx + c = 0 <<<\n\n");
	printf("Ingrese valor de a (distinto de 0): ");
	scanf("%d", &a);
		//Controlar que a != 0
	while(!a){
		printf("El valor debe ser distinto de 0: ");
		scanf("%d", &a);
	}
	printf("Ingrese valor de b: ");
	scanf("%d", &b);
	printf("Ingrese valor de c: ");
	scanf("%d", &c);
	
	printf("\na = %d\nb = %d\nc = %d\n", a, b, c);
		/* Identificar si el radicando es positivo,
		 * sino, finalizar programa */
	radicando = b*b - 4*a*c;
	if(radicando < 0){
		printf("La ecuación no tiene solución en el campo de los reales\n");
		return 0;
	}
		//Encontrar raices (Resolvente)
	x0 = (-b+sqrt(radicando))/(2*a);
	x1 = (-b-sqrt(radicando))/(2*a);
		//Mostrar resultados;
	printf("Las raíces son:\n");
	printf("\tx(1): %.2lf\n", x0);
	printf("\tx(2): %.2lf\n", x1);
	
	getch();
	return 0;
}

