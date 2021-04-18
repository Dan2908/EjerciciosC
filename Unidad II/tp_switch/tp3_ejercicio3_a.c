#include <stdio.h>
#include <conio.h>

int main() {
	int opc;
	printf("******************************************************************************\n");
	printf("....:::::::::::::::::::::::::Sistema de pedidos::::::::::::::::::::::....\n\n");
	printf("\t1 - Bebidas\n\t2 - Comidas\n\t3 - Postres\n\t4 - Salir\n");
	printf("..............................\n");
	printf("Elija una opción...\n");
	printf("**************************************************\n\n");
	scanf("%d", &opc);
	switch(opc)
	{
	case 1:	/*Bebidas*/
		printf("===BEBIDAS===\n");
		printf("1. Agua 1/2l\t$100\n");
		printf("2. Cerveza 1l\t$200\n");
		printf("3. Gaseosa 1l\t$150\n");
		break;
	case 2:	/*Bebidas*/
		printf("===COMIDAS===\n");
		printf("1. Pizza muzza\t\t$350\n");
		printf("2. Pizza calabreza\t$400\n");
		printf("3. Pizza especial\t$450\n");
		printf("4. Empanadas de carne\t$500\n");
		break;
	case 3:	/*postres*/
		printf("===POSTRES===\n");
		printf("1. Tiramisú\t$170\n");
		printf("2. Flan\t\t$150\n");
		printf("3. Helado\t$200\n");
		break;
	case 4:	/*Salir*/
		printf("Saliendo... Muchas gracias\n");
		break;
	default:
		printf("La opción ingresada no es válida.");
	}
	getch();
	return 0;
}

