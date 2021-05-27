/*Hacer un programa para que dada una lista de n�meros que finaliza con cero
 * informa cuantos de ellos eran primos. Usar una funci�n llamada PRIMO que
 * devuelva 1 si el n�mero recibido es primo y 0 si no es primo
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>	//Librer�a que contiene sqrt()

int PRIMO(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0; //si es divisible -> devuelve 0
	}
	return 1;
}
	//funci�n para comprobar que el entero ingresado es positivo
void leer_positivo(int *n){
	while(1){
		scanf("%d", n);		//como n es puntero, no pasamos por referencia
		if(*n < 0) 
			printf("El valor debe ser positivo!\n");
		else 
			break;
	}	
}

int main() {
	int numero, total_primos = 0;
	printf("===== Primos ====\n\n");
	while(1){
			//Usuario ingresa datos
		printf("Ingrese un valor entero (0 para terminar): ");
		leer_positivo(&numero);
			// Condici�n de salida
		if(!numero) break;			//si numero == 0 -> !numero == true;
			//contamos los primos (si es primo -> +1)
		total_primos += PRIMO(numero);
	}
		//imprimimos total
	printf("\nHas ingresado %d numero(s) primos\n", total_primos);
	
	getch();
	return 0;
}
