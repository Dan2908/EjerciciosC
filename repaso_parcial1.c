/*Escribe un programa que pida al usuario el número de respuestas correctas, 
  incorrectas y en blanco correspondiente a un alumno y muestre su puntaje final 
  considerando que por cada respuesta correcta tendra 4 puntos, por cada respuesta
  incorrecta tendra -1 y por cada respuesta en blanco tendrá un cero.*/
#include <stdio.h>
#include <conio.h>

int main() {
	int puntaje = 0, res;
	printf("\n == Notas de parcial == \n\n");
	
	printf("Ingrese cantidad de respuestas correctas: ");
	scanf("%i", &res);
	puntaje += res*4;			//Cantidad de respuestas correctas por 4pts
	printf("Ingrese cantidad de respuestas incorrectas: ");
	scanf("%i", &res);
	puntaje -= res;				//Cantidad de respuestas incorrectas por -1pt
	printf("Ingrese cantidad de respuestas en blanco: ");
	scanf("%i", &res);			//No es necesario sumar 0pts
	
	printf("\nEl puntaje del alumno es %i", puntaje);
	
	getch();
	return 0;
}

