#include <stdio.h>
#include <string.h>
#define PAUSA fflush(stdin); getchar()

/** ---------------------- Declaraciones ----------------------*/

const static unsigned N = 30;       //Longitud de cadenas

/** ---------------------- Programa ----------------------*/

int main(){
    char cadenas[3][N];                 //vector de 3 cadenas
    unsigned longitudes[3];             //Arreglo de 3 enteros para guardar las longitudes
    unsigned orden[3] = {0, 1, 2};      //Contiene los indices de las cadenas

    printf("\n\t == CADENAS ==\n");
//Ingresar cadenas
    printf("\nIngresar 3 cadenas\n");
    for(int i = 0; i < 3; i++){
        printf(" => Cadena %d:\n\t", i+1);  // i             = [0]          [1]        [2]
        gets(cadenas[i]);                   // cadenas[i]    = "una cadena" "cadena 1" "otra"
        longitudes[i] = strlen(cadenas[i]); // longitudes[i] = 10           8           4
    }
//Ordenar
    do{
        int flag = 0;               //Flag para indicar si hay cambios
        for(int i = 0; i < 2; i++){
            int p = orden[i];
            if(longitudes[p] > longitudes[ orden[i+1] ]){
                orden[i] = orden[i+1];
                orden[i+1] = p;
                flag = 1;           //Indica que hubo intercambio
            }
        }
    }while(flag);   //Cuando no hay intercambio, la secuencia está ordenada
//Imprimir
    printf("\n => Cadenas de menor a mayor:\n");
    for(int i = 0; i < 3; i++){
        int p = orden[i];
        printf("Cadena %d: \"%s\", longitud: %d\n", p+1, cadenas[p], longitudes[p]);
    }
//Fin
    printf("\nFin del programa, presione Enter para salir...");
    PAUSA;
    return 0;
}
