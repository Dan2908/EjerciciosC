//Escriba un programa en Lenguaje C que solicite el ingreso de dos
// n�meros enteros y que luego permita seleccionar si se sumar�n, 
// restar�n dividir�n o multiplicar�n y muestre el resultado por pantalla.
#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, opc;
	double result;
	char simbolo;	//*** Simbolo para mostrar la operaci�n (+,-,x � /)
	
	printf("Ingrese dos n�meros enteros:\n");
	scanf("%d %d", &a, &b);
	
	printf("�Qu� desea hacer con A = %d y B = %d?\n", a, b);
	printf("\t1. Sumarlos\n\t2. Restarlos\n\t3. Multiplicarlos\n\t4. Dividirlos\n\t0. Nada(Salir)\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
	case 0: /*Salir*/
		printf("Saliendo...\n");
		return 0;		//devuelvo el valor 0 a main() y termina la ejecuci�n
	case 1: /*Sumar*/
		simbolo = '+';
		result = a + b;
		break;
	case 2: /*Restar*/
		simbolo = '-';
		result = a - b;
		break;
	case 3: /*Multiplicar*/
		simbolo = 'x';
		result = a * b;
		break;
	case 4: /*Salir*/
			// En el caso de divisi�n por 0.
		if(b == 0)
		{
			printf("No es posible la divisi�n por 0.");
				//Se termina la ejecuci�n
			return 1;	
		}
		simbolo = '/';
			/* Se convierten los enteros a double utilizando casting
				antes de operar para obtener presici�n al dividir*/
		result = (double)a / (double)b;
		break;
	}
	printf("%d %c %d = %lf", a, simbolo, b, result);
	getch();
	return 0;
}

