/*Ejercicio N�2: Escribir un bucle que calcule la suma de cada tercer entero,
 comenzando por i=2 (es decir, calcular la suma de 2 + 5 + 8 + 11 +..... )
 para todos los valores de i menores que 100. Usar la sentencia switch
 para seleccionar el tipo de bucle a utilizar para realizar el c�lculo:
   a) Utilizando una instrucci�n while.
   b) Utilizando una instrucci�n do -while.
   c) Utilizando una instrucci�n for.*/
#include <stdio.h>
#include <conio.h>

int main() {
	int i = 2, 
		acumulador = 0;
	char opcion;
		// Elegir bucle
	printf("Elija el tipo de bucle a utilizar\n");
	printf("a) while\n");
	printf("b) do-while\n");
	printf("c) for\n");
	opcion = getch();
		//Validar opci�n
	while(opcion != 'a' && opcion != 'b' && opcion != 'c'){
		printf("ingrese una opci�n valida\n");
		opcion = getch();
	}
		//Operar seg�n opci�n
	switch(opcion){
	case 'a':
		printf("\n(Bucle while)");
		while(i < 100){
			acumulador += i;
			i += 3;
		}
		break;
	case 'b':
		printf("\n(Bucle do-while)");
		do{
			acumulador += i;
			i += 3;
		}while(i < 100);
		break;
	case 'c':
		printf("\n(Bucle for)");
		for(; i < 100; i +=3){
			acumulador += i;
		}
		break;
	default:
		printf("\ningres� un valor incorrecto");
	}
	
	printf("\nLa suma es: %d\n", acumulador);
	getch();
	return 0;
}

