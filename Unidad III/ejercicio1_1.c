#include <stdio.h> /* necesario para utilizar printf()*/
#include <conio.h> /* necesario para utilizar getch()*/

/* El año bisiesto puede calcularse como:  p && (!q || r ); 
 * Fuente: https://es.wikipedia.org/wiki/A%C3%B1o_bisiesto#Algoritmo_computacional
 */
#define p(a) (a%4 == 0) //año divisible por 4
#define q(a) (a%100 == 0) //año divisible por 100
#define r(a) (a%400 == 0) //año divisible por 400

int bisiesto(int a){
	if(p(a) && (!q(a) || r(a))) return 1;
	else return 0;
}

int main() {
	int anio;
		//Solicitamos año al usuario
	printf("Ingrese año: \n");
	scanf ("%d",&anio);
		//Si bisiesto(anio) == 0 -> false; si es 1 -> true;
	printf("El año %d %s", anio, (bisiesto(anio)) ? "es bisiesto" : "no es bisiesto");
	
	getch();
	return 0;
}
