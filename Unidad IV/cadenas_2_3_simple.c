#include <stdio.h>
#include <string.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

const static unsigned N = 30;           //Longitud de cadenas
void intercambiar(char *c1, char *c2);  //intercambia dos cadenas

/** ---------------------- Programa ----------------------*/

int main(){
    char c[3][N];                 //vector de 3 cadenas
    char aux[N];

    printf("\n\t == CADENAS ==\n\nIngresar 3 cadenas\n");
//Ingresar cadenas y ordenar
    printf(" => Escriba primera cadena:\n\t");  //Primera
    gets(c[0]);
    printf(" => Escriba segunda cadena:\n\t");  //Segunda
    gets(c[1]);
    if(strlen(c[0]) > strlen(c[1]))
        intercambiar(c[0], c[1]);           // |X|X| |
    printf(" => Escriba tercera cadena:\n\t");  //Tercera
    gets(c[2]);
    if(strlen(c[1]) > strlen(c[2])){
        intercambiar(c[1], c[2]);           // | |X|X|
        if(strlen(c[0]) > strlen(c[1]))
            intercambiar(c[0], c[1]);       // |X|X| |
    }
//Imprimir
    printf("\n => Cadenas de menor a mayor:\n");
    for(int i = 0; i < 3; i++){
        printf("Cadena %d: \"%s\", longitud: %d\n", i+1, c[i], strlen(c[i]));
    }
//Fin
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;
    return 0;
}

/** ---------------------- Declaraciones ----------------------*/

void intercambiar(char *c1, char *c2){
    char aux[N];
    strcpy(aux, c1);
    strcpy(c1, c2);
    strcpy(c2, aux);
}