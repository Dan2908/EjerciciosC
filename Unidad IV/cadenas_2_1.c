#include <stdio.h>
#include <string.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

const static unsigned N = 20;   //Tamaño de la cadena
static unsigned i;              //Índice de la cadena

/** ---------------------- Programa ----------------------*/

int main(){
//Variables
    char cadena[N+1];
    char nombre[N+1];
//Pide un nombre
    printf("\n == CADENAS ==");
    printf("\nIngresa un nombre: ");
    scanf("%s", cadena);
    strcat(cadena, ".");    // agrega '.' y '/0'
//Pide otro nombre
    printf("\nIngresa otro nombre: ");
    scanf("%s", nombre);
    strcat(cadena, nombre); // concatena el nuevo nombre a la cadena anterior
//Mide la cadena total
    i = strlen(cadena);
    printf("\nLa cadena tiene %i caracteres.\n", i);
//Rellena con 'a'
    while(i != N){
        cadena[i] = 'a';
        i++;
    }
//Marca de fin
    cadena[N] = '\0';
//Imprimir
    printf("\nCadena:\n %s\n", cadena);
//Fin
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;

    return 0;
}


