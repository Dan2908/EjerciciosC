/*
Ingresar por teclado dos valores enteros a y b. Calcular la operaci�n s=a+b
si a es mayor que b en caso contrario calcular la operaci�n r=b-a.
Mostrar por pantalla el resultado de la suma y de la resta seg�n corresponda
*/
#include <stdio.h>
#include <conio.h>

int main(){
	int a, b, r;
	//ingresar por teclado
	printf("Ingresar 2 valores:\n");
	scanf("%d %d", &a, &b);
	//condici�n
	if(a > b)		
	{
		//Si a es mayor a b
		r = a+b;
		printf("El resultado es %d", r);
	}
		else if(a == b)
		{
			//Si a es igual a b
			printf("a y b son iguales");
		}
				else 
				{
					//Si a es menor que b
					r = a-b;
					printf("El resultado es %d", r);
				}
	getch();
	return 0;
}
