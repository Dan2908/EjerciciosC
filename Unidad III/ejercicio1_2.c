#include <stdio.h>
#include <conio.h>
#include <ctype.h> // incluye tolower()

char* vocales(char v);
	
int main() {
	char car;
		//Solicitamos caracter a usuario
	printf("Ingrese un caracter: ");
	car = getchar();
		//imprimimos resultado de la funci�n
	printf(vocales(car));
	
	getch();
	return 0;
}

char* vocales(char v){
	v = tolower(v);		//pasamos a min�scula para evitar errores con may�sculas
	switch(v){ //devolvemos la cadena correspondiente
	case 'a': return "Vocal a\n";
	case 'e': return "Vocal e\n";
	case 'i': return "Vocal i\n";
	case 'o': return "Vocal o\n";
	case 'u': return "Vocal u\n";
	default: return "No es vocal\n";
	}
}
