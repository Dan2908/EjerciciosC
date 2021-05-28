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
        printf("Cadena %d: \"%s\", longitud: %d\n", i, c[i], strlen(c[i]));
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

void verificar_y_cambiar(char * c1, char * c2){
    if(strlen(c1) > strlen(c2))
        intercambiar(c1, c2); 
}


void ordenar(char* cadenas[], int tam){
    if(tam > 1){
        int medio = tam/2
    }
    verificar_y_cambiar(&cadenas[0], &cadenas[1]);
    if(tam > 2){
        ordenar(cadenas[1], tam - 1);
        ordenar(cadenas, 2);
    }
        
    return;
}

/*
    |6|5|4|3|2|1|, 6
        ->  X0 |5|6|4|3|2|1|
        ->  |6|4|3|2|1|, 5
                ->  X1 |5|4|6|3|2|1|
                -> |6|3|2|1|, 4
                    -> X2 |5|4|3|6|2|1|
                    -> |6|2|1|, 3
                        -> X3 |5|4|3|2|6|1|
                        -> |6|1|, 2
                            -> X4 |5|4|3|2|1|6|
                            R
                        -> |2|1|6|, 2
                                ->  X5 |5|4|3|1|2|6|
                                R
                        R
                    -> |3|1|2|6|, 2
                        -> X6 |5|4|1|3|2|6|
                        R
                    -> |3|2|, 2

                    R
                -> |4|1|3|2|6|, 2
                    -> X7 |5|1|4|3|2|6|
                    R
                R
        -> |5|1|4|3|2|6|, 2
            -> X8 |1|5|4|3|2|6|
            R
        R

    |6|5|4|3|, 4
        -> X0 |5|6|4|3|
        -> |6|4|3|, 3
            -> X2 |5|4|6|3|
            -> |6|3|, 2
                -> X4 |5|4|3|6|
                R
            R
        -> |4|3|, 2
            ->  X1 |5|3|4|6|
            R

    |6|5|4|3|2|1|
    |5|6|4|3|2|1| 01
    |5|4|6|3|2|1| 12
    |5|4|3|6|2|1| 23
    |5|4|3|2|6|1| 34
    |5|4|3|2|1|6| 45
    |5|4|3|1|2|6| 34
    |5|4|1|3|2|6| 23
    |5|1|4|3|2|6| 12
    |1|5|4|3|2|6| 01
    |1|4|5|3|2|6| 12
    |1|4|3|5|2|6| 23
    |1|4|3|2|5|6| 34
    |1|4|2|3|5|6| 23
    |1|2|4|3|5|6| 12
    |1|2|3|4|5|6| 23

    8x28
    7
    6                           67
    5                       56      56                                      56
    4                   45              45                              45      45                      45
    3               34                      34                      34              34              34      34      34
    2           23                              23              23                      23      23              23
    1       12                                      12      12                              12
    0   01                                              01

    7x21
    6                           
    5                       56                                     
    4                   45      45                              45                         
    3               34              34                      34      34              34
    2           23                      23              23              23      23      23
    1       12                              12      12                      12
    0   01                                      01

    6x15              
    5                                                           
    4                   45                                                       
    3               34      34                      34           
    2           23              23              23      23      23  
    1       12                      12      12              12
    0   01                              01

    5x10                                                     
    4                                                                         
    3               34         
    2           23      23              23 
    1       12              12      12      12
    0   01                      01

    4x6                                                                  
    3                        
    2           23              
    1       12      12      12
    0   01              01

    3x3                  
    2                      
    1       12 
    0   01     01

    2x1                      
    1       
    0   01    
*/