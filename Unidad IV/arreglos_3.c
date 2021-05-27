#include <stdio.h>
#include <conio.h>

int arreglo[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};

//Función para validar posición dentro del rango
int pedir_posicion(){
	int pos;
		  //Error al leer    || valor negativo || valor mayor a 9
	while(!scanf("%i", &pos) || pos < 0 || pos > 9){
		printf("\nEl valor ingresado no es una posición valida!\n");
		printf("Ingrese otro: ");
		fflush(stdin);
	}
	return pos;
}
	
int main() {
	int pos1, pos2, aux;
//imprimir arreglo
	printf("== Arreglo Original ==\n");
	for(int i = 0; i < 10; i++){
		printf("%i ", arreglo[i]);
	}
	printf("\n\n");
//Pedir valores
	printf("Ingrese primera posición a intercambiar: ");
	pos1 = pedir_posicion();
	printf("Ingrese segunda posición a intercambiar: ");
	pos2 = pedir_posicion();
//Intercambiar	
	aux = arreglo[pos1];
	arreglo[pos1] = arreglo[pos2];
	arreglo[pos2] = aux;
//Imprimir intercambiado
	printf("\n== Arreglo Intercambiado ==\n");
	for(int i = 0; i < 10; i++){
		printf("%i ", arreglo[i]);
	}
	
	getch();
	return 0;
}

