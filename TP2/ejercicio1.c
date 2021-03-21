/*******
" Intercambie el valor entre dos datos enteros que se ingresan por teclado.
  Ejemplo, si A=2 y B=5, deberá mostrar B=2 y A=5.
*/
#include <stdio.h>

int main() {
	int A, B;
	printf("Ingrese el valor de A y B separados por espacio: ");
	scanf("%d %d", &A, &B);

	printf("Valores intercambiados:\nA = %d\nB = %d", B, A);
	return 0;
}

