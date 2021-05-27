#include <stdio.h>
#include <conio.h>
	//Función cuadrado(int i) devuelve cuadrado de i;
int cuadrado(int i){
	return i*i;
}

int main(){
	int i,resultado;
		//Bucle de i = 0 a i = 10
	for (i=0;i<10;i++){
		resultado = cuadrado(i);
		printf("Cuadrado de %d: %d\n",i,resultado);
	} 
	
	getch();
	return 0;
}	
