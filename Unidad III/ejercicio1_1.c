#include <stdio.h> /* necesario para utilizar printf()*/
#include <conio.h> /* necesario para utilizar getch()*/
#include <stdbool.h> /*Librería del tipo bool*/

#define p(a) (a%4 == 0)
#define q(a) (a%100 == 0)
#define r(a) (a%400 == 0)

/*p: Es divisible entre 4 -> anio%4 == 0
  q: Es divisible entre 100 -> anio%100 == 0
  r: Es divisible entre 400 -> anio%400 == 0
	Entonces se utiliza la fórmula lógica p ∧ ( ¬ q ∨ r ) para establecer si un año dado es bisiesto: 
	es bisiesto si es divisible entre cuatro y (no es divisible entre 100 o es divisible entre 400).
Fuente: https://es.wikipedia.org/wiki/A%C3%B1o_bisiesto#Algoritmo_computacional
*/
bool calcular_bisiesto(int anio){
	if(p(anio) && (!q(anio) || r(anio))) // p ∧ ( ¬ q ∨ r )
		return true;
	else 
		return false;
}

int main() {
 	int anio;

 	printf("Ingrese anio \n");
 	scanf ("%d",&anio);
 	
 	printf("%d %s", anio, (calcular_bisiesto(anio)) ? "es bisiesto" : "no es bisiesto");
 
 	getch();
 	return 0;
}