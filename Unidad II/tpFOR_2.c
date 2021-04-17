#include <stdio.h>
#include <conio.h>

int main(){
	int entrada, acumulador = 0;

	printf("Ingrese un valor entero: ");
	scanf("%i", &entrada);
		/* Mientras sea menor a la mitad de la entrada
		 * ya que ningun numero es divisible por más de la mitad
		 * de su valor */
	for(int i = 1; i <= entrada/2; i++){
			/* Si el resto de la division (entrada % i) es 0
			 * i es divisor de "entrada".
			 * Un valor distinto de 0 es TRUE para C */
		if( !(entrada%i) )
			acumulador += i;
	}

		//Mostrar resultado (Operador ternario)
	(acumulador == entrada) ? printf("%i es perfecto.", entrada) : printf("%i no es perfecto", entrada);

	getch();
	return 0;
}
