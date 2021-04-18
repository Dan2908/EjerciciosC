// 3. Escriba un programa que lea el número de la asignatura
// y muestre por pantalla el nombre de la asignatura de acuerdo a la 
//siguiente tabla.
// 132	|Tecnicas de organización empresarial
// 402	|Matemática discreta
// 111	|Elementos de programación
// 171	|Fisica
// 120	|Sistemas electronicos digitales
#include <stdio.h>
#include <conio.h>

int main() {
	int materia;
	printf("===CONSULTA DE MATERIAS===\n\n");
	printf("Por favor, ingrese código de materia: ");
	scanf("%d", &materia);
	
	switch(materia)
	{
	case 111: 
		printf("\nMateria seleccionada:\n");
		printf("Elementos de programación (Cod. 111)");
		break;
	case 120: 
		printf("\nMateria seleccionada:\n");
		printf("Sistemas electronicos digitales (Cod. 120)");
		break;
	case 132: 
		printf("\nMateria seleccionada:\n");
		printf("Tecnicas de organización empresarial (Cod. 132)");
		break;
	case 171: 
		printf("\nMateria seleccionada:\n");
		printf("Fisica (Cod. 171)");
		break;
	case 402: 
		printf("\nMateria seleccionada:\n");
		printf("Matemática discreta (Cod. 402)");
		break;
			//**** Caso de entrada inválida
	default: printf("\nEl código ingresado no es válido...");
	}
	getch();
	return 0;
}

