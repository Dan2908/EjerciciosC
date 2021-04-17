#include <stdio.h>

int main() {
	int n, divisores = 0;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n/2; i++){
			if(!(n%i))
				divisores += i;

	}
	
	if(divisores == n)
		printf("%d es un numero perfecto.", n);
	else
		printf("%d NO es un numero perfecto.", n);
	
	return 0;
}

