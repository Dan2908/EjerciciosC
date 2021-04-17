/*Escribir una instrucción switch que examine el valor de una variable
  de tipo carácter llamada color y escriba uno de los siguientes mensajes
  dependiendo de su valor: 
  	a) ROJO, si color tiene asignado r o R, 
   	b) VERDE, si color tiene asignado v o V, 
   	c) AZUL, si color tiene asignado a o A,
   	d) NEGRO, si color tiene asignado cualquier otro carácter.*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h> // libreria de la función toupper()

int main(){
	char color;
		//Solicitamos el dato al usuario
	printf("Ingrese la primera letra del color que desea imprimir:\n");
	color = toupper(getch());	// La función cambia a mayúsculas el caracter ingresado

	switch(color){
		case 'R': 
			printf("ROJO\n");
			break;
		case 'V': 
			printf("VERDE\n");
			break;
		case 'A': 
			printf("AZUL\n");
			break;
		default:
			printf("NEGRO\n");
	}

	getch();
	return 0;
}
