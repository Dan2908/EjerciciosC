/*Dada un arreglo de 10 números enteros positivos, generar un nuevo vector con aquellos números que son múltiplos  
de 3 y otro con el resto de los elementos del vector original. Mostrar los tres vectores.*/
#include <stdio.h>

int arreglo[10] = {3, 5, 9, 17, 33, 65, 129, 257, 513, 1025};
int auxSi[10], auxNo[10];   //arreglos auxiliares
int p_si = 0, p_no = 0; // Punteros

int main(){
    int contador = 0;
    for(int i = 0; i < 10; i++){
        if(arreglo[i]%3 == 0){  //Es multiplo de 3
            auxSi[p_si] = arreglo[i];
            p_si++;
            contador++;
        }
        else{
            auxNo[p_no] = arreglo[i];
            p_no++;
        }
    }
//----------------------- Definir arreglos --------------------
    int multiplos[contador];        //arreglo con multiplos de 3
    int noMultiplos[10-contador];   //Arreglo con el resto
//----------------------- Cargar arreglos -------------------
    for(int i = 0; i < contador; i++){
        multiplos[i] = auxSi[i];
    }
    for(int i = 0; i < (10-contador); i++){
        noMultiplos[i] = auxNo[i];
    }
//----------------------- Imprimir arreglos -------------------
    printf("\t === Arreglo Original ===\n");
    for(int i = 0; i < 10; i++){
        printf("%i ", arreglo[i]);
    }
    printf("\n\t === Arreglo con sus multiplos de 3 (%i elementos) ===\n", contador);
    for(int i = 0; i < contador; i++){
        printf("%i ", multiplos[i]);
    }
    printf("\n\t === Arreglo el resto de elementos (%i elementos) ===\n", 10 - contador);
    for(int i = 0; i < (10-contador); i++){
        printf("%i ", noMultiplos[i]);
    }

    return 0;
}
