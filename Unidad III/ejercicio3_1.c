/*Hacer un programa para que dada una lista de n�meros que finaliza con cero
 * informa cuantos de ellos eran primos. Usar una funci�n llamada PRIMO que
 * devuelva 1 si el n�mero recibido es primo y 0 si no es primo
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>	//Librer�a que contiene sqrt()

<<<<<<< HEAD
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

=======
int PRIMO(int n);
>>>>>>> 1060f09be625ef5a83d9ec49ae2543cf6b6ad865
int main() {
	int numero, total_primos = 0;
	printf("===== Primos ====\n\n");
	while(1){
			//Usuario ingresa datos
<<<<<<< HEAD
		printf("Ingrese un valor entero (0 para terminar): ");
		leer_positivo(&numero);
			// Condici�n de salida
		if(!numero) break;			//si numero == 0 -> !numero == true;
=======
		printf("Ingrese un valor positivo (0 para terminar): ");
		scanf("%d", &numero);
			// Condici�n de salida
		if(numero == 0) break;			//si numero == 0 -> !numero == true;
>>>>>>> 1060f09be625ef5a83d9ec49ae2543cf6b6ad865
			//contamos los primos (si es primo -> +1)
		total_primos += PRIMO(numero);
	}
		//imprimimos total
	printf("\nHas ingresado %d numero(s) primos\n", total_primos);
	
	getch();
	return 0;
}

<<<<<<< HEAD
=======
int PRIMO(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0; //si es divisible -> devuelve 0
	}
	return 1;
}

>>>>>>> 1060f09be625ef5a83d9ec49ae2543cf6b6ad865
