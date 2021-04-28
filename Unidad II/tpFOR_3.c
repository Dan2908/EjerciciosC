/*
 * El punto 3 no existe, pero hago un generador de numeros perfectos
 * Los números perfectos son generados por la formula 2^(p-1)*(2^p-1), donde  p  y (2^p-1) son primos.
 */
#include <stdio.h>
#include <conio.h>
#include "libdanilo.h" // funciones raiz y potencia

#define FOR(a, x) for(int i = a; i < x; i++) //bucle for simplificado
typedef unsigned long long ulint;

	/* Usamos int para no cargar libreria “stdbool.h”
	 * 0 = false, 1 = true */
int esPrimo(int n){
	FOR(2, raizCuadrada(n)){
		if( !(n%i) ) return 0;
	}
	return 1;
}
	/* tanto n como (2^p-1) deben ser primos
	 * si los son, se aplica formula y se imprime */
void verificarPerfecto(int n){
	const ulint f1 = potencia(2, n-1);
	const ulint f2 = potencia(2, n) - 1;

	if(esPrimo(f2))
		printf("%12i|%12llu|\n", n, f1*f2);
}
	/* llenamos un arreglo de numeros primos*/
void llenarPrimos(int *arr, int t){
	int i = 2, p = 0;

	while(p < t){
		if(esPrimo(i)) arr[p++] = i;
		i++;
	}

}

int main(){
	int max;
	printf("Ingrese la cantidad de numeros primos a probar: ");
	scanf("%i", &max);

	int primos[max];
	llenarPrimos(primos, max);

	FOR(0, max){
		verificarPerfecto(primos[i]);
	}

	getch();
	return 0;
}
