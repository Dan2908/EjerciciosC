/*Escriba un programa que reciba cuatro calificaciones de un estudiante
  y devuelva el promedio y la m�xima y la m�nima calificaci�n.*/
#include <stdio.h>
#include <conio.h>

int main() {
	float c1, c2, c3, c4,
		max, min, max2, min2, promedio;
	printf("==== Sistema de calificaciones ====\n\n");
	
	printf("Ingrese primera calificaci�n: ");
	scanf("%f", &c1);
	printf("Ingrese segunda calificaci�n: ");
	scanf("%f", &c2);
	printf("Ingrese tercera calificaci�n: ");
	scanf("%f", &c3);
	printf("Ingrese cuarta calificaci�n: ");
	scanf("%f", &c4);
		//comparamos las calificaciones 1 y 2; guardamos el menor;
		//hacemos lo mismo con la 3 y 4; Luego de manera similar con los mayores
	min = (c1 < c2) ? c1 : c2;
	min2 = (c3 < c4) ? c3 : c4;
	max = (c1 > c2) ? c1 : c2;
	max2 = (c3 > c4) ? c3 : c4;
		//Comparamos min y min2 y guardamos el menor en min;
		//Lo mismo con los maximos
	if(min2 < min) min = min2;
	if(max2 > max) max = max2;
		//Calculamos el promedio
	promedio = (c1 + c2 + c3 + c4)/4;
	
	printf("\n---Los resultados son---\n"
		   "Mayor calificaci�n: %.2f \n"
		   "Menor calificaci�n: %.2f \n"
		   "Promedio: %.2f \n", max, min, promedio);

	getch();
	return 0;
}

