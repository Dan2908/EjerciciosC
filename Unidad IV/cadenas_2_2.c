#include <stdio.h>
#include <string.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

/* Asigna nombres de variables para los valores -1, 0 y 1 */
typedef enum comparador{
    MENOR = -1,     // -1
    IGUAL,          // 0
    MAYOR           // 1
} Comparador;
/** Mide la longitud de dos cadenas (strlen) y devuelve: 
 * -1 si c1 < c2.
 *  1 si c1 > c2.
 *  0 si c1 == c2.                  */
Comparador mas_larga(char * c1, char* c2);
/** Compara dos cadenas (strcmp) y devuelve: 
 * -1 si c1 < c2.
 *  1 si c1 > c2.
 *  0 si c1 == c2.                          */
Comparador mayor(char * c1, char* c2);

char C1[] = "Universidad Tecnologica Nacional";
char C2[] = "Facultad Regional Resistencia";
char concatena[] = " - French 414";  

/** ---------------------- Programa ----------------------*/

int main(){
    printf("\n\t == CADENAS ==\n");
    /* Mostrar el contenido de C1 y C2. */
    printf("Contenido de C1: \"%s\"\n", C1);
    printf("Contenido de C2: \"%s\"\n\n", C2);

    /* Indicar cuál es la cadena más larga. */
    switch(mas_larga(C1, C2)){
        case MENOR: printf(" => La cadena mas larga es C2\n");
            break;
        case MAYOR: printf(" => La cadena mas larga es C1\n");
            break;
        case IGUAL: printf(" => C1 y C2 tienen igual longitud \n");
    }

    /* Comparar ambas cadenas */
    switch(mayor(C1, C2)){
        case MENOR: printf(" => C2 es mayor que C1\n");
            break;
        case MAYOR: printf(" => C1 es mayor que C2\n");
            break;
        case IGUAL: printf(" => C1 y C2 son iguales\n");
    }

    /* Concatenar una cadena a la cadena más corta. */
    printf("\n => Cadena concatenada: ");
    if(mas_larga(C1, C2) == MAYOR){
        strcat(C1, concatena);
        printf("\"%s\"\n", C1);
    }
    else{
        strcat(C2, concatena);
        printf("\"%s\"\n", C1);
    }
//Fin
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;

    return 0;
}

/** ---------------------- Definiciones ----------------------*/

Comparador mas_larga(char * c1, char* c2){
    if(strlen(C1) < strlen(C2))
        return MENOR;
    if(strlen(C1) > strlen(C2))
        return MAYOR;
    return IGUAL;
}

Comparador mayor(char * c1, char* c2){
    int comp = strcmp(C1, C2);
    if(comp < 0)
        return MENOR;
    if(comp < 0)
        return MAYOR;
    return IGUAL;
}