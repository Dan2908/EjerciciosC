// Programa que indica la correspondencia de un n�mero introducido 
// por el usuario con un mes del a�o.
#include <stdio.h>

int main() {
	int mes;
	printf("ingrese numero del mes: ");
	scanf("%d", &mes);
	
	switch(mes)
	{
		case 1: printf("ingres� el mes de Enero"); break;
		case 2: printf("ingres� el mes de Febrero"); break;
		case 3: printf("ingres� el mes de Marzo"); break;
		case 4: printf("ingres� el mes de Abril"); break;
		case 5: printf("ingres� el mes de Mayo"); break;
		case 6: printf("ingres� el mes de Junio"); break;
		case 7: printf("ingres� el mes de Julio"); break;
		case 8: printf("ingres� el mes de Agosto"); break;
		case 9: printf("ingres� el mes de Septiembre"); break;
		case 10: printf("ingres� el mes de Octubre"); break;
		case 11: printf("ingres� el mes de Noviembre"); break;
		case 12: printf("ingres� el mes de Diciembre"); break;
			/* Si el numero ingresado no corresponde a ning�n mes*/
		default: printf("El mes ingresado no existe");
	}
	return 0;
}

