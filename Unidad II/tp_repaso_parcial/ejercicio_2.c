/*En  un  videoclub  se  ofrece  la  promoción  de  llevarse  tres  películas
  por  el  precio  de  las  dos  más  baratas.Haga  un programa que, dados los
  tres precios de las películas, determine la cantidad a pagar.*/
#include <stdio.h>
#include <conio.h>

int main() {
	double p1, p2, p3, mayor;	//precios y variable para almacenar mayor precio
	printf("##########$$$$$$$$$##########\n"
		   "#         VIDEOCLUB         #\n"
		   "#        OFERTA  3X2        #\n"
		   "##########$$$$$$$$$##########\n");
		//Solicitamos el precio de las películas
	printf("\nValor de la película 1: $");
	scanf("%lf", &p1);
	printf("\nValor de la película 2: $");
	scanf("%lf", &p2);
	printf("\nValor de la película 3: $");
	scanf("%lf", &p3);
		//Comparamos los 2 primeros y guardamos el mator
	if(p1 > p2)
		mayor = p1;
	else
		mayor = p2;
	if(mayor < p3)	//Comparamos el mayor de los anteriores con el tercero y guardamos
		mayor = p3;
		//El precio de las dos mas baratas es la suma de las tres menos el mas caro
		//mostramos resultados (%.2lf: dos decimales)
	printf("\n***Leve las 3 películas a %.2lf", (p1+p2+p3-mayor) );
	
	getch();
	return 0;
}

