#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define PAUSA fflush(stdin); getchar()
#define FIN(x) printf(x); PAUSA; return 0

#define SE_PARRAFO '*'
#define SE_ORACION '.'
#define SE_PALABRA '-'
#define F_PARRAFO "-.*"

const static unsigned MAX = 250;
static unsigned L = 0;

typedef enum leer{
    LEER_OK,
    LEER_ERROR
} Lector;

Lector error(){
    fprintf(stderr, " --> Error: El parrafo supera la longitud maxima %u, no se agrega.", MAX - L);
    return LEER_ERROR;
}

Lector evaluar(){
    if(feof(stdin))
        return error();
    return LEER_OK;
}

Lector leer(char *cadena){
    char aux[MAX - L];
    fgets(aux, MAX - L, stdin);
    fflush(stdin);
    if(evaluar() == LEER_ERROR)
        return error();
    else
        strcat(cadena, aux);
    return evaluar();
}

void marcar_parrafo(char *cadena){
    char *p = strchr(cadena, '\n');
    *p = SE_PARRAFO;
    return;
}

void marcar_oraciones(char *cadena){
    char *p = strchr(cadena, SE_PARRAFO);
    while(p != NULL){
        printf("\n--- %s", p);
        if( *(p-1) != SE_ORACION){
            char aux[MAX];
            strcpy(aux, p);
            strcpy(p, ".");
            printf("\n--- p: %s", p);
            printf("\n--- aux: %s", aux);
            strcat(cadena, aux);
            printf("\n--- cad: %s", cadena);
        }
        p = strchr(p+2, SE_PARRAFO);
    }
}


const char leer_caracter(){
    char result = getchar();
    fflush(stdin);
    return result;
}

int main(){
    char cadena[MAX];
    cadena[0] = '\0';
    char opc = 's';

    while(opc == 's' || opc != 'n'){
        printf("Agregar un parrafo [s/n]?");
        opc = leer_caracter();
        if(opc == 's'){
            leer(cadena);
            marcar_parrafo(cadena);
        }
    }
    marcar_oraciones(cadena);

    printf("%s", cadena);

    FIN("\nFin del programa, pulse Enter para terminar...");
}