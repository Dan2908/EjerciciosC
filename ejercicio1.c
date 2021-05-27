#include <stdio.h>

//------------------ DECLARACIONES -------------------//

const int ARREGLO[10] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
/** Imprime los valores del arreglo separados por "--"*/
void imprimir_arreglo();
/** Suma todos los valores del arreglo y devuelve el total*/
int suma_de_elementos();
/** Imprime todos los valores del arreglo mayores a n*/
void imprimir_mayores(int n);
/** Busca el valor del arreglo en pos, si existe, devuelve su valor*/
int buscar_posicion(int pos);
/** Pide al usuario un valor entero entre min y max inclusive, repite hasta que el usuario ingrese el valor 
 * correctamente*/
int pedir_posicion(int min, int max);
/** Pide al usuario un valor entero. Repite hasta que el usuario ingrese el valor correctamente*/
int pedir_entero();
/** Busca el valor n en el arreglo, si existe, devuelve su posición, sino, devuelve -1*/
int buscar_valor(int n);

//------------------ PROGRAMA -------------------//

int main(){
    int suma = suma_de_elementos(), 
        promedio = suma/10,
        promedio_mitad = promedio/2,
        pos,
        valor;
// a
    printf("\n\t** Mostrar elementos del arreglo **\n");
    imprimir_arreglo();
// b
    printf("\n\t** Suma de elementos **\n"); 
    printf("La suma de todos los elementos del arreglo es: %i\n", suma);
// c
    printf("\n\t** Elementos mayores a la mitad del primedio **\n");
    printf("La mitad del promedio es: %i\n", promedio_mitad);
    imprimir_mayores(promedio_mitad);
// d
    printf("\n\t** Buscar elemento en la posicion **\n");
    pos = pedir_posicion(0, 9); //pedir posición al usuario
    printf("%i->(%i)\n", pos, ARREGLO[pos]);
// e
    printf("\n\t** Buscar elemento en el arreglo **\n");
    printf("Ingrese un valor a buscar en el arreglo: \n");
    valor = pedir_entero();
    pos = buscar_valor(valor);
    if(pos == -1) printf("El valor %i no se encuentra en el arreglo\n", valor);
    else printf("El valor %i se encuentra en la posicion %i del arreglo\n", valor, pos);

    return 0;
}

//------------------ DEFINICIONES -------------------//

void imprimir_arreglo(){
    for(int i = 0; i < 9; i++){
        printf("%i -- ", ARREGLO[i]);
    }
    printf("%i\n", ARREGLO[9]); //Ultimo elemento
}
int suma_de_elementos(){
    int s = 0; //inicializar acumulador
    for(int i = 0; i < 10; i++){
        s += ARREGLO[i];
    }
    return s;
}
void imprimir_mayores(int n){
    printf("elemento->(valor): ");
    for(int i = 0; i < 10; i++){
        if(ARREGLO[i] > n)
            printf("%i->(%i); ", i, ARREGLO[i]);
    }
}
int buscar_posicion(int pos){
    if(pos < 10 && pos > -1){ // Entre 0 y 9.
        return ARREGLO[pos];
    }
}
int pedir_posicion(int min, int max){
    printf("Ingrese una posicion entre %i y %i: ", min, max);
    int pos = pedir_entero();
    while(pos > max || pos < min){
        printf("El valor debe estar entre %i y %i!\n", min, max);
        pos = pedir_entero();
    }
    return pos;
}
int pedir_entero(){
    int entero;
    while(!scanf("%d", &entero)){
        fflush(stdin); // limpia buffer de stdin para volver a pedir.-
        printf("El valor debe ser un numero entero!\n");
    }
    return entero;
}
int buscar_valor(int n){
    for(int i = 0; i < 10; i++){
        if(ARREGLO[i] == n)
            return i;
    }
    return -1;
}