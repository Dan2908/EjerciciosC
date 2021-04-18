/*Realizar la operación multiplicación usando la operación suma.*/
#include <stdio.h>
#include <conio.h>

int main(){
	int a, b, c = 0,
		signo;

	printf("*****************\n"
		   "* MULTIPLICADOR *\n"
		   "*****************\n");
	printf("Ingrese primer factor: ");
	scanf("%d", &a);
	printf("Ingrese segundo factor: ");
	scanf("%d", &b);
		//Operador XOR, si uno de los factores es negativo
		//signo = 1, sino, signo = 0
	signo = ((a < 0) ^ (b < 0)) ? 1 : 0;
		//mostramos primera parte del resultado ya que a cambiará
	printf("%d x %d = ", a, b);
		//Convertimos los factores a positivo
	if(a < 0) a = -a;
	if(b < 0) b = -b;
		//Se suma b al resultado tantas veces como sea a
	while(a){
		c += b;
		a--;
	}
		//Si es negativo, cambiamos de signo
	if(signo) c = -c;
		//Imprimir resultado
	printf("%d", c);
	getch();
	return 0;
}