/*
"	Ingresar un valor entero por teclado, calcular y mostrar por pantalla:
	a. La quinta parte de dicho valor.
	b. La mitad de la quinta parte.
	c. El cuadrado de dicho valor (usar función predefinida en C)
*/
#include <stdio.h>
#include <math.h>

int main() {
	int numero;
	float calc;
		//Leemos un entero y guardamos en "numero" ************
	printf("Ingrese un valor entero: ");
	scanf("%d", &numero);		
		/*Calculamos la quinta parte**************************/
	calc = numero/5;
	printf("La quinta parte de %d es: %.2f \n", numero, calc);
		/*Calculamos la mitad de la quinta parte**************/
	calc /= 2;
	printf("La mitad de la quinta parte es: %.2f\n", calc);
		/*Calculamos el cuadrado******************************/
	calc = pow(calc, 2);
	printf("El cuadrado del valor es: %.2f\n",  calc);
	return 0;
}

