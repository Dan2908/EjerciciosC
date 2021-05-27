/*
Realizar un programa usando WHILE.
	1.Ingresar por teclado 5 n�meros y mostrarlos por pantalla. Usar DEFINE
	para declarar la variable que maneja el bucle.
	2.C�lculo de la suma total. Mostrar el resultado por pantalla.
	3.Calculardel promedio. Mostrar el resultado por pantalla.
	4.Documentar el programa.
*/
#include <stdio.h>
#include <conio.h>
#define N 5			// Se define el numero de iteraciones

int main() {
	int entrada, c = 0;
	double total = 0;
		//Datos de entrada
	printf("Ingrese n�meros, presione Enter por cada uno:\n"); 
	while(c < N){
		scanf("%d", &entrada);
		total += entrada;
		c++;					
	}
	
	printf("La suma total es: %.0lf\n", total);	//%.0lf (double) sin decimales
	printf("El promedio es: %.2lf\n", total/N);	//%.2lf (double) con 2 decimales
	
	getch();
	return 0;
}

