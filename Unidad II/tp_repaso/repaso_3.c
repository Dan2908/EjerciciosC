/* Realizar un programa que pida al usuario dos n�meros y una letra: �i� � �p�.
	El programa presentar� los n�meros pares (si se puls� la �p�) � impares
	(si se puls� la �i�) que hay desde el primer n�mero al segundo que introdujo
	el usuario. Si se pulsa alguna tecla distinta de �p� � �i�, el programa 
	no imprime ning�n n�mero.*/
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
		//Validar que opci�n sea 'i' o 'p'
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

