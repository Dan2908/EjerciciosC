#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define PAUSA fflush(stdin); getchar()
#define FIN(x) printf(x); PAUSA; return 0
#define MAX 25

#define SE_ORA '.'
#define SE_PAL '-'
#define F_PAR "-.*"

typedef enum leer{
    LEER_ERROR,
    LEER_OK
} Lector;

Lector leer(char * output, unsigned tam){
    if(tam == 1)
        *output = tolower(getchar());
    else{
        if(fgets(output, tam, stdin) == NULL || ferror(stdin)){
            fflush(stdin);
            return LEER_ERROR;
        }
        if(output[tam - 1] != '\0'){
            fflush(stdin);
            fprintf(stderr, " x-> Error al leer, la linea ingresada supera el limite maximo (%u)\n", tam);
            return LEER_ERROR;
        }
    }
    fflush(stdin);
    return LEER_OK;
}

void leer_parrafo(char *cadena, unsigned *L){
    static char nuevo[MAX];
    unsigned ultimo;
    //Leer
    if( ! leer(nuevo, *L)){
        fprintf(stderr, " x-> Error al leer parrafo\n");
        return;
    }
    if(nuevo[*L] != '\0'){
        fprintf(stderr, " x-> Error: el parrafo supera el limite disponible de caracteres (%u)\n", L);
        return;
    }
    //borrar el caracter nueva linea '\n'
    *strchr(nuevo, '\n') = '\0';
    //Si termina en '.' (SE_ORA), consideramos oracion y lo borramos para agregarlo luego
    if(nuevo[strlen(nuevo) - 1] == SE_ORA)
        nuevo[strlen(nuevo) - 1] = '\0';
    //se agrega fin de palabra, de oracion y de parrafo (F_PAR)
    strcat(nuevo, F_PAR);
    L = L - strlen(nuevo);
    strcat(cadena, nuevo);
    return;
}

void marca_palabras(char * cadena){
    *strchr(cadena, ' ') = SE_PAL;
}

int main(){
    char cadena[MAX], 
         opcion;
    unsigned L = MAX - 3;

    printf("\n    >>> Palabras, oraciones y parrafos <<<\n");
    do{
        printf("Agregar parrafo (s/n)? ");
        leer(&opcion, 1);
        if(opcion == 's'){
            leer_parrafo(cadena, &L);
        }
    }while(opcion != 'n');

    printf("%s", cadena);

    FIN("\nFin del programa, pulse Enter para terminar...");
}