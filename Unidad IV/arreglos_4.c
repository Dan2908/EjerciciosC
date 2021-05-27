#include <stdio.h>
#include <conio.h>

int arr1[10] = {20, 18, 16, 14, 12, 10, 8, 6, 4, 2};
int arr2[10] = {19, 17, 15, 13, 11, 9, 7, 5, 3, 1};

int main() {
	int nuevo[20];
	int i = 0, j = 0, k = 0;
	
	while(j < 10 || i < 10){
		if(arr1[i] < arr2[j]){
			nuevo[j] = arr1[i];
			k++;
			i++;
		}
		else if(arr1[i] < arr2[j]){
			nuevo[k] = arr2[j];
			k++;
			j++;
		}
	}
	for(int i = 0; i < 20; i++){
		printf("%i ", nuevo[i]);
	}
	return 0;
}

