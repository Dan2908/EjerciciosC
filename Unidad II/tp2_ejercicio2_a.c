// Programa que indica la correspondencia de un número introducido 
// por el usuario con un mes del año.
#include <stdio.h>

int main() {
	int mes;
	printf("ingrese numero del mes: ");
	scanf("%d", &mes);
	
	switch(mes)
	{
		case 1: printf("ingresó el mes de Enero"); break;
		case 2: printf("ingresó el mes de Febrero"); break;
		case 3: printf("ingresó el mes de Marzo"); break;
		case 4: printf("ingresó el mes de Abril"); break;
		case 5: printf("ingresó el mes de Mayo"); break;
		case 6: printf("ingresó el mes de Junio"); break;
		case 7: printf("ingresó el mes de Julio"); break;
		case 8: printf("ingresó el mes de Agosto"); break;
		case 9: printf("ingresó el mes de Septiembre"); break;
		case 10: printf("ingresó el mes de Octubre"); break;
		case 11: printf("ingresó el mes de Noviembre"); break;
		case 12: printf("ingresó el mes de Diciembre"); break;
			/* Si el numero ingresado no corresponde a ningún mes*/
		default: printf("El mes ingresado no existe");
	}
	return 0;
}

