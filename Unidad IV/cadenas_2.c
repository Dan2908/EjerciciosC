#include <stdio.h>
#include <ctype.h>  // contiene funcion tolower()
#define PAUSA fflush(stdin); getchar()
#define ELEGIR(x) fflush(stdin); x = tolower(getchar());


int main(){
    char cadena[250];
    unsigned i = 0;
    char opcion = 's';

    while(opcion == 's' || opcion != 'n'){
        printf("Desea agregar un parrafo? [s/n]? ");
        ELEGIR(opcion);
        while(opcion == 's'){
            printf("\t- Desea agregar una oracion? [s/n]? ");
            ELEGIR(opcion);
            if(opcion == 's'){
                fflush(stdin);
                printf("\t- Escriba la oracion, finalizar con Enter...\n\t   ");
                gets(&cadena[i]);
                while (cadena[i] != '\0'){
                    i++;
                }
                cadena[i] = '.';    //Fin de oracion
                i++;
            }
            if(opcion == 'n'){
                cadena[i] = ';';    // fin de parrafo
                opcion = 's';
                i++;
                break;
            }
        }
    }

    i = 0;
    while(cadena[i] != '\0'){
        if(cadena[i] == '.'){
            printf(" ");
            i++;
        }
        if(cadena[i] == ';'){
            printf("\n\n");
            i++;
        }
        printf("%c", cadena[i]);
        i++;
    }
    printf("%s", cadena);
    // gets(cadena[i]);

    return 0;
}