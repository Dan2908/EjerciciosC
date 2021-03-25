/*
Una farmacia hace el 15% de descuento sobre los precios de la lista oficial.
 Hacer un programa que permita ingresar por teclado el precio de lista de un
 determinado artículo y la cantidad de unidades compradas por un determinado cliente.
 Luego calcular e informar por pantalla el total a pagar aplicando el descuento respectivo.
 Por ejemplo: Precio del artículo: $5.-. Cantidad de Unidades: 2. Total a Pagar: $ 8,50.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
		/****Definimos variables****/
	double precio, total;
	int unidades;
		/****Solicitamos datos y almacenamos****/
	printf("Precio del producto: $");
	scanf("%lf", &precio);
	printf("Cantidad de unidades: ");
	scanf("%d", &unidades);
		/****Calculamos descuento e imprimimos el resultado****/
	total = precio*unidades*0.85;
	printf("\nPrecio del artículo: $%.2lf", precio);
	printf("\nCantidad de Unidades: %d", unidades);
	printf("\nTotal a pagar: $%.2lf", total);
	return 0;
}

