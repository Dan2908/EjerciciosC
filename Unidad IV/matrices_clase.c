#include <stdio.h>
#define PAUSA printf(">> Presione una tecla para continuar...");\
			  fflush(stdin);\
			  getchar()

//		DECLARACIONES
//___________________________________________________________________________________
void imprimir_matriz(int matriz[5][2]); //Imprime la matriz.
int sumatoria(int matriz[5][2]);	//Devuelve sumatoria de elementos de la matriz.
void buscar(int valor, int matriz[5][2]); //Busca el valor dado en la matriz.
void pares(int matriz[5][2]); //Busca los valores pares de la matriz.
void transpuesta(int matriz[5][2]); //Imprime la matriz transpuesta.

//		PROGRAMA
//___________________________________________________________________________________
int main() {
	int matriz[5][2] = { {0,0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
	int suma, valor;
	
// Imprimir matriz.
	printf("\n\t== Imprimir matriz ==\n");
	imprimir_matriz(matriz);
	
//Mostrar sumatoria y promedio.
	suma = sumatoria(matriz);
	printf("\nLos valores suman: %d\n", suma);
	printf("El promedio es: %f\n", (float)suma/10);
	
//Buscar valor.
	printf("\n\t== Buscar valor ==\n");
	printf("\nIngrese un numero a buscar: ");
	scanf("%d", &valor);
	buscar(valor, matriz);
	PAUSA;
	
//Buscar valores pares.
	printf("\n\t== Buscar valores pares ==\n");
	pares(matriz);
	PAUSA;
	
//Imprimir matriz transpuesta
	printf("\n\t== Matriz transpuesta ==\n");
	transpuesta(matriz);
	printf("\n\t== FIN ==\n\n");
	PAUSA;
	return 0;
}

//		DEFINICIONES
//___________________________________________________________________________________
void imprimir_matriz(int matriz[5][2]){
	for(int i = 0; i < 5;i++){
		for(int j = 0; j < 2; j++){
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
}
int sumatoria(int matriz[5][2]){
	int sum = 0;
	for(int i = 0; i < 5;i++){ /* Recorre cada elemento y acumula su valor*/
		for(int j = 0; j < 2; j++){ 
			sum += matriz[i][j];
		}
	}
	return sum;
}
void buscar(int valor, int matriz[5][2]){
	int c = 0; //Coincidencias
	printf("\nBuscando %d en la matriz...\n", valor);
	printf("----------\n");		/*Decoración*/
	for(int i = 0; i < 5;i++){
		for(int j = 0; j < 2; j++){
			if(matriz[i][j] == valor){ /*Si el valor está en (i, j)*/
				printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
				c++;
			}
		}
	}
	printf("\n----------\n");
	/*If(c != 0) ? [Hay] (else) [No hay]*/
	(c) ? printf("Se han encontrado %i resultado(s)\n", c)
		: printf("No se han encontrado resultados.\n");
}
	
void pares(int matriz[5][2]){
		int c = 0;
		printf("\nBuscando pares...\n");
		printf("----------\n");
		for(int i = 0; i < 5;i++){
			for(int j = 0; j < 2; j++){
				if(matriz[i][j]%2 == 0){
					printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
					c++;
				}
			}
		}
		printf("\n----------\n");
		(c) ? printf("Se han encontrado %i valor(es) par(es)\n", c)
			: printf("No se han encontrado valores pares.\n");
	}
void transpuesta(int matriz[5][2]){
// Igual que imprimir pero i y j intercambiados
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 5; j++){
			printf("%d \t", matriz[j][i]);
		}
		printf("\n");
	}
}


