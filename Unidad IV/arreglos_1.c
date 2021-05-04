#include <stdio.h>
#define N 10
	/**Declaraciones*/
// Se declara arreglo global de 10 elementos:
int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// Muestra el contenido del arreglo
void mostrar_contenido();
// Calcula la suma y el promedio e imprime ambas. Guarda promedio
void suma_y_promedio();
// Muestra los elementos mayores  la mitad del promedio.
void mayor_m_promedio();
int promedio; //< Promedio del arreglo//
	/*Programa*/
int main() {
	mostrar_contenido();
	suma_y_promedio();
	mayor_m_promedio(promedio);
		
	return 0;
}
	/**Definiciones*/
void mostrar_contenido(){
	printf("a)\n-- Elementos del Arreglo --\n\n\t");
	for(int i = 0; i < N-1; i++){
		printf("%i--", arr[i]);
	}
	printf("%i\n", arr[N-1]);
}
void suma_y_promedio(){
	int suma = 0;
	for(int i = 0; i < N; i++){
		suma += arr[i];
	}
	promedio = suma/N;
	printf("\nb)\nLa suma de los elementos es: %i\n", suma);
	printf("...y su promedio: %i\n", promedio);
}
void mayor_m_promedio(){
	int mitad_promedio = promedio/2;
	printf("\nc)\nContenido mayor a la mitad del promedio(%i): ", mitad_promedio);
	for(int i = 0; i < N; i++){
		if(arr[i] > mitad_promedio) printf("%i ", arr[i]);
	}
}

