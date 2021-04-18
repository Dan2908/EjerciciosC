/*Mostrar por pantalla los números pares (de mayor a menor)
 comprendidos entre 50 y 20. Indicar la cantidad de números hallados*/
#include <stdio.h>
#include <conio.h>

int main(){
	int contador = 0,			//lleva la cuenta de número pares
		inicio = 50, fin = 20;		//topes
	printf("Numeros pares desde 50 a 20\n____\n");
		//iteramos imprimiendo variable inicio
	while(inicio >= fin){
		printf("%d\n", inicio);
		contador++;		//contamos
		inicio -= 2;	//como 50 es par, el resto se obtiene restando 2
	}
	printf("____\n");
	printf("Numeros pares encontrados: %d\n", contador);
	getch();
	return 0;
}