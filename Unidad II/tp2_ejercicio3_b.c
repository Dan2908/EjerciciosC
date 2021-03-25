//Escriba un programa en Lenguaje C que solicite el ingreso de dos
// números enteros y que luego permita seleccionar si se sumarán, 
// restarán dividirán o multiplicarán y muestre el resultado por pantalla.
#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, opc;
	double result;
	char simbolo;	//*** Simbolo para mostrar la operación (+,-,x ó /)
	
	printf("Ingrese dos números enteros:\n");
	scanf("%d %d", &a, &b);
	
	printf("¿Qué desea hacer con A = %d y B = %d?\n", a, b);
	printf("\t1. Sumarlos\n\t2. Restarlos\n\t3. Multiplicarlos\n\t4. Dividirlos\n\t0. Nada(Salir)\n");
	scanf("%d", &opc);
	
	switch(opc)
	{
	case 0: /*Salir*/
		printf("Saliendo...\n");
		return 0;		//devuelvo el valor 0 a main() y termina la ejecución
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
			// En el caso de división por 0.
		if(b == 0)
		{
			printf("No es posible la división por 0.");
				//Se termina la ejecución
			return 1;	
		}
		simbolo = '/';
			/* Se convierten los enteros a double utilizando casting
				antes de operar para obtener presición al dividir*/
		result = (double)a / (double)b;
		break;
	}
	printf("%d %c %d = %lf", a, simbolo, b, result);
	getch();
	return 0;
}

