#include <stdio.h>

int main() {
	printf("=== La tabla del 7 ===\n");
	for(int i = 0; i <= 10; i++){
		printf("7 x %d = %d\n", i, i*7);
	}
	
	getchar();
	return 0;
}
