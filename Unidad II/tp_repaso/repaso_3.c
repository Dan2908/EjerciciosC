/* Realizar un programa que pida al usuario dos números y una letra: “i” ó “p”.
	El programa presentará los números pares (si se pulsó la “p”) ó impares
	(si se pulsó la “i”) que hay desde el primer número al segundo que introdujo
	el usuario. Si se pulsa alguna tecla distinta de “p” ó “i”, el programa 
	no imprime ningún número.*/
#include <stdio.h>
#include <conio.h>

int main() {
	char entrada;
	int inicio, fin;
	
		//Datos de entrada
	printf("Ingrese el numero de la cota inferior: ");
	scanf("%d", &inicio);
	printf("Ingrese el numero de la cota superior: ");
	scanf("%d", &fin);
		//Validar cota superior
	while(fin <= inicio){
		printf("La cota superior debe ser mayor que %d\n", inicio);
		scanf("%d", &fin);
	}
	printf("Ingrese 'p' para listar pares o 'i' para impares:\n");
	entrada = getch();
		//Validar que opción sea 'i' o 'p'
	while(entrada != 'i' && entrada != 'p'){
		printf("\nDebe ingresar 'i' o 'p'\n");
		entrada = getch();
	}
		//Imprimir resultados
	if(entrada == 'i'){
		printf("Impares:");
		if(inicio%2 == 0) inicio++;	// Asegurar que sea impar;
	}
	else{
		printf("Pares:");
		if(inicio%2 != 0) inicio++;	// Asegurar que sea par;
	}
	printf("\n_______\n");
	for(int i = inicio; i <= fin; i += 2){
		printf("%d\n", i);
	}
	printf("_______\n");
	
	getch();
	return 0;
}

