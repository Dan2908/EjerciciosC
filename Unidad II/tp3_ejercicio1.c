//Encuentra todos los errores del siguiente programa C:	
/* Ejemplo de programa para la sentencia switch case */ 
	
#include <stdio.h>
#include <conio.h> 			//1. Se agrega librería para getch()

int main() 					//2. tipo de devolucion "int"
{ 
	float precio_libro, precio_neto; 
	float descuento; 
	int cod_cliente; 
	printf("Introduzca el precio del libro:\n");	//3. Agregamos '"' al final de la cadena 
	scanf("%f", &precio_libro); 
	printf("Introduzca el código del cliente:\n"); 	//4. Agregamos '"' al final de la cadena
	scanf("%d", &cod_cliente); 
				  
	switch (cod_cliente)							//5. Corregimos nombre de variable "cod_cliente" 
	{ 
	case 1 : /* Clientes registrados */ 
		descuento = 0.1; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
	case 2 : /* Mayoristas */ 
		descuento = 0.15; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
	case 3: /* Empleados de la empresa */ 
		descuento = 0.17; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
	default: /* Nuevos clientes */ 
		descuento = 0.05; 
		precio_neto = precio_libro - (precio_libro * descuento); 
		break; 
	}  
	printf("El precio neto del libro es %f\n", precio_neto); 
	getch();				//6. Agregamos '()' y ";" para indicar función y cerrar.
	return 0;				//7. Agregamos valor de retorno de main().
}

