#include <stdio.h>
#include <conio.h>
	
int suma(int a,int b);

int main(){
	int a, b, res;	//a + b = res
		//Solicitamos valores de la suma
	printf("Ingrese valores de la suma:\n ");
	scanf("%d", &a);
	printf("+\n ");
	scanf("%d", &b);
		//Sumamos y mostramos resultado
	res = suma(a, b);
	printf("________\n%d", res);
	getch();
	return 0;
}
	//Función suma(a, b)
int suma(int a,int b){
	return (a+b);
}
