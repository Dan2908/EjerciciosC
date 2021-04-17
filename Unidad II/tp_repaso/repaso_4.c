/*Corregir programa
  Usando el printf escribir el enunciado del mismo*/
#include <stdio.h>
#include <conio.h>
int main(){
	int p,a,i;
	p=0;
	a=0;
	i=0;
	printf("Calcular el perímetro de un cuadrado dado un lado a ingresado por el usuario"
		   "Si se ingresa un valor negativo 3 veces, no se calcula el perimetro\n\n");
	do{
		printf("Intento %d de 3\n", i);
		printf("Ingrese un valor positivo:\n");
		scanf("%d",&a);
		i++;
	}while (i<3 && a < 0);
	if (i < 3) {
		p= a*4;
		printf("Perimetro= %d\n",p);
	}else 
		printf("Ingreso tres veces un valor incorrecto y no calculará el perímetro\n");
	
	getch();
	return 0;
}
