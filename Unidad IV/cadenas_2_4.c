#include <stdio.h>
#include <string.h>
#define PAUSA fflush(stdin); getchar()
#define FIN(x) printf(x); PAUSA; return 0

/* Cuenta cuantas veces aparece el caracter c en la cadena */
int contar_caracter(char * cadena, char c);
const static unsigned M = 100;      // Longitud máxima de cadena

int main(){
    char cadena[N], c;                          //Cadena; c = caracter a buscar
    printf("\n == Buscador de caracter == \n\n");
//Pedir cadena
    printf("Escriba la cadena en donde buscar: \n");
    gets(cadena);
//Pedir caracter
    printf("Escriba el caracter a buscar: ");
    c = getchar();
//Buscar e imprimir resultados
    printf("\nCadena: \"%s\".", cadena);
    printf("\n = > El caracter \'%c\' aparece %d veces...\n", c, contar_caracter(cadena, c) );

    FIN("\nFin del programa, presione Enter para salir...");
}

int contar_caracter(char * cadena, char c){
    int result = 0;                           // Contador;
    char *p = strchr(cadena, c);              // strchr() devuelve el puntero al primer caracter c en la cadena.
    while(p != NULL){                         // si no hay coincidencia strchr() devuelve NULL
        result++;                             // si hay coincidencia se incrementa el contador
        p = strchr(p+1, c);                   // y se vuelve a buscar a partir del caracter siguiente
    }
    return result;                            // Devuelve el contador;
}