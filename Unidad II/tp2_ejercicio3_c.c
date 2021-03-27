// Construir un programa que simule el funcionamiento de una calculadora
// que puede realizar las cuatro operaciones aritm�ticas b�sicas
// (suma, resta, producto y divisi�n) con valores num�ricos enteros. 
// El usuario debe especificar la operaci�n con el primer car�cter del primer
// par�metro de la l�nea de comandos: S o s para la suma, R o r para la resta,
// P, p, M o m para el producto y D o d para la divisi�n. Los valores de los
// operandos se deben indicar en el segundo y tercer par�metros.
// Nota: Se recomienda el empleo de una sentencia switch.
#include <stdio.h>
#include <conio.h>
#include <ctype.h>		//Librer�a que contiene tolower();

int main(int argc, char *argv[]) {
	char opcion;
	int a, b;
	printf("___C_A_L_C_U_L_A_D_O_R_A___\n\n");

	printf("Elija una operaci�n:\n\t(S/s = Suma)\n\t(R/r = Resta)\n\t(P/p = Producto)\n\t(D/d = Divisi�n)\n> ");
		// Se utiliza la funci�n tolower() para convertir cualquier caracter
		// en min�sculas.
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
	case 'd': /*Divisi�n*/
		printf("DIVISION:\n ");
		scanf("%d", &a);
		printf("/\n ");
		scanf("%d", &b);
			// Si b = 0
		if(b == 0)
			printf("___________\n ERROR (divisi�n por 0)");
		else
				//Pasamos los 'int' a 'double' para mas precisi�n
			printf("___________\n %lf", (double)a/(double)b); 
		break;
	default: /* No v�lido*/
		printf("Opci�n no v�lida %c", opcion);
	}
	
	printf("\n\nFinalizado, presione una tecla para salir...");
	getch();
	return 0;
}

