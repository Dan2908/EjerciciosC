// 3. Escriba un programa que lea el n�mero de la asignatura
// y muestre por pantalla el nombre de la asignatura de acuerdo a la 
//siguiente tabla.
// 132	|Tecnicas de organizaci�n empresarial
// 402	|Matem�tica discreta
// 111	|Elementos de programaci�n
// 171	|Fisica
// 120	|Sistemas electronicos digitales
#include <stdio.h>
#include <conio.h>

int main() {
	int materia;
	printf("===CONSULTA DE MATERIAS===\n\n");
	printf("Por favor, ingrese c�digo de materia: ");
	scanf("%d", &materia);
	
	switch(materia)
	{
	case 111: 
		printf("\nMateria seleccionada:\n");
		printf("Elementos de programaci�n (Cod. 111)");
		break;
	case 120: 
		printf("\nMateria seleccionada:\n");
		printf("Sistemas electronicos digitales (Cod. 120)");
		break;
	case 132: 
		printf("\nMateria seleccionada:\n");
		printf("Tecnicas de organizaci�n empresarial (Cod. 132)");
		break;
	case 171: 
		printf("\nMateria seleccionada:\n");
		printf("Fisica (Cod. 171)");
		break;
	case 402: 
		printf("\nMateria seleccionada:\n");
		printf("Matem�tica discreta (Cod. 402)");
		break;
			//**** Caso de entrada inv�lida
	default: printf("\nEl c�digo ingresado no es v�lido...");
	}
	getch();
	return 0;
}

