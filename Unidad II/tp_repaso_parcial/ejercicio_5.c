/*Escribir un programa interactivo que lea un valor entero positivo y determine lo siguiente:
 i) Si el entero es un número primo.
 ii) Si el entero es un número de Fibonacci comprendido entre los primeros 15 números de la serie.
 Escribir el programa de forma que se ejecute repetidamente,
 hasta que se introduzca como valor de entrada un cero. Comprobar el programa con varios enteros.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>		//libreria que contiene sqrt()
#include <stdbool.h>	//libreria que contiene el tipo booleano

int main(){
	int num, 				//valor a ingresar por el usuario
		f1, f2, fibo;	//auxiliar para calcular la sucesión de fibonacci
	bool primo, fibonacci;
	// Bucle principal, se saldrá con la condición de salida
	while(true){ 
		f1 = 1;
		f2 = 1;
		primo = true;
		fibonacci = false;
		printf("\n========= Primo o Fibonacci =========\n");
			//Pedir dato al usuario
		printf("\nIngrese un numero positivo:\n(para salir ingrese 0)\n");
		scanf("%d", &num);
			//Comprobamos que sea positivo, sino solicitamos nuevamente
		while(num < 0){
			printf("El numero ingresado debe ser positivo!! ");
			scanf("%d", &num);
		}
			//condición de salida num == 0 == false
		if(!num) break;
			//verificamos si es primo, probamos si num es divisible por los numeros menores
		for(int i = 2; i <= sqrt(num); i++){	//Solo hasta la raiz cuadrada de num (por propiedad es suficiente)
			if(num%i == 0){
				primo = false;
				break;						// Si és primo, salimos.
			}
		}
			//verificamos si pertenece a la sucesión de fibonacci
		for(int i = 0; i <= 15; i++){
			fibo = f1 + f2;						//calculamos el siguiente de la sucesión
			f1 = f2; 
			f2 = fibo;
			if(fibo == num){
				fibonacci = true;				//si se encuentra, lo guardamos y salimos
				break;
			}
		}
			//imprimimos los resultados
		if(primo) printf("El numero %d es primo.\n", num);
		else printf("El numero %d NO es primo.\n", num);
		if(fibonacci) printf("El numero %d pertenece a los primeros 15 de Fibonacci.\n", num);
		else printf("El numero %d NO pertenece a los primeros 15 de Fibonacci.\n", num);
	}
	printf("\nFIN del programa, presione una tecla para salir...\n");
	getch();
	return 0;
}
