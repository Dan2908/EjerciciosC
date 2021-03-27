// Construir un programa que simule el funcionamiento de una calculadora
// que puede realizar las cuatro operaciones aritméticas básicas
// (suma, resta, producto y división) con valores numéricos enteros. 
// El usuario debe especificar la operación con el primer carácter del primer
// parámetro de la línea de comandos: S o s para la suma, R o r para la resta,
// P, p, M o m para el producto y D o d para la división. Los valores de los
// operandos se deben indicar en el segundo y tercer parámetros.
// Nota: Se recomienda el empleo de una sentencia switch.
#include <stdio.h>
#include <conio.h>
#include <ctype.h>		//Librería que contiene tolower();

int main(int argc, char *argv[]) {
	char opcion;
	int a, b;
	printf("___C_A_L_C_U_L_A_D_O_R_A___\n\n");

	printf("Elija una operación:\n\t(S/s = Suma)\n\t(R/r = Resta)\n\t(P/p = Producto)\n\t(D/d = División)\n> ");
		// Se utiliza la función tolower() para convertir cualquier caracter
		// en minúsculas.
	opcion = tolower(getchar());
	
	switch(opcion)
	{
		/**** Formato amigable :D ****/
	case 's': /*Suma*/
		printf("SUMA:\n ");
		scanf("%d", &a);
		printf("+\n ");
		scanf("%d", &b);
		printf("___________\n %d", a+b);
		break;
	case 'r': /*Resta*/
		printf("RESTA:\n ");
		scanf("%d", &a);
		printf("-\n ");
		scanf("%d", &b);
		printf("___________\n %d", a-b);
		break;
	case 'p': /*Producto*/
		printf("PRODUCTO:\n ");
		scanf("%d", &a);
		printf("x\n ");
		scanf("%d", &b);
		printf("___________\n %d", a*b);
		break;
	case 'd': /*División*/
		printf("DIVISION:\n ");
		scanf("%d", &a);
		printf("/\n ");
		scanf("%d", &b);
			// Si b = 0
		if(b == 0)
			printf("___________\n ERROR (división por 0)");
		else
				//Pasamos los 'int' a 'double' para mas precisión
			printf("___________\n %lf", (double)a/(double)b); 
		break;
	default: /* No válido*/
		printf("Opción no válida %c", opcion);
	}
	
	printf("\n\nFinalizado, presione una tecla para salir...");
	getch();
	return 0;
}

