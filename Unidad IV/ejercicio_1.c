#include <stdio.h>
#include <math.h>
/* Macro para pausar el programa*/
#define PAUSA printf("\n..Presione ENTER para continuar..\n"); fflush(stdin); getchar()

//		DECLARACIONES
//___________________________________________________________________________________
static int matriz[4][4];    /*Matriz 4x4*/

int pedir_numero(char * mensaje);   /* Pide numero al usuario hasta que sea un entero válido.*/
int buscar_valor(int valor);        /* Busca el valor dado en la matriz.*/
void buscar_pares();                /* Busca los valores pares en la matriz, imprime cantidad.*/
int primo(int n);                   /* Determina si n es primo (devuelve 0 si no lo es).*/
void buscar_primos();               /* Busca valores primos en la matriz, imprime valor y ubicación i, j.*/

//		PROGRAMA
//___________________________________________________________________________________
int main() {
//a.Cargar la matriz. Mostrar el resultado en forma de matriz.
//b.Calcular la sumatoria de los elementos de la matriz
//c.Calcular el promedio de los elementos de la matriz.
    int suma = 0;
    printf("\n == MATRIZ ==\n");
    printf("\n+-------+-------+-------+-------+\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz[i][j] = (i+1)*10 + j+1;      /* Cargar */
            printf("| %d\t", matriz[i][j]);     /* Imprimir*/
            suma += matriz[i][j];               /* Sumar */
        }
        printf("|\n+-------+-------+-------+-------+\n");
    }
    printf(" > La sumatoria es: %d\n", suma);
    printf(" > El promedio es: %.2f\n", (double)(suma/10));
    PAUSA;
//d.Ingresar un número por pantalla e indicar cuantas veces aparece en la matriz.
    int val = pedir_numero("Ingrese un valor entero a buscar: ");
    if(!buscar_valor(val))  /* Si no encuentra valor*/
        printf("Valor NO encontrado\n");
    PAUSA;
//e.Calcular la traspuesta de M.
    printf("\n == MATRIZ TRANSPUESTA ==\n");
    printf("\n+-------+-------+-------+-------+\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("| %d\t", matriz[j][i]);     /* intercambio i por j*/
        }
        printf("|\n+-------+-------+-------+-------+\n");
    }
    PAUSA;
//f.Cantidad de números pares. Mostrar los números primos. Usar funciones
    printf("\n == VALORES PARES ==\n");
    buscar_pares();
    PAUSA;
    printf("\n == VALORES PRIMOS ==\n");
    buscar_primos();
    printf("\n == FIN ==\n");
    PAUSA;
    return 0;
}

//		DEFINICIONES
//___________________________________________________________________________________
int pedir_numero(char * mensaje){
    int num;
    printf("%s", mensaje);
    while(!scanf("%d", &num)){
        printf("%s", mensaje);
        fflush(stdin);
    }
    return num;
}
int buscar_valor(int valor){
    int res = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] == valor){
                printf("> Matriz[%d][%d] = %d\n", i, j, valor);
                res++;
            }
        }
    }
    return res;
}
void buscar_pares(){
    int res = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j]%2 == 0){
                res++;
            }
        }
    }
    printf("\nSe han encontrado %d valores pares\n", res);
}
int primo(int n){
    /* Johnsonbaugh, R. (2004). Teorema 5.1.7. En Matemáticas Discretas (p.185). 
     * Demuestra que sólo es necesario revisar hasta sqrt(n)*/
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}
void buscar_primos(){
    int res = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(primo(matriz[i][j])){    // Utiliza la función anterior.
                printf("> Matriz[%d][%d] = %d es primo.\n", i, j, matriz[i][j]);
                res++;
            }
        }
    }
    if(!res)
        printf("No se encontraron valores primos\n");
}