/*Modificar el ejercicio 2.2 de la guía de trabajo práctico de Switch,
  de tal forma que se pueda repetir la selección de operaciones tantas
  veces como el usuario quiera, preguntándole si quiere realizar otra operación.*/
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>	//bool

int main() {
	int a, b, operacion;
	while(true){
			//************* Menu principal
		printf("**** Elija una operación ****\n");
		printf("\t 1. Sumar\n\t 2. Restar\n\t 3. Multiplicar\n\t 4. Dividir\n\t 0. Salir\n");
		scanf("%d", &operacion);
			//************ Operaciones del 0(salir) al 4
		switch(operacion){
			case 0:
				printf("Saliendo...");
				break;
			case 1: 
				printf("\nIngrese los valores a sumar:\n ");
				scanf("%d", &a);
				printf("+\n ");
				scanf("%d", &b);
				printf("__________\n%10d\n", a+b);
				break;
			case 2: 
				printf("\nIngrese los valores a restar:\n ");
				scanf("%d", &a);
				printf("-\n ");
				scanf("%d", &b);
				printf("__________\n%10d\n", a-b);
				break;
			case 3: 
				printf("\nIngrese los valores a multiplicar:\n ");
				scanf("%d", &a);
				printf("x\n ");
				scanf("%d", &b);
				printf("__________\n%10d\n", a*b);
				break;
			case 4: 
				printf("\nIngrese los valores a dividir:\n ");
				scanf("%d", &a);
				printf("/\n ");
				scanf("%d", &b);
				printf("__________\n%10.2lf\n", (double)a/b);
				break;
				// ****************caso de opción incorrecta
			default:
				printf("Opción incorrecta: %d", operacion);
		}
		if(operacion == 0) break;	//Si elige salir, sale del bucle principal
	}
	getch();
	return 0;
}
