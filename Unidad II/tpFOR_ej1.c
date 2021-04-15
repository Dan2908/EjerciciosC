#include <stdio.h>

int main() {
	int n;
	
	printf("Ingrese el maximo de la sucesión:\n ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("%d %d ", i, -i);
	}
	
	getchar();
	return 0;
}

