/*Ingresar por teclado n números mayores que cero y divisible por 3.
 
 En el caso de que se ingrese un valor que no corresponda se debe pedir uno
 nuevamente hasta que se ingrese un valor válido. Calcular la sumatoria de los
 valores ingresados que cumplan con la condición indicada y mostrar el resultado 
 por pantalla. También mostrar por pantalla la cantidad de números ingresados 
 correctamente y los que no.*/
#include <stdio.h>
#include <conio.h>

int main() {
	int n;		//Cantidad de numeros a solicitar.
	int bien = 0, mal = 0, total = 0, entrada;
	
	printf("Cuantos valores desea ingresar? ");
	scanf("%d", &n);
	
	printf("\nIngrese %d valores enteros mayores que 0 y divisibles por 3:\n\n", n);
	
	while(n != 0){
		printf("Valor: ");
		scanf("%i", &entrada);
		if((entrada  > 0) && (entrada%3 == 0)){
			bien++;
			n--;
		}else{
			mal++;
			printf("El valor %d no cumple la condicion, ingrese otro!\n", entrada);
		}
	}
	
		//Imprimir resultados
	printf("\nValores correctos ingresados: %d\n", bien);
	printf("Valores incorrectos ingresados: %d\n", mal);
	printf("La sumatoria de los valores correctos es: %d\n", total);
	
	getch();
	return 0;
}

