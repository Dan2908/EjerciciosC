/*Realizar un programa que dado un n�mero entre 0,0001 y 0,9999 
 (y de no m�s de 4 cifras decimales), obtenga y muestre la correspondiente 
 fracci�n irreducible. Por ejemplo, el n�mero 0,25 se puede obtener a partir
 de 25/100, o de 2/8, o de 1/4, entre otros. La fracci�n irreducible, est�
 formada por un numerador y un denominador que son primos entre s�.Ej: 1/4*/
#include <stdio.h>
#include <conio.h>

int main() {
	double n, aux;
	int numerador, denominador = 1; //iniciado en 1 para incrementarlo a 2 en do while
	
		/*Solicitamos dato al usuario, en este caso especificamos el formato %lf*/
	printf("Ingrese un numero entre 0,0001 y 0,9999: ");
	scanf("%lf", &n);
		/*Asegurar que n est� entre el rango requerido*/
	while(n < 0.0001 || n > 0.9999){
		fflush(stdin);
		printf("El n�mero debe estar entre 0,0001 y 0,9999: ");
		scanf("%lf", &n);
	}
		//En aux guardamos el resultado del producto de n por el denominador
		//En numerador guardamos la parte entera de este resultado
		//Cuando aux - numerador = 0 significa que no hay resto y por lo tanto
		//numerador / denominador = n; siendo: numerador = n*denominador;
		//
	do{
		denominador++;
		aux = n*denominador;	//Producto
		numerador = aux;		//Parte entera del producto
	}
	while(aux - numerador != 0.0000);	//si es 0.0000, el denominador
		//imprimimos resultado
	printf("%.4lf = %d/%d", n, numerador, denominador);
	getch();
	return 0;
}

