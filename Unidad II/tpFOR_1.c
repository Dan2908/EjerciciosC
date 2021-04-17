#include <stdio.h>
#include <conio.h>

#define N 5	//Defino entero (5)

int main(){
	for(int i = 1; i <= N; i++){
		printf("%i %i ", i, -i);
	}

	getch();
	return 0;
}
