#include <stdio.h>

int main() {
	int n;
	
	printf("Ingrese el maximo de la sucesi�n:\n ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("%d %d ", i, -i);
	}
	
	getchar();
	return 0;
}

