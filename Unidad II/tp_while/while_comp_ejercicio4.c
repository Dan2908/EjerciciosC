/*Calcularel total de una factura que un cliente debe pagar
 en una librería. Ingresar por teclado la cantidad de líneas
 de la factura. Mostrar por pantalla el total parcial y final*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>	//libreria que contiene toupper()
int main(){
	double linea, total_s_imp, impuestos;
	char eleccion;

	total_s_imp = 0;
	impuestos = 0;
	printf("\t==== Factura ====\n\n");
		//Bucle prncipal
	while(1){
		printf("Agragar linea de factura? [s/n]\n");
		eleccion = toupper(getch());
			//validar que ingrese s o n
		while(eleccion != 'S' && eleccion != 'N'){
			printf("Debe elegir 's' o 'n'\n");
			eleccion = toupper(getch());
		}
		if(eleccion == 'N') break;	// <<---interrupción

		printf("Monto: $");
		scanf("%Lf", &linea);
			//Calculamos totales;
		total_s_imp += linea * 0.79;
		impuestos += linea - total_s_imp;

	}
	printf("|%2s|%2s|%2s\n", "Total s/ impuestos", "impuestos", "total");
	printf("|$%-8.2lf|%-8.2lf|%-8.2lf", total_s_imp, impuestos, total_s_imp+impuestos);



	getch();
	return 0;
}