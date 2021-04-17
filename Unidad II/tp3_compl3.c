// 3-Escriba un programa que mediante sentencias switch, muestre por pantalla, lo seleccionado por el usuario, con respecto a:
//	a)	Sexo
//	b)	Edad menor a 21 - mayor a 21
//	c)	Estudios: Primarios - Secundarios- Superior no Universitario - Universitario - Otros.
//	Tener en cuenta que deberá utilizar 3 switch diferentes.
	
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char sexo[10], edad[11], estudios[26];
	int opc;
	
	printf("Elija su género:\n");
	printf("\t1. Masculino\n\t2. Femenino\n\t3. Otro\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
	case 1: /*Masculino*/
		strcpy(sexo, "Masculino");
		break;
	case 2: /*Femenino*/
		strcpy(sexo, "Femenino");
		break;
	case 3: /*Otro*/
		strcpy(sexo, "Otro");
		break;
	default:
		printf("Opción no válida: \'%d\'", opc);
		return 1; 		//Devuelve 1 a main() y termina ejecución
	}
	
	printf("\nElija su rango de edad\n");
	printf("\t1. Menor de 21 años\n\t2. Mayor de 21 años\n");
	scanf("%d", &opc);
	
	switch(opc){
	case 1:
		strcpy(edad, "Menor a 21");
		break;
	case 2:
		strcpy(edad, "Mayor a 21");
		break;
	default:
		printf("Opción no válida: \'%d\'", opc);
		return 1; 		//Devuelve 1 a main() y termina ejecución
	}
	
	printf("\nElija nivel de estudios:\n");
	printf("\t1. Primarios\n\t2. Secundarios\n\t3. Superior no Universitario\n\t4. Universitario\n\t5. Otros\n");
	scanf("%d", &opc);
	
	switch(opc){
	case 1:
		strcpy(estudios, "Primarios");
		break;
	case 2:
		strcpy(estudios, "Secundarios");
		break;
	case 3:
		strcpy(estudios, "Superior no Universitario");
		break;
	case 4:
		strcpy(estudios, "Universitario");
		break;
	case 5:
		strcpy(estudios, "Otros");
		break;
	default:
		printf("Opción no válida: \'%d\'", opc);
		return 1; 		//Devuelve 1 a main() y termina ejecución
	}
	
	printf("\n========DATOS PERSONALES========\n");
	printf("  Sexo: %s\n", sexo);
	printf("  Edad: %s\n", edad);
	printf("  Nivel de estudios: %s\n", estudios);
	printf("================================\n");
	getch();
	return 0;
}

