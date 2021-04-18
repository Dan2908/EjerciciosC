/*Realizar la operación división usando la operación resta*/
#include <stdio.h>
#include <conio.h>

int main(){
	int a, b, parte_entera, parte_decimal,
		signo, aux;
		//Inicializamos variables
	parte_entera = 0;
	parte_decimal = 0;
	printf("\t****************\n"
		   "\t*  DIVIDIENDO  *\n"
		   "\t****************\n");
	printf("Ingrese dividendo: ");
	scanf("%d", &a);
	printf("Ingrese divisor: ");
	scanf("%d", &b);
		//Comprobar que b != 0
	while(b == 0){
		printf("El divisor debe ser distinto de 0!: ");
		scanf("%d", &b);
	}
		//Operador XOR, si uno de los factores es negativo
		//signo = 1, sino, signo = 0
	signo = ((a < 0) ^ (b < 0)) ? 1 : 0;
		//Convertimos los factores a positivo
	if(a < 0) a = -a;
	if(b < 0) b = -b;
		//Restamos b de a tantas veces como se pueda, contamos
	aux = a;
	while(aux >= b){
		parte_entera++;
		aux -= b;
	}
		//Procedemos con la parte decimal. multiplicamos el resto por 100
	aux *= 100;
		//ej si aux == 1, con la operacion anterior a == 100
	while(aux >= b){
		parte_decimal++;
		aux -= b;
	}
		//Si es negativo, cambiamos de signo
	if(signo) parte_entera = -parte_entera;
		//Imprimir resultado
	printf("%d / %d = %d,%d", a, b, parte_entera, parte_decimal);
	getch();
	return 0;
}